#include "edit_list.h"
#include "ui_edit_list.h"

Edit_List::Edit_List(std::shared_ptr<Zoo_kotkov> zoo, QWidget *parent)
    : QDialog(parent)
    , zoo_ptr(zoo)
    , ui(new Ui::Edit_List)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(),this->height());

    //for_each переделать
    for_each(zoo->get_animals_ref().begin(),zoo->get_animals_ref().end(), [&](std::shared_ptr<Animal_kotkov> animal){
        ui->animals_list->addItem(QString::fromLocal8Bit(animal->get_name()));
    });

    //ui->animals_list->setCurrentRow(0);
}

Edit_List::~Edit_List()
{
    delete ui;
}

void Edit_List::on_delete_item_clicked()
{
    if (ui->animals_list->count() == 0){
        QMessageBox msg;
        msg.setText("Список пуст");
        msg.setWindowTitle("Ошибка");
        msg.setIcon(QMessageBox::Critical);
        msg.exec();
        return;
    }
    int currentRow = ui->animals_list->currentRow();
    auto selected = zoo_ptr->get_animals_ref().begin() + currentRow;
    //if(ui->animals_list->count()!=1){
    ui->animals_list->takeItem(currentRow);
    //}
    zoo_ptr->get_animals_ref().erase(selected);
}


void Edit_List::on_add_item_clicked()
{
    Add_Item dialog(zoo_ptr, this);
    if(dialog.exec() == QDialog::Accepted){
        zoo_ptr = dialog.zoo_ptr;
        ui->animals_list->addItem(QString::fromLocal8Bit(zoo_ptr->get_animals()[zoo_ptr->get_animals().size() - 1]->get_name()));
        ui->animals_list->setCurrentRow(ui->animals_list->count() - 1);
    }
}


void Edit_List::on_edit_item_clicked()
{
    int currentRow = ui->animals_list->currentRow();
    auto selected = zoo_ptr->get_animals_ref()[currentRow];
    Add_Item dialog(selected, this);
    if(dialog.exec() == QDialog::Accepted){
        selected = dialog.animal_ptr;
        ui->animals_list->currentItem()->setText(QString::fromLocal8Bit(selected->get_name()));
        ui->animals_list->clearSelection();
        if(currentRow == 0){
            ui->animals_list->setCurrentRow(1);
            ui->animals_list->setCurrentRow(currentRow);
        }
        else{
            ui->animals_list->setCurrentRow(0);
            ui->animals_list->setCurrentRow(currentRow);
        }

    }

}


void Edit_List::on_animals_list_currentRowChanged(int currentRow)
{
    if (currentRow < 0){
        ui->label_name->setText("");
        ui->label_month->setText("");
        ui->label_year->setText("");
        ui->label_weight->setText("");
        ui->label_predator->setText("");
        ui->label_fly->setText("");
        return;
    }
    auto selected = zoo_ptr->get_animals_ref()[currentRow];
    auto check_type = std::dynamic_pointer_cast<Bird>(selected);
    ui->label_name->setText(QString::fromLocal8Bit(selected->get_name()));
    ui->label_month->setText(QString::number(selected->get_month()));
    ui->label_year->setText(QString::number(selected->get_year()));
    ui->label_weight->setText(QString::number(selected->get_weight()));
    if(selected->get_predator()){
        ui->label_predator->setText("да");
    }
    else{
        ui->label_predator->setText("нет");
    }
    if(check_type){
        ui->label_bird->setText("Умеет летать?");
        if(check_type->get_fly()){
            ui->label_fly->setText("да");
        }
        else{
            ui->label_fly->setText("нет");
        }
    }
    else{
        ui->label_bird->setText("");
        ui->label_fly->setText("");

    }
}


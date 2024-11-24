#include "editlist.h"
#include "ui_editlist.h"

EditList::EditList(std::shared_ptr<Zoo_kotkov> zoo, QWidget *parent)
    : QDialog(parent)
    , zoo_ptr(zoo)
    , ui(new Ui::EditList)
{
    ui->setupUi(this);

    //for_each переделать

    for (auto& animal : zoo->get_animals()){
        ui->animals_list->addItem(QString::fromLocal8Bit(animal->get_name()));
    }
    ui->animals_list->setCurrentRow(0);
}

EditList::~EditList()
{
    delete ui;
}

void EditList::on_delete_item_clicked()
{
    if (ui->animals_list->count() == 0){
        QMessageBox msg;
        msg.setText("List is empty");
        msg.setWindowTitle("Error");
        msg.setIcon(QMessageBox::Warning);
        msg.exec();
        return;
    }
    int currentRow = ui->animals_list->currentRow();
    auto selected = zoo_ptr->get_animals_ref().begin() + currentRow;
    ui->animals_list->takeItem(currentRow);
    zoo_ptr->get_animals_ref().erase(selected);

}

void EditList::on_add_item_clicked()
{
    Add_dialog add_dlg(this);
    add_dlg.exec();
}


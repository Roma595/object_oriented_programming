#include "add_item.h"
#include "ui_add_item.h"


Add_Item::Add_Item(std::shared_ptr<Zoo_kotkov> zoo, QWidget *parent)
    : QDialog(parent)
    , zoo_ptr(zoo)
    , m_doubleValidator(0.5, 10000, 2, this)
    , ui(new Ui::Add_Item)
{
    ui->setupUi(this);
    m_doubleValidator.setNotation(QDoubleValidator::StandardNotation);
    m_doubleValidator.setLocale(QLocale::C);
    this->setFixedSize(this->width(),this->height());
}

Add_Item::Add_Item(std::shared_ptr<Animal_kotkov> animal, QWidget *parent)
    : QDialog(parent)
    , animal_ptr(animal)
    , m_doubleValidator(0.5, 10000, 2, this)
    , ui(new Ui::Add_Item)
{
    ui->setupUi(this);
    _edit = true;
    m_doubleValidator.setNotation(QDoubleValidator::StandardNotation);
    m_doubleValidator.setLocale(QLocale::C);
    this->setFixedSize(this->width(),this->height());
    auto check_type = std::dynamic_pointer_cast<Bird>(animal);
    if(check_type){
        ui->tabWidget->setCurrentIndex(1);
        ui->add_bird_button->setText("Редактировать");
        ui->bird_name->setText(QString::fromLocal8Bit(animal->get_name()));
        ui->bird_month->setCurrentIndex(animal->get_month() - 1);
        int year_index = 0;
        if(animal->get_year()/1000 == 1){
            year_index = animal->get_year()%100;
        }
        else{
            year_index = animal->get_year()%100 + 100;
        }
        ui->bird_year->setCurrentIndex(year_index);
        ui->bird_weight->setText(QString::number(animal->get_weight()));
        ui->bird_predator->setChecked(animal->get_predator());
        ui->bird_fly->setChecked(animal->get_fly());
    }
    else{
        ui->tabWidget->setCurrentIndex(0);
        ui->add_animal_button->setText("Редактировать");
        ui->animal_name->setText(QString::fromLocal8Bit(animal->get_name()));
        ui->animal_month->setCurrentIndex(animal->get_month() - 1);
        int year_index = 0;
        if(animal->get_year()/1000 == 1){
            year_index = animal->get_year()%100;
        }
        else{
            year_index = animal->get_year()%100 + 100;
        }
        ui->animal_year->setCurrentIndex(year_index);
        ui->animal_weight->setText(QString::number(animal->get_weight()));
        ui->animal_predator->setChecked(animal->get_predator());
    }
}


Add_Item::~Add_Item()
{
    delete ui;
}

void Add_Item::on_add_animal_button_clicked()
{
    std::string name = ui->animal_name->text().toLocal8Bit().constData();
    int month = ui->animal_month->currentText().toInt();
    int year = ui->animal_year->currentText().toInt();
    QString weight = ui->animal_weight->text();
    int pos = 0;
    bool predator = false;
    if (ui->animal_predator->checkState() == Qt::Checked){
        predator = true;
    }

    QValidator::State state = m_doubleValidator.validate(weight, pos);
    if(!name.empty() && state == QValidator::Acceptable){
        double w = ui->animal_weight->text().toDouble();
        if(_edit){
            animal_ptr->set_name(name);
            animal_ptr->set_month(month);
            animal_ptr->set_year(year);
            animal_ptr->set_weight(w);
            animal_ptr->set_predator(predator);
        }
        else{
            std::shared_ptr<Animal_kotkov> animal_pt = std::make_shared<Animal_kotkov>();
            animal_pt->set_name(name);
            animal_pt->set_month(month);
            animal_pt->set_year(year);
            animal_pt->set_weight(w);
            animal_pt->set_predator(predator);
            zoo_ptr->get_animals_ref().push_back(animal_pt);
        }

        done(QDialog::Accepted);
    }
    else{
        ui->inf_text_animal->setText("Данные некорректны. Попробуйте снова.");
    }

}


void Add_Item::on_add_bird_button_clicked()
{
    std::string name = ui->bird_name->text().toLocal8Bit().constData();
    int month = ui->bird_month->currentText().toInt();
    int year = ui->bird_year->currentText().toInt();
    QString weight = ui->bird_weight->text();
    bool predator = false;
    bool fly = false;
    if(ui->bird_predator->checkState() == Qt::Checked){
        predator = true;
    }
    if(ui->bird_fly->checkState() == Qt::Checked){
        fly = true;
    }

    int pos = 0;

    QValidator::State state = m_doubleValidator.validate(weight, pos);
    if(!name.empty() && state == QValidator::Acceptable){
        double w = ui->bird_weight->text().toDouble();
        if(_edit){
            auto bird_ptr = std::dynamic_pointer_cast<Bird>(animal_ptr);
            bird_ptr->set_name(name);
            bird_ptr->set_month(month);
            bird_ptr->set_year(year);
            bird_ptr->set_weight(w);
            bird_ptr->set_predator(predator);
            bird_ptr->set_fly(fly);
        }
        else{
            std::shared_ptr<Bird> animal_pt = std::make_shared<Bird>();
            animal_pt->set_name(name);
            animal_pt->set_month(month);
            animal_pt->set_year(year);
            animal_pt->set_weight(w);
            animal_pt->set_predator(predator);
            animal_pt->set_fly(fly);
            zoo_ptr->get_animals_ref().push_back(animal_pt);
        }
        done(QDialog::Accepted);
    }
    else{
        ui->inf_text_bird->setText("Данные некорректны. Попробуйте снова.");
    }

}


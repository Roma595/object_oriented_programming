#include "add_dialog.h"
#include "ui_add_dialog.h"

Add_dialog::Add_dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Add_dialog)
{
    ui->setupUi(this);
}

Add_dialog::~Add_dialog()
{
    delete ui;
}

#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QMessageBox>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Open_triggered()
{
    fileName = QFileDialog::getOpenFileName(this, tr("Open"), "C:/Users/kotko/Documents/GitHub/object_oriented_programming/lab4", tr("Text file(*.txt)"));
    if (!fileName.isEmpty())
        ui->list_widget->load(fileName);

}

void MainWindow::on_Save_triggered()
{
    fileName = QFileDialog::getSaveFileName(this, tr("Save as"), "C:/Users/kotko/Documents/GitHub/object_oriented_programming/lab3_OOP", tr("Text file(*.txt)"));
    if (!fileName.isEmpty())
        ui->list_widget->save(fileName);
}

void MainWindow::on_CLear_triggered()
{
    ui->list_widget->clear();
}


void MainWindow::on_Edit_List_triggered()
{
    if(!ui->list_widget->zoo.get_animals().empty()){
        std::shared_ptr<Zoo_kotkov> zoo_ptr = std::make_shared<Zoo_kotkov>(ui->list_widget->zoo);
        EditList dialog(zoo_ptr, this);
        if(dialog.exec() == QDialog::Accepted){
            ui->list_widget->zoo = *dialog.zoo_ptr;
        }
    }
    else{
        QMessageBox msgBox;
        msgBox.setWindowTitle("Error");
        msgBox.setText(QString::fromLocal8Bit("List is empty"));
        msgBox.setIcon(QMessageBox::Critical);
        msgBox.exec();
    }
}


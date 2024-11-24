#include "mainwindow.h"
#include "./ui_mainwindow.h"


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
    fileName = QFileDialog::getOpenFileName(this, tr("Open"), "C:/Users/kotko/Documents/GitHub/object_oriented_programming/lab3_OOP", tr("Text file(*.txt)"));
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


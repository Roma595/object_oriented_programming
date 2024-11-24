#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "editlist.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QString fileName;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Open_triggered();

    void on_Save_triggered();

    void on_CLear_triggered();

    void on_Edit_List_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

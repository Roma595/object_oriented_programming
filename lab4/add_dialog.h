#ifndef ADD_DIALOG_H
#define ADD_DIALOG_H

#include <QDialog>

namespace Ui {
class Add_dialog;
}

class Add_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Add_dialog(QWidget *parent = nullptr);
    ~Add_dialog();

private:
    Ui::Add_dialog *ui;
};

#endif // ADD_DIALOG_H

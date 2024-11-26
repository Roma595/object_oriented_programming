#ifndef EDITLIST_H
#define EDITLIST_H

#include <QDialog>
#include <QMessageBox>

#include "Zoo_kotkov.h"
//#include "add_dialog.h"


namespace Ui {
class EditList;
}

class EditList : public QDialog
{
    Q_OBJECT

public:
    explicit EditList(std::shared_ptr<Zoo_kotkov> zoo, QWidget *parent = nullptr);
    std::shared_ptr<Zoo_kotkov> zoo_ptr;
    ~EditList();

private slots:

    void on_delete_item_clicked();

    void on_add_item_clicked();

private:
    Ui::EditList *ui;
};

#endif // EDITLIST_H

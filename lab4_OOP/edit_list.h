#ifndef EDIT_LIST_H
#define EDIT_LIST_H

#include <QDialog>
#include <QMessageBox>

#include "Zoo_kotkov.h"
#include "add_item.h"

namespace Ui {
class Edit_List;
}

class Edit_List : public QDialog
{
    Q_OBJECT

public:
    explicit Edit_List(std::shared_ptr<Zoo_kotkov> zoo, QWidget *parent = nullptr);
    std::shared_ptr<Zoo_kotkov> zoo_ptr;
    ~Edit_List();

private slots:
    void on_delete_item_clicked();

    void on_add_item_clicked();

    void on_edit_item_clicked();

    void on_animals_list_currentRowChanged(int currentRow);

private:
    Ui::Edit_List *ui;
};

#endif // EDIT_LIST_H

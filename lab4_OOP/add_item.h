#ifndef ADD_ITEM_H
#define ADD_ITEM_H

#include <QDialog>
#include "Zoo_kotkov.h"
#include "Animal_kotkov.h"
#include "Bird.h"
#include <QDoubleValidator>
#include <QValidator>

namespace Ui {
class Add_Item;
}

class Add_Item : public QDialog
{
    Q_OBJECT

public:
    explicit Add_Item(std::shared_ptr<Zoo_kotkov> zoo, QWidget *parent = nullptr);
    explicit Add_Item(std::shared_ptr<Animal_kotkov> animal, QWidget *parent = nullptr);
    std::shared_ptr<Zoo_kotkov> zoo_ptr;
    std::shared_ptr<Animal_kotkov> animal_ptr;
    ~Add_Item();

private slots:
    void on_add_animal_button_clicked();

    void on_add_bird_button_clicked();

private:
    Ui::Add_Item *ui;
    QDoubleValidator m_doubleValidator;
    bool _edit = false;
};

#endif // ADD_ITEM_H

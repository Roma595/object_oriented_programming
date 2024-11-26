/********************************************************************************
** Form generated from reading UI file 'edit_list.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_LIST_H
#define UI_EDIT_LIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Edit_List
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *add_item;
    QPushButton *edit_item;
    QPushButton *delete_item;
    QListWidget *animals_list;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *ok_button;
    QPushButton *cancel_button;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_bird;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_name;
    QLabel *label_month;
    QLabel *label_year;
    QLabel *label_weight;
    QLabel *label_predator;
    QLabel *label_fly;

    void setupUi(QDialog *Edit_List)
    {
        if (Edit_List->objectName().isEmpty())
            Edit_List->setObjectName("Edit_List");
        Edit_List->resize(599, 511);
        layoutWidget = new QWidget(Edit_List);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(430, 80, 131, 121));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        add_item = new QPushButton(layoutWidget);
        add_item->setObjectName("add_item");

        verticalLayout->addWidget(add_item);

        edit_item = new QPushButton(layoutWidget);
        edit_item->setObjectName("edit_item");

        verticalLayout->addWidget(edit_item);

        delete_item = new QPushButton(layoutWidget);
        delete_item->setObjectName("delete_item");

        verticalLayout->addWidget(delete_item);

        animals_list = new QListWidget(Edit_List);
        animals_list->setObjectName("animals_list");
        animals_list->setGeometry(QRect(30, 30, 331, 201));
        layoutWidget_2 = new QWidget(Edit_List);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(390, 460, 195, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ok_button = new QPushButton(layoutWidget_2);
        ok_button->setObjectName("ok_button");

        horizontalLayout->addWidget(ok_button);

        cancel_button = new QPushButton(layoutWidget_2);
        cancel_button->setObjectName("cancel_button");

        horizontalLayout->addWidget(cancel_button);

        widget = new QWidget(Edit_List);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 260, 141, 181));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        verticalLayout_2->addWidget(label_5);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        label_bird = new QLabel(widget);
        label_bird->setObjectName("label_bird");

        verticalLayout_2->addWidget(label_bird);

        widget1 = new QWidget(Edit_List);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(190, 260, 391, 181));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_name = new QLabel(widget1);
        label_name->setObjectName("label_name");

        verticalLayout_3->addWidget(label_name);

        label_month = new QLabel(widget1);
        label_month->setObjectName("label_month");

        verticalLayout_3->addWidget(label_month);

        label_year = new QLabel(widget1);
        label_year->setObjectName("label_year");

        verticalLayout_3->addWidget(label_year);

        label_weight = new QLabel(widget1);
        label_weight->setObjectName("label_weight");

        verticalLayout_3->addWidget(label_weight);

        label_predator = new QLabel(widget1);
        label_predator->setObjectName("label_predator");

        verticalLayout_3->addWidget(label_predator);

        label_fly = new QLabel(widget1);
        label_fly->setObjectName("label_fly");

        verticalLayout_3->addWidget(label_fly);


        retranslateUi(Edit_List);
        QObject::connect(ok_button, &QPushButton::clicked, Edit_List, qOverload<>(&QDialog::accept));
        QObject::connect(cancel_button, &QPushButton::clicked, Edit_List, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Edit_List);
    } // setupUi

    void retranslateUi(QDialog *Edit_List)
    {
        Edit_List->setWindowTitle(QCoreApplication::translate("Edit_List", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \321\201\320\277\320\270\321\201\320\272\320\260", nullptr));
        add_item->setText(QCoreApplication::translate("Edit_List", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        edit_item->setText(QCoreApplication::translate("Edit_List", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        delete_item->setText(QCoreApplication::translate("Edit_List", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        ok_button->setText(QCoreApplication::translate("Edit_List", "\320\236\320\272", nullptr));
        cancel_button->setText(QCoreApplication::translate("Edit_List", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        label->setText(QCoreApplication::translate("Edit_List", "\320\230\320\274\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("Edit_List", "\320\234\320\265\321\201\321\217\321\206 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("Edit_List", "\320\223\320\276\320\264 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_5->setText(QCoreApplication::translate("Edit_List", "\320\222\320\265\321\201, \320\272\320\263", nullptr));
        label_3->setText(QCoreApplication::translate("Edit_List", "\320\245\320\270\321\211\320\275\320\270\320\272?", nullptr));
        label_bird->setText(QCoreApplication::translate("Edit_List", "TextLabel", nullptr));
        label_name->setText(QString());
        label_month->setText(QString());
        label_year->setText(QString());
        label_weight->setText(QString());
        label_predator->setText(QString());
        label_fly->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Edit_List: public Ui_Edit_List {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_LIST_H

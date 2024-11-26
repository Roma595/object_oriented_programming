/********************************************************************************
** Form generated from reading UI file 'editlist.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITLIST_H
#define UI_EDITLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditList
{
public:
    QListWidget *animals_list;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *add_item;
    QPushButton *edit_item;
    QPushButton *delete_item;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *ok_button;
    QPushButton *cancel_button;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *ok_button_2;
    QPushButton *cancel_button_2;

    void setupUi(QWidget *EditList)
    {
        if (EditList->objectName().isEmpty())
            EditList->setObjectName("EditList");
        EditList->resize(614, 515);
        animals_list = new QListWidget(EditList);
        animals_list->setObjectName("animals_list");
        animals_list->setGeometry(QRect(25, 21, 351, 331));
        layoutWidget = new QWidget(EditList);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(430, 50, 131, 121));
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

        layoutWidget1 = new QWidget(EditList);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(410, 470, 195, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ok_button = new QPushButton(layoutWidget1);
        ok_button->setObjectName("ok_button");

        horizontalLayout->addWidget(ok_button);

        cancel_button = new QPushButton(layoutWidget1);
        cancel_button->setObjectName("cancel_button");

        horizontalLayout->addWidget(cancel_button);

        layoutWidget_2 = new QWidget(EditList);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(370, 430, 195, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        ok_button_2 = new QPushButton(layoutWidget_2);
        ok_button_2->setObjectName("ok_button_2");

        horizontalLayout_2->addWidget(ok_button_2);

        cancel_button_2 = new QPushButton(layoutWidget_2);
        cancel_button_2->setObjectName("cancel_button_2");

        horizontalLayout_2->addWidget(cancel_button_2);


        retranslateUi(EditList);

        QMetaObject::connectSlotsByName(EditList);
    } // setupUi

    void retranslateUi(QWidget *EditList)
    {
        EditList->setWindowTitle(QCoreApplication::translate("EditList", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \321\201\320\277\320\270\321\201\320\272\320\260", nullptr));
        add_item->setText(QCoreApplication::translate("EditList", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        edit_item->setText(QCoreApplication::translate("EditList", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        delete_item->setText(QCoreApplication::translate("EditList", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        ok_button->setText(QCoreApplication::translate("EditList", "\320\236\320\272", nullptr));
        cancel_button->setText(QCoreApplication::translate("EditList", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        ok_button_2->setText(QCoreApplication::translate("EditList", "\320\236\320\272", nullptr));
        cancel_button_2->setText(QCoreApplication::translate("EditList", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditList: public Ui_EditList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITLIST_H

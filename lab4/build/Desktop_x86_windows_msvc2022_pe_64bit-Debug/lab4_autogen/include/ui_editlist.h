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
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *add_item;
    QPushButton *edit_item;
    QPushButton *delete_item;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QWidget *EditList)
    {
        if (EditList->objectName().isEmpty())
            EditList->setObjectName("EditList");
        EditList->resize(599, 511);
        animals_list = new QListWidget(EditList);
        animals_list->setObjectName("animals_list");
        animals_list->setGeometry(QRect(25, 21, 351, 331));
        widget = new QWidget(EditList);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(430, 50, 131, 121));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        add_item = new QPushButton(widget);
        add_item->setObjectName("add_item");

        verticalLayout->addWidget(add_item);

        edit_item = new QPushButton(widget);
        edit_item->setObjectName("edit_item");

        verticalLayout->addWidget(edit_item);

        delete_item = new QPushButton(widget);
        delete_item->setObjectName("delete_item");

        verticalLayout->addWidget(delete_item);

        widget1 = new QWidget(EditList);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(410, 470, 169, 31));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(widget1);
        pushButton_4->setObjectName("pushButton_4");

        horizontalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(widget1);
        pushButton_5->setObjectName("pushButton_5");

        horizontalLayout->addWidget(pushButton_5);


        retranslateUi(EditList);

        QMetaObject::connectSlotsByName(EditList);
    } // setupUi

    void retranslateUi(QWidget *EditList)
    {
        EditList->setWindowTitle(QCoreApplication::translate("EditList", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \321\201\320\277\320\270\321\201\320\272\320\260", nullptr));
        add_item->setText(QCoreApplication::translate("EditList", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        edit_item->setText(QCoreApplication::translate("EditList", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        delete_item->setText(QCoreApplication::translate("EditList", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton_4->setText(QCoreApplication::translate("EditList", "\320\236\320\272", nullptr));
        pushButton_5->setText(QCoreApplication::translate("EditList", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditList: public Ui_EditList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITLIST_H

/********************************************************************************
** Form generated from reading UI file 'add_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_DIALOG_H
#define UI_ADD_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Add_dialog
{
public:
    QTabWidget *tabWidget;
    QWidget *add_animal;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QCheckBox *checkBox;
    QWidget *add_bird;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;

    void setupUi(QDialog *Add_dialog)
    {
        if (Add_dialog->objectName().isEmpty())
            Add_dialog->setObjectName("Add_dialog");
        Add_dialog->resize(483, 489);
        tabWidget = new QTabWidget(Add_dialog);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 481, 491));
        tabWidget->setMinimumSize(QSize(481, 491));
        tabWidget->setMaximumSize(QSize(481, 491));
        add_animal = new QWidget();
        add_animal->setObjectName("add_animal");
        widget = new QWidget(add_animal);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(270, 390, 201, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        widget1 = new QWidget(add_animal);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(21, 41, 181, 231));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget1);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget1);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget1);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(widget1);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);

        widget2 = new QWidget(add_animal);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(210, 40, 251, 231));
        verticalLayout_2 = new QVBoxLayout(widget2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(widget2);
        lineEdit->setObjectName("lineEdit");

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(widget2);
        lineEdit_2->setObjectName("lineEdit_2");

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(widget2);
        lineEdit_3->setObjectName("lineEdit_3");

        verticalLayout_2->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(widget2);
        lineEdit_4->setObjectName("lineEdit_4");

        verticalLayout_2->addWidget(lineEdit_4);

        checkBox = new QCheckBox(widget2);
        checkBox->setObjectName("checkBox");

        verticalLayout_2->addWidget(checkBox);

        tabWidget->addTab(add_animal, QString());
        add_bird = new QWidget();
        add_bird->setObjectName("add_bird");
        layoutWidget_2 = new QWidget(add_bird);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(270, 390, 201, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(layoutWidget_2);
        pushButton_5->setObjectName("pushButton_5");

        horizontalLayout_3->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(layoutWidget_2);
        pushButton_6->setObjectName("pushButton_6");

        horizontalLayout_3->addWidget(pushButton_6);

        layoutWidget_3 = new QWidget(add_bird);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(20, 40, 181, 271));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_3);
        label_6->setObjectName("label_6");

        verticalLayout_3->addWidget(label_6);

        label_7 = new QLabel(layoutWidget_3);
        label_7->setObjectName("label_7");

        verticalLayout_3->addWidget(label_7);

        label_8 = new QLabel(layoutWidget_3);
        label_8->setObjectName("label_8");

        verticalLayout_3->addWidget(label_8);

        label_9 = new QLabel(layoutWidget_3);
        label_9->setObjectName("label_9");

        verticalLayout_3->addWidget(label_9);

        label_10 = new QLabel(layoutWidget_3);
        label_10->setObjectName("label_10");

        verticalLayout_3->addWidget(label_10);

        label_11 = new QLabel(layoutWidget_3);
        label_11->setObjectName("label_11");

        verticalLayout_3->addWidget(label_11);

        layoutWidget_4 = new QWidget(add_bird);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(210, 40, 251, 271));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        lineEdit_5 = new QLineEdit(layoutWidget_4);
        lineEdit_5->setObjectName("lineEdit_5");

        verticalLayout_4->addWidget(lineEdit_5);

        lineEdit_6 = new QLineEdit(layoutWidget_4);
        lineEdit_6->setObjectName("lineEdit_6");

        verticalLayout_4->addWidget(lineEdit_6);

        lineEdit_7 = new QLineEdit(layoutWidget_4);
        lineEdit_7->setObjectName("lineEdit_7");

        verticalLayout_4->addWidget(lineEdit_7);

        lineEdit_8 = new QLineEdit(layoutWidget_4);
        lineEdit_8->setObjectName("lineEdit_8");

        verticalLayout_4->addWidget(lineEdit_8);

        checkBox_2 = new QCheckBox(layoutWidget_4);
        checkBox_2->setObjectName("checkBox_2");

        verticalLayout_4->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(layoutWidget_4);
        checkBox_3->setObjectName("checkBox_3");

        verticalLayout_4->addWidget(checkBox_3);

        tabWidget->addTab(add_bird, QString());

        retranslateUi(Add_dialog);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Add_dialog);
    } // setupUi

    void retranslateUi(QDialog *Add_dialog)
    {
        Add_dialog->setWindowTitle(QCoreApplication::translate("Add_dialog", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Add_dialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Add_dialog", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        label->setText(QCoreApplication::translate("Add_dialog", "\320\230\320\274\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("Add_dialog", "\320\234\320\265\321\201\321\217\321\206 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("Add_dialog", "\320\223\320\276\320\264 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("Add_dialog", "\320\222\320\265\321\201, \320\272\320\263", nullptr));
        label_5->setText(QCoreApplication::translate("Add_dialog", "\320\245\320\270\321\211\320\275\320\270\320\272? ", nullptr));
        checkBox->setText(QCoreApplication::translate("Add_dialog", "\320\264\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(add_animal), QCoreApplication::translate("Add_dialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\266\320\270\320\262\320\276\321\202\320\275\320\276\320\265", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Add_dialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Add_dialog", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        label_6->setText(QCoreApplication::translate("Add_dialog", "\320\230\320\274\321\217", nullptr));
        label_7->setText(QCoreApplication::translate("Add_dialog", "\320\234\320\265\321\201\321\217\321\206 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_8->setText(QCoreApplication::translate("Add_dialog", "\320\223\320\276\320\264 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_9->setText(QCoreApplication::translate("Add_dialog", "\320\222\320\265\321\201, \320\272\320\263", nullptr));
        label_10->setText(QCoreApplication::translate("Add_dialog", "\320\245\320\270\321\211\320\275\320\270\320\272? ", nullptr));
        label_11->setText(QCoreApplication::translate("Add_dialog", "\320\243\320\274\320\265\320\265\321\202 \320\273\320\265\321\202\320\260\321\202\321\214?", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Add_dialog", "\320\264\320\260", nullptr));
        checkBox_3->setText(QCoreApplication::translate("Add_dialog", "\320\264\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(add_bird), QCoreApplication::translate("Add_dialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\321\202\320\270\321\206\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add_dialog: public Ui_Add_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_DIALOG_H

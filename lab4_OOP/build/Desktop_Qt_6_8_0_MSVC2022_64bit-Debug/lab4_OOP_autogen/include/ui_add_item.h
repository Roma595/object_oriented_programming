/********************************************************************************
** Form generated from reading UI file 'add_item.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_ITEM_H
#define UI_ADD_ITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Add_Item
{
public:
    QTabWidget *tabWidget;
    QWidget *add_animal;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *animal_name;
    QComboBox *animal_month;
    QComboBox *animal_year;
    QLineEdit *animal_weight;
    QCheckBox *animal_predator;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *add_animal_button;
    QPushButton *animal_cancel;
    QLabel *inf_text_animal;
    QWidget *add_bird;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *add_bird_button;
    QPushButton *bird_cancel;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *bird_name;
    QComboBox *bird_month;
    QComboBox *bird_year;
    QLineEdit *bird_weight;
    QCheckBox *bird_predator;
    QCheckBox *bird_fly;
    QLabel *inf_text_bird;

    void setupUi(QDialog *Add_Item)
    {
        if (Add_Item->objectName().isEmpty())
            Add_Item->setObjectName("Add_Item");
        Add_Item->resize(481, 491);
        tabWidget = new QTabWidget(Add_Item);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 491, 491));
        tabWidget->setTabPosition(QTabWidget::TabPosition::North);
        tabWidget->setTabShape(QTabWidget::TabShape::Rounded);
        add_animal = new QWidget();
        add_animal->setObjectName("add_animal");
        layoutWidget = new QWidget(add_animal);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 50, 181, 231));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);

        layoutWidget_2 = new QWidget(add_animal);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(220, 50, 241, 241));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        animal_name = new QLineEdit(layoutWidget_2);
        animal_name->setObjectName("animal_name");

        verticalLayout_2->addWidget(animal_name);

        animal_month = new QComboBox(layoutWidget_2);
        animal_month->addItem(QString());
        animal_month->addItem(QString());
        animal_month->addItem(QString());
        animal_month->addItem(QString());
        animal_month->addItem(QString());
        animal_month->addItem(QString());
        animal_month->addItem(QString());
        animal_month->addItem(QString());
        animal_month->addItem(QString());
        animal_month->addItem(QString());
        animal_month->addItem(QString());
        animal_month->addItem(QString());
        animal_month->setObjectName("animal_month");

        verticalLayout_2->addWidget(animal_month);

        animal_year = new QComboBox(layoutWidget_2);
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->addItem(QString());
        animal_year->setObjectName("animal_year");

        verticalLayout_2->addWidget(animal_year);

        animal_weight = new QLineEdit(layoutWidget_2);
        animal_weight->setObjectName("animal_weight");
        animal_weight->setClearButtonEnabled(false);

        verticalLayout_2->addWidget(animal_weight);

        animal_predator = new QCheckBox(layoutWidget_2);
        animal_predator->setObjectName("animal_predator");

        verticalLayout_2->addWidget(animal_predator);

        layoutWidget_3 = new QWidget(add_animal);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(270, 420, 201, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget_3);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        add_animal_button = new QPushButton(layoutWidget_3);
        add_animal_button->setObjectName("add_animal_button");

        horizontalLayout->addWidget(add_animal_button);

        animal_cancel = new QPushButton(layoutWidget_3);
        animal_cancel->setObjectName("animal_cancel");

        horizontalLayout->addWidget(animal_cancel);

        inf_text_animal = new QLabel(add_animal);
        inf_text_animal->setObjectName("inf_text_animal");
        inf_text_animal->setGeometry(QRect(40, 310, 391, 20));
        inf_text_animal->setAlignment(Qt::AlignmentFlag::AlignCenter);
        tabWidget->addTab(add_animal, QString());
        add_bird = new QWidget();
        add_bird->setObjectName("add_bird");
        layoutWidget_4 = new QWidget(add_bird);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(270, 420, 201, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        add_bird_button = new QPushButton(layoutWidget_4);
        add_bird_button->setObjectName("add_bird_button");

        horizontalLayout_2->addWidget(add_bird_button);

        bird_cancel = new QPushButton(layoutWidget_4);
        bird_cancel->setObjectName("bird_cancel");

        horizontalLayout_2->addWidget(bird_cancel);

        layoutWidget_5 = new QWidget(add_bird);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(20, 50, 181, 261));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_5);
        label_6->setObjectName("label_6");

        verticalLayout_3->addWidget(label_6);

        label_7 = new QLabel(layoutWidget_5);
        label_7->setObjectName("label_7");

        verticalLayout_3->addWidget(label_7);

        label_8 = new QLabel(layoutWidget_5);
        label_8->setObjectName("label_8");

        verticalLayout_3->addWidget(label_8);

        label_9 = new QLabel(layoutWidget_5);
        label_9->setObjectName("label_9");

        verticalLayout_3->addWidget(label_9);

        label_10 = new QLabel(layoutWidget_5);
        label_10->setObjectName("label_10");

        verticalLayout_3->addWidget(label_10);

        label_11 = new QLabel(layoutWidget_5);
        label_11->setObjectName("label_11");

        verticalLayout_3->addWidget(label_11);

        layoutWidget_6 = new QWidget(add_bird);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(220, 50, 241, 271));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_6);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        bird_name = new QLineEdit(layoutWidget_6);
        bird_name->setObjectName("bird_name");

        verticalLayout_4->addWidget(bird_name);

        bird_month = new QComboBox(layoutWidget_6);
        bird_month->addItem(QString());
        bird_month->addItem(QString());
        bird_month->addItem(QString());
        bird_month->addItem(QString());
        bird_month->addItem(QString());
        bird_month->addItem(QString());
        bird_month->addItem(QString());
        bird_month->addItem(QString());
        bird_month->addItem(QString());
        bird_month->addItem(QString());
        bird_month->addItem(QString());
        bird_month->addItem(QString());
        bird_month->setObjectName("bird_month");

        verticalLayout_4->addWidget(bird_month);

        bird_year = new QComboBox(layoutWidget_6);
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->addItem(QString());
        bird_year->setObjectName("bird_year");

        verticalLayout_4->addWidget(bird_year);

        bird_weight = new QLineEdit(layoutWidget_6);
        bird_weight->setObjectName("bird_weight");
        bird_weight->setMaxLength(5);

        verticalLayout_4->addWidget(bird_weight);

        bird_predator = new QCheckBox(layoutWidget_6);
        bird_predator->setObjectName("bird_predator");

        verticalLayout_4->addWidget(bird_predator);

        bird_fly = new QCheckBox(layoutWidget_6);
        bird_fly->setObjectName("bird_fly");

        verticalLayout_4->addWidget(bird_fly);

        inf_text_bird = new QLabel(add_bird);
        inf_text_bird->setObjectName("inf_text_bird");
        inf_text_bird->setGeometry(QRect(50, 340, 361, 21));
        inf_text_bird->setAlignment(Qt::AlignmentFlag::AlignCenter);
        tabWidget->addTab(add_bird, QString());

        retranslateUi(Add_Item);
        QObject::connect(animal_cancel, &QPushButton::clicked, Add_Item, qOverload<>(&QDialog::reject));
        QObject::connect(bird_cancel, &QPushButton::clicked, Add_Item, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(1);
        animal_year->setCurrentIndex(100);
        bird_year->setCurrentIndex(100);


        QMetaObject::connectSlotsByName(Add_Item);
    } // setupUi

    void retranslateUi(QDialog *Add_Item)
    {
        Add_Item->setWindowTitle(QCoreApplication::translate("Add_Item", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260", nullptr));
        label->setText(QCoreApplication::translate("Add_Item", "\320\230\320\274\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("Add_Item", "\320\234\320\265\321\201\321\217\321\206 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("Add_Item", "\320\223\320\276\320\264 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("Add_Item", "\320\222\320\265\321\201, \320\272\320\263", nullptr));
        label_5->setText(QCoreApplication::translate("Add_Item", "\320\245\320\270\321\211\320\275\320\270\320\272? ", nullptr));
        animal_month->setItemText(0, QCoreApplication::translate("Add_Item", "1", nullptr));
        animal_month->setItemText(1, QCoreApplication::translate("Add_Item", "2", nullptr));
        animal_month->setItemText(2, QCoreApplication::translate("Add_Item", "3", nullptr));
        animal_month->setItemText(3, QCoreApplication::translate("Add_Item", "4", nullptr));
        animal_month->setItemText(4, QCoreApplication::translate("Add_Item", "5", nullptr));
        animal_month->setItemText(5, QCoreApplication::translate("Add_Item", "6", nullptr));
        animal_month->setItemText(6, QCoreApplication::translate("Add_Item", "7", nullptr));
        animal_month->setItemText(7, QCoreApplication::translate("Add_Item", "8", nullptr));
        animal_month->setItemText(8, QCoreApplication::translate("Add_Item", "9", nullptr));
        animal_month->setItemText(9, QCoreApplication::translate("Add_Item", "10", nullptr));
        animal_month->setItemText(10, QCoreApplication::translate("Add_Item", "11", nullptr));
        animal_month->setItemText(11, QCoreApplication::translate("Add_Item", "12", nullptr));

        animal_year->setItemText(0, QCoreApplication::translate("Add_Item", "1900", nullptr));
        animal_year->setItemText(1, QCoreApplication::translate("Add_Item", "1901", nullptr));
        animal_year->setItemText(2, QCoreApplication::translate("Add_Item", "1902", nullptr));
        animal_year->setItemText(3, QCoreApplication::translate("Add_Item", "1903", nullptr));
        animal_year->setItemText(4, QCoreApplication::translate("Add_Item", "1904", nullptr));
        animal_year->setItemText(5, QCoreApplication::translate("Add_Item", "1905", nullptr));
        animal_year->setItemText(6, QCoreApplication::translate("Add_Item", "1906", nullptr));
        animal_year->setItemText(7, QCoreApplication::translate("Add_Item", "1907", nullptr));
        animal_year->setItemText(8, QCoreApplication::translate("Add_Item", "1908", nullptr));
        animal_year->setItemText(9, QCoreApplication::translate("Add_Item", "1909", nullptr));
        animal_year->setItemText(10, QCoreApplication::translate("Add_Item", "1910", nullptr));
        animal_year->setItemText(11, QCoreApplication::translate("Add_Item", "1911", nullptr));
        animal_year->setItemText(12, QCoreApplication::translate("Add_Item", "1912", nullptr));
        animal_year->setItemText(13, QCoreApplication::translate("Add_Item", "1913", nullptr));
        animal_year->setItemText(14, QCoreApplication::translate("Add_Item", "1914", nullptr));
        animal_year->setItemText(15, QCoreApplication::translate("Add_Item", "1915", nullptr));
        animal_year->setItemText(16, QCoreApplication::translate("Add_Item", "1916", nullptr));
        animal_year->setItemText(17, QCoreApplication::translate("Add_Item", "1917", nullptr));
        animal_year->setItemText(18, QCoreApplication::translate("Add_Item", "1918", nullptr));
        animal_year->setItemText(19, QCoreApplication::translate("Add_Item", "1919", nullptr));
        animal_year->setItemText(20, QCoreApplication::translate("Add_Item", "1920", nullptr));
        animal_year->setItemText(21, QCoreApplication::translate("Add_Item", "1921", nullptr));
        animal_year->setItemText(22, QCoreApplication::translate("Add_Item", "1922", nullptr));
        animal_year->setItemText(23, QCoreApplication::translate("Add_Item", "1923", nullptr));
        animal_year->setItemText(24, QCoreApplication::translate("Add_Item", "1924", nullptr));
        animal_year->setItemText(25, QCoreApplication::translate("Add_Item", "1925", nullptr));
        animal_year->setItemText(26, QCoreApplication::translate("Add_Item", "1926", nullptr));
        animal_year->setItemText(27, QCoreApplication::translate("Add_Item", "1927", nullptr));
        animal_year->setItemText(28, QCoreApplication::translate("Add_Item", "1928", nullptr));
        animal_year->setItemText(29, QCoreApplication::translate("Add_Item", "1929", nullptr));
        animal_year->setItemText(30, QCoreApplication::translate("Add_Item", "1930", nullptr));
        animal_year->setItemText(31, QCoreApplication::translate("Add_Item", "1931", nullptr));
        animal_year->setItemText(32, QCoreApplication::translate("Add_Item", "1932", nullptr));
        animal_year->setItemText(33, QCoreApplication::translate("Add_Item", "1933", nullptr));
        animal_year->setItemText(34, QCoreApplication::translate("Add_Item", "1934", nullptr));
        animal_year->setItemText(35, QCoreApplication::translate("Add_Item", "1935", nullptr));
        animal_year->setItemText(36, QCoreApplication::translate("Add_Item", "1936", nullptr));
        animal_year->setItemText(37, QCoreApplication::translate("Add_Item", "1937", nullptr));
        animal_year->setItemText(38, QCoreApplication::translate("Add_Item", "1938", nullptr));
        animal_year->setItemText(39, QCoreApplication::translate("Add_Item", "1939", nullptr));
        animal_year->setItemText(40, QCoreApplication::translate("Add_Item", "1940", nullptr));
        animal_year->setItemText(41, QCoreApplication::translate("Add_Item", "1941", nullptr));
        animal_year->setItemText(42, QCoreApplication::translate("Add_Item", "1942", nullptr));
        animal_year->setItemText(43, QCoreApplication::translate("Add_Item", "1943", nullptr));
        animal_year->setItemText(44, QCoreApplication::translate("Add_Item", "1944", nullptr));
        animal_year->setItemText(45, QCoreApplication::translate("Add_Item", "1945", nullptr));
        animal_year->setItemText(46, QCoreApplication::translate("Add_Item", "1946", nullptr));
        animal_year->setItemText(47, QCoreApplication::translate("Add_Item", "1947", nullptr));
        animal_year->setItemText(48, QCoreApplication::translate("Add_Item", "1948", nullptr));
        animal_year->setItemText(49, QCoreApplication::translate("Add_Item", "1949", nullptr));
        animal_year->setItemText(50, QCoreApplication::translate("Add_Item", "1950", nullptr));
        animal_year->setItemText(51, QCoreApplication::translate("Add_Item", "1951", nullptr));
        animal_year->setItemText(52, QCoreApplication::translate("Add_Item", "1952", nullptr));
        animal_year->setItemText(53, QCoreApplication::translate("Add_Item", "1953", nullptr));
        animal_year->setItemText(54, QCoreApplication::translate("Add_Item", "1954", nullptr));
        animal_year->setItemText(55, QCoreApplication::translate("Add_Item", "1955", nullptr));
        animal_year->setItemText(56, QCoreApplication::translate("Add_Item", "1956", nullptr));
        animal_year->setItemText(57, QCoreApplication::translate("Add_Item", "1957", nullptr));
        animal_year->setItemText(58, QCoreApplication::translate("Add_Item", "1958", nullptr));
        animal_year->setItemText(59, QCoreApplication::translate("Add_Item", "1959", nullptr));
        animal_year->setItemText(60, QCoreApplication::translate("Add_Item", "1960", nullptr));
        animal_year->setItemText(61, QCoreApplication::translate("Add_Item", "1961", nullptr));
        animal_year->setItemText(62, QCoreApplication::translate("Add_Item", "1962", nullptr));
        animal_year->setItemText(63, QCoreApplication::translate("Add_Item", "1963", nullptr));
        animal_year->setItemText(64, QCoreApplication::translate("Add_Item", "1964", nullptr));
        animal_year->setItemText(65, QCoreApplication::translate("Add_Item", "1965", nullptr));
        animal_year->setItemText(66, QCoreApplication::translate("Add_Item", "1966", nullptr));
        animal_year->setItemText(67, QCoreApplication::translate("Add_Item", "1967", nullptr));
        animal_year->setItemText(68, QCoreApplication::translate("Add_Item", "1968", nullptr));
        animal_year->setItemText(69, QCoreApplication::translate("Add_Item", "1969", nullptr));
        animal_year->setItemText(70, QCoreApplication::translate("Add_Item", "1970", nullptr));
        animal_year->setItemText(71, QCoreApplication::translate("Add_Item", "1971", nullptr));
        animal_year->setItemText(72, QCoreApplication::translate("Add_Item", "1972", nullptr));
        animal_year->setItemText(73, QCoreApplication::translate("Add_Item", "1973", nullptr));
        animal_year->setItemText(74, QCoreApplication::translate("Add_Item", "1974", nullptr));
        animal_year->setItemText(75, QCoreApplication::translate("Add_Item", "1975", nullptr));
        animal_year->setItemText(76, QCoreApplication::translate("Add_Item", "1976", nullptr));
        animal_year->setItemText(77, QCoreApplication::translate("Add_Item", "1977", nullptr));
        animal_year->setItemText(78, QCoreApplication::translate("Add_Item", "1978", nullptr));
        animal_year->setItemText(79, QCoreApplication::translate("Add_Item", "1979", nullptr));
        animal_year->setItemText(80, QCoreApplication::translate("Add_Item", "1980", nullptr));
        animal_year->setItemText(81, QCoreApplication::translate("Add_Item", "1981", nullptr));
        animal_year->setItemText(82, QCoreApplication::translate("Add_Item", "1982", nullptr));
        animal_year->setItemText(83, QCoreApplication::translate("Add_Item", "1983", nullptr));
        animal_year->setItemText(84, QCoreApplication::translate("Add_Item", "1984", nullptr));
        animal_year->setItemText(85, QCoreApplication::translate("Add_Item", "1985", nullptr));
        animal_year->setItemText(86, QCoreApplication::translate("Add_Item", "1986", nullptr));
        animal_year->setItemText(87, QCoreApplication::translate("Add_Item", "1987", nullptr));
        animal_year->setItemText(88, QCoreApplication::translate("Add_Item", "1988", nullptr));
        animal_year->setItemText(89, QCoreApplication::translate("Add_Item", "1989", nullptr));
        animal_year->setItemText(90, QCoreApplication::translate("Add_Item", "1990", nullptr));
        animal_year->setItemText(91, QCoreApplication::translate("Add_Item", "1991", nullptr));
        animal_year->setItemText(92, QCoreApplication::translate("Add_Item", "1992", nullptr));
        animal_year->setItemText(93, QCoreApplication::translate("Add_Item", "1993", nullptr));
        animal_year->setItemText(94, QCoreApplication::translate("Add_Item", "1994", nullptr));
        animal_year->setItemText(95, QCoreApplication::translate("Add_Item", "1995", nullptr));
        animal_year->setItemText(96, QCoreApplication::translate("Add_Item", "1996", nullptr));
        animal_year->setItemText(97, QCoreApplication::translate("Add_Item", "1997", nullptr));
        animal_year->setItemText(98, QCoreApplication::translate("Add_Item", "1998", nullptr));
        animal_year->setItemText(99, QCoreApplication::translate("Add_Item", "1999", nullptr));
        animal_year->setItemText(100, QCoreApplication::translate("Add_Item", "2000", nullptr));
        animal_year->setItemText(101, QCoreApplication::translate("Add_Item", "2001", nullptr));
        animal_year->setItemText(102, QCoreApplication::translate("Add_Item", "2002", nullptr));
        animal_year->setItemText(103, QCoreApplication::translate("Add_Item", "2003", nullptr));
        animal_year->setItemText(104, QCoreApplication::translate("Add_Item", "2004", nullptr));
        animal_year->setItemText(105, QCoreApplication::translate("Add_Item", "2005", nullptr));
        animal_year->setItemText(106, QCoreApplication::translate("Add_Item", "2006", nullptr));
        animal_year->setItemText(107, QCoreApplication::translate("Add_Item", "2007", nullptr));
        animal_year->setItemText(108, QCoreApplication::translate("Add_Item", "2008", nullptr));
        animal_year->setItemText(109, QCoreApplication::translate("Add_Item", "2009", nullptr));
        animal_year->setItemText(110, QCoreApplication::translate("Add_Item", "2010", nullptr));
        animal_year->setItemText(111, QCoreApplication::translate("Add_Item", "2011", nullptr));
        animal_year->setItemText(112, QCoreApplication::translate("Add_Item", "2012", nullptr));
        animal_year->setItemText(113, QCoreApplication::translate("Add_Item", "2013", nullptr));
        animal_year->setItemText(114, QCoreApplication::translate("Add_Item", "2014", nullptr));
        animal_year->setItemText(115, QCoreApplication::translate("Add_Item", "2015", nullptr));
        animal_year->setItemText(116, QCoreApplication::translate("Add_Item", "2016", nullptr));
        animal_year->setItemText(117, QCoreApplication::translate("Add_Item", "2017", nullptr));
        animal_year->setItemText(118, QCoreApplication::translate("Add_Item", "2018", nullptr));
        animal_year->setItemText(119, QCoreApplication::translate("Add_Item", "2019", nullptr));
        animal_year->setItemText(120, QCoreApplication::translate("Add_Item", "2020", nullptr));
        animal_year->setItemText(121, QCoreApplication::translate("Add_Item", "2021", nullptr));
        animal_year->setItemText(122, QCoreApplication::translate("Add_Item", "2022", nullptr));
        animal_year->setItemText(123, QCoreApplication::translate("Add_Item", "2023", nullptr));
        animal_year->setItemText(124, QCoreApplication::translate("Add_Item", "2024", nullptr));

        animal_predator->setText(QCoreApplication::translate("Add_Item", "\320\264\320\260", nullptr));
        add_animal_button->setText(QCoreApplication::translate("Add_Item", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        animal_cancel->setText(QCoreApplication::translate("Add_Item", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        inf_text_animal->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(add_animal), QCoreApplication::translate("Add_Item", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\266\320\270\320\262\320\276\321\202\320\275\320\276\320\265", nullptr));
        add_bird_button->setText(QCoreApplication::translate("Add_Item", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        bird_cancel->setText(QCoreApplication::translate("Add_Item", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        label_6->setText(QCoreApplication::translate("Add_Item", "\320\230\320\274\321\217", nullptr));
        label_7->setText(QCoreApplication::translate("Add_Item", "\320\234\320\265\321\201\321\217\321\206 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_8->setText(QCoreApplication::translate("Add_Item", "\320\223\320\276\320\264 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_9->setText(QCoreApplication::translate("Add_Item", "\320\222\320\265\321\201, \320\272\320\263", nullptr));
        label_10->setText(QCoreApplication::translate("Add_Item", "\320\245\320\270\321\211\320\275\320\270\320\272? ", nullptr));
        label_11->setText(QCoreApplication::translate("Add_Item", "\320\243\320\274\320\265\320\265\321\202 \320\273\320\265\321\202\320\260\321\202\321\214?", nullptr));
        bird_month->setItemText(0, QCoreApplication::translate("Add_Item", "1", nullptr));
        bird_month->setItemText(1, QCoreApplication::translate("Add_Item", "2", nullptr));
        bird_month->setItemText(2, QCoreApplication::translate("Add_Item", "3", nullptr));
        bird_month->setItemText(3, QCoreApplication::translate("Add_Item", "4", nullptr));
        bird_month->setItemText(4, QCoreApplication::translate("Add_Item", "5", nullptr));
        bird_month->setItemText(5, QCoreApplication::translate("Add_Item", "6", nullptr));
        bird_month->setItemText(6, QCoreApplication::translate("Add_Item", "7", nullptr));
        bird_month->setItemText(7, QCoreApplication::translate("Add_Item", "8", nullptr));
        bird_month->setItemText(8, QCoreApplication::translate("Add_Item", "9", nullptr));
        bird_month->setItemText(9, QCoreApplication::translate("Add_Item", "10", nullptr));
        bird_month->setItemText(10, QCoreApplication::translate("Add_Item", "11", nullptr));
        bird_month->setItemText(11, QCoreApplication::translate("Add_Item", "12", nullptr));

        bird_year->setItemText(0, QCoreApplication::translate("Add_Item", "1900", nullptr));
        bird_year->setItemText(1, QCoreApplication::translate("Add_Item", "1901", nullptr));
        bird_year->setItemText(2, QCoreApplication::translate("Add_Item", "1902", nullptr));
        bird_year->setItemText(3, QCoreApplication::translate("Add_Item", "1903", nullptr));
        bird_year->setItemText(4, QCoreApplication::translate("Add_Item", "1904", nullptr));
        bird_year->setItemText(5, QCoreApplication::translate("Add_Item", "1905", nullptr));
        bird_year->setItemText(6, QCoreApplication::translate("Add_Item", "1906", nullptr));
        bird_year->setItemText(7, QCoreApplication::translate("Add_Item", "1907", nullptr));
        bird_year->setItemText(8, QCoreApplication::translate("Add_Item", "1908", nullptr));
        bird_year->setItemText(9, QCoreApplication::translate("Add_Item", "1909", nullptr));
        bird_year->setItemText(10, QCoreApplication::translate("Add_Item", "1910", nullptr));
        bird_year->setItemText(11, QCoreApplication::translate("Add_Item", "1911", nullptr));
        bird_year->setItemText(12, QCoreApplication::translate("Add_Item", "1912", nullptr));
        bird_year->setItemText(13, QCoreApplication::translate("Add_Item", "1913", nullptr));
        bird_year->setItemText(14, QCoreApplication::translate("Add_Item", "1914", nullptr));
        bird_year->setItemText(15, QCoreApplication::translate("Add_Item", "1915", nullptr));
        bird_year->setItemText(16, QCoreApplication::translate("Add_Item", "1916", nullptr));
        bird_year->setItemText(17, QCoreApplication::translate("Add_Item", "1917", nullptr));
        bird_year->setItemText(18, QCoreApplication::translate("Add_Item", "1918", nullptr));
        bird_year->setItemText(19, QCoreApplication::translate("Add_Item", "1919", nullptr));
        bird_year->setItemText(20, QCoreApplication::translate("Add_Item", "1920", nullptr));
        bird_year->setItemText(21, QCoreApplication::translate("Add_Item", "1921", nullptr));
        bird_year->setItemText(22, QCoreApplication::translate("Add_Item", "1922", nullptr));
        bird_year->setItemText(23, QCoreApplication::translate("Add_Item", "1923", nullptr));
        bird_year->setItemText(24, QCoreApplication::translate("Add_Item", "1924", nullptr));
        bird_year->setItemText(25, QCoreApplication::translate("Add_Item", "1925", nullptr));
        bird_year->setItemText(26, QCoreApplication::translate("Add_Item", "1926", nullptr));
        bird_year->setItemText(27, QCoreApplication::translate("Add_Item", "1927", nullptr));
        bird_year->setItemText(28, QCoreApplication::translate("Add_Item", "1928", nullptr));
        bird_year->setItemText(29, QCoreApplication::translate("Add_Item", "1929", nullptr));
        bird_year->setItemText(30, QCoreApplication::translate("Add_Item", "1930", nullptr));
        bird_year->setItemText(31, QCoreApplication::translate("Add_Item", "1931", nullptr));
        bird_year->setItemText(32, QCoreApplication::translate("Add_Item", "1932", nullptr));
        bird_year->setItemText(33, QCoreApplication::translate("Add_Item", "1933", nullptr));
        bird_year->setItemText(34, QCoreApplication::translate("Add_Item", "1934", nullptr));
        bird_year->setItemText(35, QCoreApplication::translate("Add_Item", "1935", nullptr));
        bird_year->setItemText(36, QCoreApplication::translate("Add_Item", "1936", nullptr));
        bird_year->setItemText(37, QCoreApplication::translate("Add_Item", "1937", nullptr));
        bird_year->setItemText(38, QCoreApplication::translate("Add_Item", "1938", nullptr));
        bird_year->setItemText(39, QCoreApplication::translate("Add_Item", "1939", nullptr));
        bird_year->setItemText(40, QCoreApplication::translate("Add_Item", "1940", nullptr));
        bird_year->setItemText(41, QCoreApplication::translate("Add_Item", "1941", nullptr));
        bird_year->setItemText(42, QCoreApplication::translate("Add_Item", "1942", nullptr));
        bird_year->setItemText(43, QCoreApplication::translate("Add_Item", "1943", nullptr));
        bird_year->setItemText(44, QCoreApplication::translate("Add_Item", "1944", nullptr));
        bird_year->setItemText(45, QCoreApplication::translate("Add_Item", "1945", nullptr));
        bird_year->setItemText(46, QCoreApplication::translate("Add_Item", "1946", nullptr));
        bird_year->setItemText(47, QCoreApplication::translate("Add_Item", "1947", nullptr));
        bird_year->setItemText(48, QCoreApplication::translate("Add_Item", "1948", nullptr));
        bird_year->setItemText(49, QCoreApplication::translate("Add_Item", "1949", nullptr));
        bird_year->setItemText(50, QCoreApplication::translate("Add_Item", "1950", nullptr));
        bird_year->setItemText(51, QCoreApplication::translate("Add_Item", "1951", nullptr));
        bird_year->setItemText(52, QCoreApplication::translate("Add_Item", "1952", nullptr));
        bird_year->setItemText(53, QCoreApplication::translate("Add_Item", "1953", nullptr));
        bird_year->setItemText(54, QCoreApplication::translate("Add_Item", "1954", nullptr));
        bird_year->setItemText(55, QCoreApplication::translate("Add_Item", "1955", nullptr));
        bird_year->setItemText(56, QCoreApplication::translate("Add_Item", "1956", nullptr));
        bird_year->setItemText(57, QCoreApplication::translate("Add_Item", "1957", nullptr));
        bird_year->setItemText(58, QCoreApplication::translate("Add_Item", "1958", nullptr));
        bird_year->setItemText(59, QCoreApplication::translate("Add_Item", "1959", nullptr));
        bird_year->setItemText(60, QCoreApplication::translate("Add_Item", "1960", nullptr));
        bird_year->setItemText(61, QCoreApplication::translate("Add_Item", "1961", nullptr));
        bird_year->setItemText(62, QCoreApplication::translate("Add_Item", "1962", nullptr));
        bird_year->setItemText(63, QCoreApplication::translate("Add_Item", "1963", nullptr));
        bird_year->setItemText(64, QCoreApplication::translate("Add_Item", "1964", nullptr));
        bird_year->setItemText(65, QCoreApplication::translate("Add_Item", "1965", nullptr));
        bird_year->setItemText(66, QCoreApplication::translate("Add_Item", "1966", nullptr));
        bird_year->setItemText(67, QCoreApplication::translate("Add_Item", "1967", nullptr));
        bird_year->setItemText(68, QCoreApplication::translate("Add_Item", "1968", nullptr));
        bird_year->setItemText(69, QCoreApplication::translate("Add_Item", "1969", nullptr));
        bird_year->setItemText(70, QCoreApplication::translate("Add_Item", "1970", nullptr));
        bird_year->setItemText(71, QCoreApplication::translate("Add_Item", "1971", nullptr));
        bird_year->setItemText(72, QCoreApplication::translate("Add_Item", "1972", nullptr));
        bird_year->setItemText(73, QCoreApplication::translate("Add_Item", "1973", nullptr));
        bird_year->setItemText(74, QCoreApplication::translate("Add_Item", "1974", nullptr));
        bird_year->setItemText(75, QCoreApplication::translate("Add_Item", "1975", nullptr));
        bird_year->setItemText(76, QCoreApplication::translate("Add_Item", "1976", nullptr));
        bird_year->setItemText(77, QCoreApplication::translate("Add_Item", "1977", nullptr));
        bird_year->setItemText(78, QCoreApplication::translate("Add_Item", "1978", nullptr));
        bird_year->setItemText(79, QCoreApplication::translate("Add_Item", "1979", nullptr));
        bird_year->setItemText(80, QCoreApplication::translate("Add_Item", "1980", nullptr));
        bird_year->setItemText(81, QCoreApplication::translate("Add_Item", "1981", nullptr));
        bird_year->setItemText(82, QCoreApplication::translate("Add_Item", "1982", nullptr));
        bird_year->setItemText(83, QCoreApplication::translate("Add_Item", "1983", nullptr));
        bird_year->setItemText(84, QCoreApplication::translate("Add_Item", "1984", nullptr));
        bird_year->setItemText(85, QCoreApplication::translate("Add_Item", "1985", nullptr));
        bird_year->setItemText(86, QCoreApplication::translate("Add_Item", "1986", nullptr));
        bird_year->setItemText(87, QCoreApplication::translate("Add_Item", "1987", nullptr));
        bird_year->setItemText(88, QCoreApplication::translate("Add_Item", "1988", nullptr));
        bird_year->setItemText(89, QCoreApplication::translate("Add_Item", "1989", nullptr));
        bird_year->setItemText(90, QCoreApplication::translate("Add_Item", "1990", nullptr));
        bird_year->setItemText(91, QCoreApplication::translate("Add_Item", "1991", nullptr));
        bird_year->setItemText(92, QCoreApplication::translate("Add_Item", "1992", nullptr));
        bird_year->setItemText(93, QCoreApplication::translate("Add_Item", "1993", nullptr));
        bird_year->setItemText(94, QCoreApplication::translate("Add_Item", "1994", nullptr));
        bird_year->setItemText(95, QCoreApplication::translate("Add_Item", "1995", nullptr));
        bird_year->setItemText(96, QCoreApplication::translate("Add_Item", "1996", nullptr));
        bird_year->setItemText(97, QCoreApplication::translate("Add_Item", "1997", nullptr));
        bird_year->setItemText(98, QCoreApplication::translate("Add_Item", "1998", nullptr));
        bird_year->setItemText(99, QCoreApplication::translate("Add_Item", "1999", nullptr));
        bird_year->setItemText(100, QCoreApplication::translate("Add_Item", "2000", nullptr));
        bird_year->setItemText(101, QCoreApplication::translate("Add_Item", "2001", nullptr));
        bird_year->setItemText(102, QCoreApplication::translate("Add_Item", "2002", nullptr));
        bird_year->setItemText(103, QCoreApplication::translate("Add_Item", "2003", nullptr));
        bird_year->setItemText(104, QCoreApplication::translate("Add_Item", "2004", nullptr));
        bird_year->setItemText(105, QCoreApplication::translate("Add_Item", "2005", nullptr));
        bird_year->setItemText(106, QCoreApplication::translate("Add_Item", "2006", nullptr));
        bird_year->setItemText(107, QCoreApplication::translate("Add_Item", "2007", nullptr));
        bird_year->setItemText(108, QCoreApplication::translate("Add_Item", "2008", nullptr));
        bird_year->setItemText(109, QCoreApplication::translate("Add_Item", "2009", nullptr));
        bird_year->setItemText(110, QCoreApplication::translate("Add_Item", "2010", nullptr));
        bird_year->setItemText(111, QCoreApplication::translate("Add_Item", "2011", nullptr));
        bird_year->setItemText(112, QCoreApplication::translate("Add_Item", "2012", nullptr));
        bird_year->setItemText(113, QCoreApplication::translate("Add_Item", "2013", nullptr));
        bird_year->setItemText(114, QCoreApplication::translate("Add_Item", "2014", nullptr));
        bird_year->setItemText(115, QCoreApplication::translate("Add_Item", "2015", nullptr));
        bird_year->setItemText(116, QCoreApplication::translate("Add_Item", "2016", nullptr));
        bird_year->setItemText(117, QCoreApplication::translate("Add_Item", "2017", nullptr));
        bird_year->setItemText(118, QCoreApplication::translate("Add_Item", "2018", nullptr));
        bird_year->setItemText(119, QCoreApplication::translate("Add_Item", "2019", nullptr));
        bird_year->setItemText(120, QCoreApplication::translate("Add_Item", "2020", nullptr));
        bird_year->setItemText(121, QCoreApplication::translate("Add_Item", "2021", nullptr));
        bird_year->setItemText(122, QCoreApplication::translate("Add_Item", "2022", nullptr));
        bird_year->setItemText(123, QCoreApplication::translate("Add_Item", "2023", nullptr));
        bird_year->setItemText(124, QCoreApplication::translate("Add_Item", "2024", nullptr));

        bird_predator->setText(QCoreApplication::translate("Add_Item", "\320\264\320\260", nullptr));
        bird_fly->setText(QCoreApplication::translate("Add_Item", "\320\264\320\260", nullptr));
        inf_text_bird->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(add_bird), QCoreApplication::translate("Add_Item", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\321\202\320\270\321\206\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add_Item: public Ui_Add_Item {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_ITEM_H

/********************************************************************************
** Form generated from reading UI file 'qporackismetkilista.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QPORACKISMETKILISTA_H
#define UI_QPORACKISMETKILISTA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>
#include "qmybaseformwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QPorackiSmetkiListaClass
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QTableView *tableView_2;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_11;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QTableView *tableView;
    QLineEdit *lineEdit_6;
    QLabel *label_7;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QWidget *tab_2;

    void setupUi(QMyBaseFormWidget *QPorackiSmetkiListaClass)
    {
        if (QPorackiSmetkiListaClass->objectName().isEmpty())
            QPorackiSmetkiListaClass->setObjectName("QPorackiSmetkiListaClass");
        QPorackiSmetkiListaClass->resize(2399, 2400);
        QFont font;
        font.setPointSize(10);
        QPorackiSmetkiListaClass->setFont(font);
        tabWidget = new QTabWidget(QPorackiSmetkiListaClass);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(10, 10, 931, 661));
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 0, 0, 1, 2);

        tableView_2 = new QTableView(tab);
        tableView_2->setObjectName("tableView_2");
        tableView_2->setFont(font);
        tableView_2->setAlternatingRowColors(true);

        gridLayout->addWidget(tableView_2, 6, 0, 1, 7);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 4, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 0, 5, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        label_11 = new QLabel(tab);
        label_11->setObjectName("label_11");
        label_11->setFont(font);

        gridLayout->addWidget(label_11, 4, 0, 1, 6);

        radioButton = new QRadioButton(tab);
        radioButton->setObjectName("radioButton");

        gridLayout->addWidget(radioButton, 4, 6, 1, 1);

        radioButton_2 = new QRadioButton(tab);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setChecked(true);

        gridLayout->addWidget(radioButton_2, 5, 6, 1, 1);

        tableView = new QTableView(tab);
        tableView->setObjectName("tableView");
        QPalette palette;
        QBrush brush(QColor(234, 234, 234, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        tableView->setPalette(palette);
        tableView->setFont(font);
        tableView->setAlternatingRowColors(true);

        gridLayout->addWidget(tableView, 2, 0, 2, 7);

        lineEdit_6 = new QLineEdit(tab);
        lineEdit_6->setObjectName("lineEdit_6");
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        lineEdit_6->setFont(font1);
        lineEdit_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lineEdit_6, 7, 6, 1, 1);

        label_7 = new QLabel(tab);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 7, 5, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName("gridLayout_2");
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setEnabled(false);

        gridLayout_2->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setEnabled(false);

        gridLayout_2->addWidget(pushButton_4, 0, 3, 1, 1);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName("pushButton");
        pushButton->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Resources/key_f2.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton->setIcon(icon);

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setEnabled(true);
        pushButton_2->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("Resources/key_f3.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_2->setIcon(icon1);

        gridLayout_2->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setEnabled(false);

        gridLayout_2->addWidget(pushButton_5, 0, 4, 1, 1);


        gridLayout->addLayout(gridLayout_2, 8, 0, 1, 7);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());

        retranslateUi(QPorackiSmetkiListaClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QPorackiSmetkiListaClass);
    } // setupUi

    void retranslateUi(QMyBaseFormWidget *QPorackiSmetkiListaClass)
    {
        QPorackiSmetkiListaClass->setWindowTitle(QCoreApplication::translate("QPorackiSmetkiListaClass", "QPorackiSmetkiLista", nullptr));
        label_4->setText(QCoreApplication::translate("QPorackiSmetkiListaClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#0000ff;\">\320\237\320\276\321\200\320\260\321\207\320\272\320\260 - \320\241\320\274\320\265\321\202\320\272\320\260 - \320\233\320\270\321\201\321\202\320\260</span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("QPorackiSmetkiListaClass", "\320\222\320\272\321\203\320\277\320\265\320\275 \320\230\320\267\320\275\320\276\321\201 ", nullptr));
        radioButton->setText(QCoreApplication::translate("QPorackiSmetkiListaClass", "\320\237\320\265\321\207\320\260\321\202\320\270 \320\273\320\270\321\201\321\202\320\260 \320\275\320\260 \321\201\320\274\320\265\321\202\320\272\320\270", nullptr));
        radioButton_2->setText(QCoreApplication::translate("QPorackiSmetkiListaClass", "\320\237\320\265\321\207\320\260\321\202\320\270 \321\201\320\265\320\273\320\265\320\272\321\202\320\270\321\200\320\260\320\275\320\260 \321\201\320\274\320\265\321\202\320\272\320\260", nullptr));
        label_7->setText(QCoreApplication::translate("QPorackiSmetkiListaClass", "\320\222\320\272\321\203\320\277\320\265\320\275 \320\230\320\267\320\275\320\276\321\201 \321\201\320\276 \320\224\320\224\320\222 ", nullptr));
        pushButton_3->setText(QCoreApplication::translate("QPorackiSmetkiListaClass", "\320\221\321\200\320\270\321\210\320\270 \320\241\320\274\320\265\321\202\320\272\320\260", nullptr));
        pushButton_4->setText(QCoreApplication::translate("QPorackiSmetkiListaClass", "\320\237\320\265\321\207\320\260\321\202\320\270 \320\244\320\270\321\201\320\272\320\260\320\273\320\275\320\260", nullptr));
        pushButton->setText(QCoreApplication::translate("QPorackiSmetkiListaClass", "\320\222\320\275\320\265\321\201\320\270 \320\275\320\276\320\262\320\260 \321\201\320\274\320\265\321\202\320\272\320\270         ", nullptr));
        pushButton_2->setText(QCoreApplication::translate("QPorackiSmetkiListaClass", "\320\232\320\276\321\200\320\265\320\263\320\270\321\200\320\260\321\230 \320\277\320\276\321\201\321\202\320\276\320\265\321\207\320\272\320\260       ", nullptr));
        pushButton_5->setText(QCoreApplication::translate("QPorackiSmetkiListaClass", "\320\241\321\202\320\276\321\200\320\275\320\270\321\200\320\260\321\230 \320\244\320\270\321\201\320\272\320\260\320\273\320\275\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("QPorackiSmetkiListaClass", "\320\242\320\265\320\272\320\276\320\262\320\275\320\270 \320\241\320\274\320\265\321\202\320\272\320\270", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QString());
    } // retranslateUi

};

namespace Ui {
    class QPorackiSmetkiListaClass: public Ui_QPorackiSmetkiListaClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QPORACKISMETKILISTA_H

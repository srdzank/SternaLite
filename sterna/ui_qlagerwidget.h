/********************************************************************************
** Form generated from reading UI file 'qlagerwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QLAGERWIDGET_H
#define UI_QLAGERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>
#include "qmybaseformwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QLagerWidgetClass
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_4;
    QTableView *tableView;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_2;

    void setupUi(QMyBaseFormWidget *QLagerWidgetClass)
    {
        if (QLagerWidgetClass->objectName().isEmpty())
            QLagerWidgetClass->setObjectName("QLagerWidgetClass");
        QLagerWidgetClass->resize(2400, 2400);
        QFont font;
        font.setPointSize(10);
        QLagerWidgetClass->setFont(font);
        layoutWidget = new QWidget(QLagerWidgetClass);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 1060, 581));
        layoutWidget->setFont(font);
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 1, 5, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setFont(font);

        gridLayout->addWidget(lineEdit, 1, 2, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setFont(font);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        tableView = new QTableView(layoutWidget);
        tableView->setObjectName("tableView");
        QPalette palette;
        QBrush brush(QColor(228, 228, 228, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush);
        tableView->setPalette(palette);
        tableView->setFont(font);
        tableView->setAlternatingRowColors(true);

        gridLayout->addWidget(tableView, 2, 0, 1, 6);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        lineEdit_2->setFont(font1);
        lineEdit_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lineEdit_2, 4, 2, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 4, 3, 1, 1);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setFont(font1);
        lineEdit_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lineEdit_3, 4, 4, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 4, 1, 1, 1);

        QWidget::setTabOrder(lineEdit, tableView);

        retranslateUi(QLagerWidgetClass);

        QMetaObject::connectSlotsByName(QLagerWidgetClass);
    } // setupUi

    void retranslateUi(QMyBaseFormWidget *QLagerWidgetClass)
    {
        QLagerWidgetClass->setWindowTitle(QCoreApplication::translate("QLagerWidgetClass", "QLagerWidget", nullptr));
        pushButton->setText(QCoreApplication::translate("QLagerWidgetClass", "Copy To Clipboard", nullptr));
        label->setText(QCoreApplication::translate("QLagerWidgetClass", "\320\237\321\200\320\265\320\261\320\260\321\200\321\203\320\262\320\260\321\232\320\265 \320\277\320\276 \320\275\320\260\320\267\320\270\320\262 \320\275\320\260 \320\260\321\200\321\202\320\270\320\272\320\260\320\273", nullptr));
        label_4->setText(QCoreApplication::translate("QLagerWidgetClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#0000ff;\">\320\233\320\260\320\263\320\265\321\200 - \320\233\320\270\321\201\321\202\320\260</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("QLagerWidgetClass", "\320\222\320\272. \320\230\320\267\320\273\320\265\320\267\320\275\320\260 \320\262\321\200\320\265\320\264\320\275\320\276\321\201\321\202 \321\201\320\276 \320\224\320\224\320\222", nullptr));
        label_2->setText(QCoreApplication::translate("QLagerWidgetClass", "\320\222\320\272. \320\222\320\273\320\265\320\267\320\275\320\260 \320\262\321\200\320\265\320\264\320\275\320\276\321\201\321\202 \321\201\320\276 \320\224\320\224\320\222", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QLagerWidgetClass: public Ui_QLagerWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QLAGERWIDGET_H

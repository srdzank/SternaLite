/********************************************************************************
** Form generated from reading UI file 'qdnevenprometwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDNEVENPROMETWIDGET_H
#define UI_QDNEVENPROMETWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>
#include "qmybaseformwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QDnevenprometWidgetClass
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QTableView *tableView;

    void setupUi(QMyBaseFormWidget *QDnevenprometWidgetClass)
    {
        if (QDnevenprometWidgetClass->objectName().isEmpty())
            QDnevenprometWidgetClass->setObjectName("QDnevenprometWidgetClass");
        QDnevenprometWidgetClass->resize(2400, 2400);
        QFont font;
        font.setPointSize(10);
        QDnevenprometWidgetClass->setFont(font);
        layoutWidget = new QWidget(QDnevenprometWidgetClass);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 791, 581));
        layoutWidget->setFont(font);
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        dateTimeEdit = new QDateTimeEdit(layoutWidget);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setFont(font);
        dateTimeEdit->setCalendarPopup(true);

        gridLayout->addWidget(dateTimeEdit, 1, 2, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setFont(font);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setFont(font);

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 1, 3, 1, 1);

        tableView = new QTableView(layoutWidget);
        tableView->setObjectName("tableView");
        QPalette palette;
        QBrush brush(QColor(228, 228, 228, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        tableView->setPalette(palette);
        tableView->setFont(font);
        tableView->setAlternatingRowColors(true);

        gridLayout->addWidget(tableView, 3, 0, 1, 4);


        retranslateUi(QDnevenprometWidgetClass);

        QMetaObject::connectSlotsByName(QDnevenprometWidgetClass);
    } // setupUi

    void retranslateUi(QMyBaseFormWidget *QDnevenprometWidgetClass)
    {
        QDnevenprometWidgetClass->setWindowTitle(QCoreApplication::translate("QDnevenprometWidgetClass", "QDnevenprometWidget", nullptr));
        label_4->setText(QCoreApplication::translate("QDnevenprometWidgetClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#0000ff;\">\320\224\320\275\320\265\320\262\320\265\320\275 \320\230\320\267\320\262\320\265\321\210\321\202\320\260\321\230</span></p></body></html>", nullptr));
        dateTimeEdit->setDisplayFormat(QCoreApplication::translate("QDnevenprometWidgetClass", "M/d/yyyy", nullptr));
        label->setText(QCoreApplication::translate("QDnevenprometWidgetClass", "\320\237\321\200\320\265\320\261\320\260\321\200\321\203\320\262\320\260\321\232\320\265 \320\277\320\276 \320\275\320\260\320\267\320\270\320\262 \320\275\320\260 \320\260\321\200\321\202\320\270\320\272\320\260\320\273", nullptr));
        pushButton->setText(QCoreApplication::translate("QDnevenprometWidgetClass", "   \320\237\321\200\320\265\320\261\320\260\321\200\320\260\321\230 (F9)   ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QDnevenprometWidgetClass: public Ui_QDnevenprometWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDNEVENPROMETWIDGET_H

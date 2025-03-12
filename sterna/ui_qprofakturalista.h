/********************************************************************************
** Form generated from reading UI file 'qprofakturalista.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QPROFAKTURALISTA_H
#define UI_QPROFAKTURALISTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>
#include "qmybaseformwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QProFakturiListaClass
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QTableView *tableView;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QSpacerItem *verticalSpacer;
    QTableView *tableView_2;

    void setupUi(QMyBaseFormWidget *QProFakturiListaClass)
    {
        if (QProFakturiListaClass->objectName().isEmpty())
            QProFakturiListaClass->setObjectName("QProFakturiListaClass");
        QProFakturiListaClass->resize(1004, 775);
        QFont font;
        font.setPointSize(10);
        QProFakturiListaClass->setFont(font);
        layoutWidget = new QWidget(QProFakturiListaClass);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 791, 581));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        tableView = new QTableView(layoutWidget);
        tableView->setObjectName("tableView");

        gridLayout->addWidget(tableView, 1, 0, 4, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 1, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 1, 2, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 1, 1, 1);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        gridLayout->addWidget(lineEdit_2, 2, 2, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 3, 1, 1, 1);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");

        gridLayout->addWidget(lineEdit_3, 3, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 2, 1, 1);

        tableView_2 = new QTableView(layoutWidget);
        tableView_2->setObjectName("tableView_2");

        gridLayout->addWidget(tableView_2, 5, 0, 1, 3);

        QWidget::setTabOrder(tableView, lineEdit);
        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, tableView_2);

        retranslateUi(QProFakturiListaClass);

        QMetaObject::connectSlotsByName(QProFakturiListaClass);
    } // setupUi

    void retranslateUi(QMyBaseFormWidget *QProFakturiListaClass)
    {
        QProFakturiListaClass->setWindowTitle(QCoreApplication::translate("QProFakturiListaClass", "QProFakturiLista", nullptr));
        label_4->setText(QCoreApplication::translate("QProFakturiListaClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#0000ff;\">\320\237\321\200\320\276\321\204\320\260\320\272\321\202\321\203\321\200\320\270 - \320\233\320\270\321\201\321\202\320\260</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("QProFakturiListaClass", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("QProFakturiListaClass", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("QProFakturiListaClass", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QProFakturiListaClass: public Ui_QProFakturiListaClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QPROFAKTURALISTA_H

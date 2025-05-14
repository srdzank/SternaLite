/********************************************************************************
** Form generated from reading UI file 'qsearchformfaktura.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSEARCHFORMFAKTURA_H
#define UI_QSEARCHFORMFAKTURA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_QSearchFormFaktura
{
public:
    QLineEdit *lineEdit;
    QDateTimeEdit *dateTimeEdit;
    QDateTimeEdit *dateTimeEdit_2;

    void setupUi(QDialog *QSearchFormFaktura)
    {
        if (QSearchFormFaktura->objectName().isEmpty())
            QSearchFormFaktura->setObjectName("QSearchFormFaktura");
        QSearchFormFaktura->resize(408, 91);
        QFont font;
        font.setPointSize(10);
        QSearchFormFaktura->setFont(font);
        lineEdit = new QLineEdit(QSearchFormFaktura);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 20, 371, 20));
        dateTimeEdit = new QDateTimeEdit(QSearchFormFaktura);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setGeometry(QRect(20, 50, 181, 22));
        dateTimeEdit->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        dateTimeEdit->setCalendarPopup(true);
        dateTimeEdit_2 = new QDateTimeEdit(QSearchFormFaktura);
        dateTimeEdit_2->setObjectName("dateTimeEdit_2");
        dateTimeEdit_2->setGeometry(QRect(210, 50, 181, 22));
        dateTimeEdit_2->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        dateTimeEdit_2->setCalendarPopup(true);

        retranslateUi(QSearchFormFaktura);

        QMetaObject::connectSlotsByName(QSearchFormFaktura);
    } // setupUi

    void retranslateUi(QDialog *QSearchFormFaktura)
    {
        QSearchFormFaktura->setWindowTitle(QCoreApplication::translate("QSearchFormFaktura", "Search", nullptr));
        dateTimeEdit->setDisplayFormat(QCoreApplication::translate("QSearchFormFaktura", "dd/MM/yyyy", nullptr));
        dateTimeEdit_2->setDisplayFormat(QCoreApplication::translate("QSearchFormFaktura", "dd/MM/yyyy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QSearchFormFaktura: public Ui_QSearchFormFaktura {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSEARCHFORMFAKTURA_H

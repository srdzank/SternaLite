/********************************************************************************
** Form generated from reading UI file 'qperiodicenizvestaj.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QPERIODICENIZVESTAJ_H
#define UI_QPERIODICENIZVESTAJ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include "qmybasewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QPeriodicenIzvestajClass
{
public:

    void setupUi(QMyBaseWidget *QPeriodicenIzvestajClass)
    {
        if (QPeriodicenIzvestajClass->objectName().isEmpty())
            QPeriodicenIzvestajClass->setObjectName("QPeriodicenIzvestajClass");
        QPeriodicenIzvestajClass->resize(400, 300);
        QFont font;
        font.setPointSize(10);
        QPeriodicenIzvestajClass->setFont(font);

        retranslateUi(QPeriodicenIzvestajClass);

        QMetaObject::connectSlotsByName(QPeriodicenIzvestajClass);
    } // setupUi

    void retranslateUi(QMyBaseWidget *QPeriodicenIzvestajClass)
    {
        QPeriodicenIzvestajClass->setWindowTitle(QCoreApplication::translate("QPeriodicenIzvestajClass", "QPeriodicenIzvestaj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QPeriodicenIzvestajClass: public Ui_QPeriodicenIzvestajClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QPERIODICENIZVESTAJ_H

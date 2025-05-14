/********************************************************************************
** Form generated from reading UI file 'qmykasa.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMYKASA_H
#define UI_QMYKASA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include "qmybasewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QMyKasaClass
{
public:

    void setupUi(QMyBaseWidget *QMyKasaClass)
    {
        if (QMyKasaClass->objectName().isEmpty())
            QMyKasaClass->setObjectName("QMyKasaClass");
        QMyKasaClass->resize(947, 591);

        retranslateUi(QMyKasaClass);

        QMetaObject::connectSlotsByName(QMyKasaClass);
    } // setupUi

    void retranslateUi(QMyBaseWidget *QMyKasaClass)
    {
        QMyKasaClass->setWindowTitle(QCoreApplication::translate("QMyKasaClass", "QMyKasa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QMyKasaClass: public Ui_QMyKasaClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMYKASA_H

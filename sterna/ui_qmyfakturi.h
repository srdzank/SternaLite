/********************************************************************************
** Form generated from reading UI file 'qmyfakturi.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMYFAKTURI_H
#define UI_QMYFAKTURI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include "qmybasewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QMyFakturiClass
{
public:

    void setupUi(QMyBaseWidget *QMyFakturiClass)
    {
        if (QMyFakturiClass->objectName().isEmpty())
            QMyFakturiClass->setObjectName("QMyFakturiClass");
        QMyFakturiClass->resize(947, 591);

        retranslateUi(QMyFakturiClass);

        QMetaObject::connectSlotsByName(QMyFakturiClass);
    } // setupUi

    void retranslateUi(QMyBaseWidget *QMyFakturiClass)
    {
        QMyFakturiClass->setWindowTitle(QCoreApplication::translate("QMyFakturiClass", "QMyFakturi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QMyFakturiClass: public Ui_QMyFakturiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMYFAKTURI_H

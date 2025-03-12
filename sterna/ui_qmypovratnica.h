/********************************************************************************
** Form generated from reading UI file 'qmypovratnica.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMYPOVRATNICA_H
#define UI_QMYPOVRATNICA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include "qmybasewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QMyPovratnicaClass
{
public:

    void setupUi(QMyBaseWidget *QMyPovratnicaClass)
    {
        if (QMyPovratnicaClass->objectName().isEmpty())
            QMyPovratnicaClass->setObjectName("QMyPovratnicaClass");
        QMyPovratnicaClass->resize(947, 591);
        QFont font;
        font.setPointSize(10);
        QMyPovratnicaClass->setFont(font);

        retranslateUi(QMyPovratnicaClass);

        QMetaObject::connectSlotsByName(QMyPovratnicaClass);
    } // setupUi

    void retranslateUi(QMyBaseWidget *QMyPovratnicaClass)
    {
        QMyPovratnicaClass->setWindowTitle(QCoreApplication::translate("QMyPovratnicaClass", "QMyPovratnica", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QMyPovratnicaClass: public Ui_QMyPovratnicaClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMYPOVRATNICA_H

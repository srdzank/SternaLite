/********************************************************************************
** Form generated from reading UI file 'qmypopismaster.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMYPOPISMASTER_H
#define UI_QMYPOPISMASTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include "qmybasewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QMypopismasterClass
{
public:

    void setupUi(QMyBaseWidget *QMypopismasterClass)
    {
        if (QMypopismasterClass->objectName().isEmpty())
            QMypopismasterClass->setObjectName("QMypopismasterClass");
        QMypopismasterClass->resize(947, 591);
        QFont font;
        font.setPointSize(10);
        QMypopismasterClass->setFont(font);

        retranslateUi(QMypopismasterClass);

        QMetaObject::connectSlotsByName(QMypopismasterClass);
    } // setupUi

    void retranslateUi(QMyBaseWidget *QMypopismasterClass)
    {
        QMypopismasterClass->setWindowTitle(QCoreApplication::translate("QMypopismasterClass", "QMypopismaster", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QMypopismasterClass: public Ui_QMypopismasterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMYPOPISMASTER_H

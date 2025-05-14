/********************************************************************************
** Form generated from reading UI file 'qmyprofakturimaster.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMYPROFAKTURIMASTER_H
#define UI_QMYPROFAKTURIMASTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include "qmybasewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QMyprofakturimasterClass
{
public:

    void setupUi(QMyBaseWidget *QMyprofakturimasterClass)
    {
        if (QMyprofakturimasterClass->objectName().isEmpty())
            QMyprofakturimasterClass->setObjectName("QMyprofakturimasterClass");
        QMyprofakturimasterClass->resize(947, 591);
        QFont font;
        font.setPointSize(10);
        QMyprofakturimasterClass->setFont(font);

        retranslateUi(QMyprofakturimasterClass);

        QMetaObject::connectSlotsByName(QMyprofakturimasterClass);
    } // setupUi

    void retranslateUi(QMyBaseWidget *QMyprofakturimasterClass)
    {
        QMyprofakturimasterClass->setWindowTitle(QCoreApplication::translate("QMyprofakturimasterClass", "QMyprofakturimaster", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QMyprofakturimasterClass: public Ui_QMyprofakturimasterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMYPROFAKTURIMASTER_H

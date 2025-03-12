/********************************************************************************
** Form generated from reading UI file 'qmysmetki.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMYSMETKI_H
#define UI_QMYSMETKI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include "qmybasewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QMySmetkiClass
{
public:

    void setupUi(QMyBaseWidget *QMySmetkiClass)
    {
        if (QMySmetkiClass->objectName().isEmpty())
            QMySmetkiClass->setObjectName("QMySmetkiClass");
        QMySmetkiClass->resize(947, 591);
        QFont font;
        font.setPointSize(10);
        QMySmetkiClass->setFont(font);

        retranslateUi(QMySmetkiClass);

        QMetaObject::connectSlotsByName(QMySmetkiClass);
    } // setupUi

    void retranslateUi(QMyBaseWidget *QMySmetkiClass)
    {
        QMySmetkiClass->setWindowTitle(QCoreApplication::translate("QMySmetkiClass", "QMySmetki", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QMySmetkiClass: public Ui_QMySmetkiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMYSMETKI_H

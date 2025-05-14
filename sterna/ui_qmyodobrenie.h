/********************************************************************************
** Form generated from reading UI file 'qmyodobrenie.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMYODOBRENIE_H
#define UI_QMYODOBRENIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include "qmybasewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QMyOdobrenieClass
{
public:

    void setupUi(QMyBaseWidget *QMyOdobrenieClass)
    {
        if (QMyOdobrenieClass->objectName().isEmpty())
            QMyOdobrenieClass->setObjectName("QMyOdobrenieClass");
        QMyOdobrenieClass->resize(947, 591);
        QFont font;
        font.setPointSize(10);
        QMyOdobrenieClass->setFont(font);

        retranslateUi(QMyOdobrenieClass);

        QMetaObject::connectSlotsByName(QMyOdobrenieClass);
    } // setupUi

    void retranslateUi(QMyBaseWidget *QMyOdobrenieClass)
    {
        QMyOdobrenieClass->setWindowTitle(QCoreApplication::translate("QMyOdobrenieClass", "QMyOdobrenie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QMyOdobrenieClass: public Ui_QMyOdobrenieClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMYODOBRENIE_H

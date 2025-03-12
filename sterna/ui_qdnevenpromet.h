/********************************************************************************
** Form generated from reading UI file 'qdnevenpromet.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDNEVENPROMET_H
#define UI_QDNEVENPROMET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include "qmybasewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QDnevenprometClass
{
public:

    void setupUi(QMyBaseWidget *QDnevenprometClass)
    {
        if (QDnevenprometClass->objectName().isEmpty())
            QDnevenprometClass->setObjectName("QDnevenprometClass");
        QDnevenprometClass->resize(400, 300);
        QFont font;
        font.setPointSize(10);
        QDnevenprometClass->setFont(font);

        retranslateUi(QDnevenprometClass);

        QMetaObject::connectSlotsByName(QDnevenprometClass);
    } // setupUi

    void retranslateUi(QMyBaseWidget *QDnevenprometClass)
    {
        QDnevenprometClass->setWindowTitle(QCoreApplication::translate("QDnevenprometClass", "QDnevenpromet", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QDnevenprometClass: public Ui_QDnevenprometClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDNEVENPROMET_H

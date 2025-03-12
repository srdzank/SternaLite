/********************************************************************************
** Form generated from reading UI file 'qkalkulacijalagerlista.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QKALKULACIJALAGERLISTA_H
#define UI_QKALKULACIJALAGERLISTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QKalkulacijaLagerLista
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QTableView *tableView;

    void setupUi(QWidget *QKalkulacijaLagerLista)
    {
        if (QKalkulacijaLagerLista->objectName().isEmpty())
            QKalkulacijaLagerLista->setObjectName("QKalkulacijaLagerLista");
        QKalkulacijaLagerLista->resize(842, 338);
        QFont font;
        font.setPointSize(10);
        QKalkulacijaLagerLista->setFont(font);
        layoutWidget = new QWidget(QKalkulacijaLagerLista);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 821, 321));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(layoutWidget);
        tableView->setObjectName("tableView");
        tableView->setFont(font);

        gridLayout->addWidget(tableView, 0, 0, 1, 1);


        retranslateUi(QKalkulacijaLagerLista);

        QMetaObject::connectSlotsByName(QKalkulacijaLagerLista);
    } // setupUi

    void retranslateUi(QWidget *QKalkulacijaLagerLista)
    {
        QKalkulacijaLagerLista->setWindowTitle(QCoreApplication::translate("QKalkulacijaLagerLista", "\320\233\320\260\320\263\320\265\321\200 \320\233\320\270\321\201\321\202\320\260 ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QKalkulacijaLagerLista: public Ui_QKalkulacijaLagerLista {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QKALKULACIJALAGERLISTA_H

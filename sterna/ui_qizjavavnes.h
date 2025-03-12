/********************************************************************************
** Form generated from reading UI file 'qizjavavnes.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QIZJAVAVNES_H
#define UI_QIZJAVAVNES_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QIzjavaVnesClass
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QTableView *tableView;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *QIzjavaVnesClass)
    {
        if (QIzjavaVnesClass->objectName().isEmpty())
            QIzjavaVnesClass->setObjectName("QIzjavaVnesClass");
        QIzjavaVnesClass->resize(2400, 2400);
        QFont font;
        font.setPointSize(10);
        QIzjavaVnesClass->setFont(font);
        layoutWidget = new QWidget(QIzjavaVnesClass);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 30, 771, 501));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setFont(font);

        gridLayout->addWidget(label, 1, 0, 2, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setEnabled(true);
        lineEdit->setFont(font);
        lineEdit->setReadOnly(false);

        gridLayout->addWidget(lineEdit, 1, 1, 1, 2);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/sterna/Resources/key_f9.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_4->setIcon(icon);

        gridLayout->addWidget(pushButton_4, 1, 3, 1, 1);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setFont(font);

        gridLayout->addWidget(pushButton_5, 2, 3, 2, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEnabled(true);
        lineEdit_2->setFont(font);
        lineEdit_2->setReadOnly(false);

        gridLayout->addWidget(lineEdit_2, 4, 1, 1, 2);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setFont(font);

        gridLayout->addWidget(lineEdit_3, 5, 1, 1, 2);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setFont(font);

        gridLayout->addWidget(lineEdit_4, 6, 1, 1, 2);

        tableView = new QTableView(layoutWidget);
        tableView->setObjectName("tableView");
        tableView->setFont(font);

        gridLayout->addWidget(tableView, 8, 0, 1, 4);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setFont(font);

        gridLayout->addWidget(pushButton_3, 6, 3, 1, 1);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setFont(font);

        gridLayout->addWidget(pushButton_6, 7, 3, 1, 1);

        dateTimeEdit = new QDateTimeEdit(layoutWidget);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setFont(font);
        dateTimeEdit->setDateTime(QDateTime(QDate(2000, 3, 3), QTime(0, 0, 0)));
        dateTimeEdit->setDate(QDate(2000, 3, 3));
        dateTimeEdit->setCalendarPopup(true);

        gridLayout->addWidget(dateTimeEdit, 3, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 0, 0, 1, 4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 2, 1, 1);

        QWidget::setTabOrder(lineEdit, dateTimeEdit);
        QWidget::setTabOrder(dateTimeEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, lineEdit_4);
        QWidget::setTabOrder(lineEdit_4, pushButton_3);
        QWidget::setTabOrder(pushButton_3, pushButton_6);
        QWidget::setTabOrder(pushButton_6, pushButton_4);
        QWidget::setTabOrder(pushButton_4, pushButton_5);
        QWidget::setTabOrder(pushButton_5, tableView);

        retranslateUi(QIzjavaVnesClass);

        QMetaObject::connectSlotsByName(QIzjavaVnesClass);
    } // setupUi

    void retranslateUi(QWidget *QIzjavaVnesClass)
    {
        QIzjavaVnesClass->setWindowTitle(QCoreApplication::translate("QIzjavaVnesClass", "QIzjavaVnes", nullptr));
        label->setText(QCoreApplication::translate("QIzjavaVnesClass", "\320\232\320\276\320\274\320\270\320\275\321\202\320\265\320\275\321\202", nullptr));
        pushButton_4->setText(QCoreApplication::translate("QIzjavaVnesClass", "\320\222\320\275\320\265\321\201\320\270 \320\230\320\267\321\230\320\260\320\262\320\260", nullptr));
        pushButton_5->setText(QCoreApplication::translate("QIzjavaVnesClass", "Cancel", nullptr));
        label_2->setText(QCoreApplication::translate("QIzjavaVnesClass", "\320\224\320\260\321\202\321\203\320\274", nullptr));
        label_3->setText(QCoreApplication::translate("QIzjavaVnesClass", "\320\220\321\200\321\202\320\270\320\272\320\260\320\273", nullptr));
        label_5->setText(QCoreApplication::translate("QIzjavaVnesClass", "\320\246\320\265\320\275\320\260", nullptr));
        label_6->setText(QCoreApplication::translate("QIzjavaVnesClass", "\320\232\320\276\320\273\320\270\321\207\320\270\320\275\320\260", nullptr));
        pushButton_3->setText(QCoreApplication::translate("QIzjavaVnesClass", "\320\224\320\276\320\264\320\260\321\230 ", nullptr));
        pushButton_6->setText(QCoreApplication::translate("QIzjavaVnesClass", "\320\221\321\200\320\270\321\210\320\270", nullptr));
        dateTimeEdit->setDisplayFormat(QCoreApplication::translate("QIzjavaVnesClass", "d/M/yyyy", nullptr));
        label_4->setText(QCoreApplication::translate("QIzjavaVnesClass", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#0000ff;\">\320\237\321\200\320\270\320\265\320\274\320\275\320\270\321\206\320\260 - \320\222\320\275\320\265\321\201 \320\275\320\260 \320\260\321\200\321\202\320\270\320\272\320\273\320\270 (\320\276\320\264 \321\204\320\270\320\267\320\270\321\207\320\272\320\276 \320\273\320\270\321\206\320\265)</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QIzjavaVnesClass: public Ui_QIzjavaVnesClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QIZJAVAVNES_H

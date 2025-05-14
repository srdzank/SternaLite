/********************************************************************************
** Form generated from reading UI file 'qkalkulacijavnes.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QKALKULACIJAVNES_H
#define UI_QKALKULACIJAVNES_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QKalkulacijaVnesClass
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_13;
    QLabel *label_6;
    QTableView *tableView;
    QLabel *label;
    QLabel *label_12;
    QLabel *label_4;
    QLineEdit *lineEdit_6;
    QLabel *label_30;
    QLabel *label_23;
    QLineEdit *lineEdit_8;
    QLabel *label_21;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLabel *label_13;
    QLineEdit *lineEdit_9;
    QLabel *label_17;
    QLineEdit *lineEdit_15;
    QLabel *label_29;
    QLineEdit *lineEdit_17;
    QLineEdit *lineEdit_22;
    QLineEdit *lineEdit_18;
    QLabel *label_25;
    QLineEdit *lineEdit_23;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_12;
    QLabel *label_14;
    QDateTimeEdit *dateTimeEdit_3;
    QLabel *label_32;
    QLineEdit *lineEdit_25;
    QLabel *label_8;
    QLineEdit *lineEdit_14;
    QLabel *label_11;
    QLabel *label_2;
    QLabel *label_18;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_26;
    QComboBox *comboBox_2;
    QLabel *label_24;
    QLabel *label_7;
    QLabel *label_9;
    QLineEdit *lineEdit_5;
    QDateTimeEdit *dateTimeEdit_4;
    QLabel *label_20;
    QLabel *label_22;
    QLabel *label_19;
    QLineEdit *lineEdit_16;
    QDateTimeEdit *dateTimeEdit_2;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label_10;
    QLineEdit *lineEdit_7;
    QLabel *label_15;
    QLineEdit *lineEdit_10;
    QLabel *label_16;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_20;
    QLabel *label_27;
    QLabel *label_26;
    QLineEdit *lineEdit_19;
    QLabel *label_28;
    QLabel *label_31;
    QTextEdit *textEdit;
    QLineEdit *lineEdit_21;
    QLineEdit *lineEdit_24;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;

    void setupUi(QWidget *QKalkulacijaVnesClass)
    {
        if (QKalkulacijaVnesClass->objectName().isEmpty())
            QKalkulacijaVnesClass->setObjectName("QKalkulacijaVnesClass");
        QKalkulacijaVnesClass->resize(2395, 2400);
        QFont font;
        font.setPointSize(10);
        QKalkulacijaVnesClass->setFont(font);
        layoutWidget = new QWidget(QKalkulacijaVnesClass);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 1329, 611));
        layoutWidget->setFont(font);
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setFont(font);

        gridLayout->addWidget(lineEdit_3, 16, 4, 1, 2);

        lineEdit_13 = new QLineEdit(layoutWidget);
        lineEdit_13->setObjectName("lineEdit_13");
        lineEdit_13->setEnabled(false);
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        lineEdit_13->setFont(font1);
        lineEdit_13->setReadOnly(true);

        gridLayout->addWidget(lineEdit_13, 23, 4, 1, 2);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 16, 0, 1, 1);

        tableView = new QTableView(layoutWidget);
        tableView->setObjectName("tableView");
        QPalette palette;
        QBrush brush(QColor(215, 215, 215, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush);
        tableView->setPalette(palette);
        tableView->setFont(font);
        tableView->setAlternatingRowColors(true);

        gridLayout->addWidget(tableView, 30, 0, 1, 12);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setFont(font);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName("label_12");
        label_12->setFont(font);

        gridLayout->addWidget(label_12, 23, 0, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 0, 0, 1, 7);

        lineEdit_6 = new QLineEdit(layoutWidget);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setFont(font);
        lineEdit_6->setReadOnly(true);

        gridLayout->addWidget(lineEdit_6, 7, 1, 1, 2);

        label_30 = new QLabel(layoutWidget);
        label_30->setObjectName("label_30");
        label_30->setFont(font);

        gridLayout->addWidget(label_30, 27, 0, 1, 1);

        label_23 = new QLabel(layoutWidget);
        label_23->setObjectName("label_23");
        label_23->setFont(font);

        gridLayout->addWidget(label_23, 26, 0, 1, 1);

        lineEdit_8 = new QLineEdit(layoutWidget);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setFont(font);
        lineEdit_8->setReadOnly(true);

        gridLayout->addWidget(lineEdit_8, 15, 8, 1, 1);

        label_21 = new QLabel(layoutWidget);
        label_21->setObjectName("label_21");
        label_21->setFont(font);

        gridLayout->addWidget(label_21, 15, 0, 1, 1);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setFont(font);

        gridLayout->addWidget(lineEdit_4, 16, 1, 1, 2);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 16, 3, 1, 1);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName("label_13");
        label_13->setFont(font);

        gridLayout->addWidget(label_13, 23, 3, 1, 1);

        lineEdit_9 = new QLineEdit(layoutWidget);
        lineEdit_9->setObjectName("lineEdit_9");
        lineEdit_9->setEnabled(false);
        lineEdit_9->setFont(font1);
        lineEdit_9->setReadOnly(true);

        gridLayout->addWidget(lineEdit_9, 23, 1, 1, 2);

        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName("label_17");
        label_17->setFont(font1);

        gridLayout->addWidget(label_17, 23, 6, 1, 1);

        lineEdit_15 = new QLineEdit(layoutWidget);
        lineEdit_15->setObjectName("lineEdit_15");
        lineEdit_15->setFont(font);
        lineEdit_15->setReadOnly(false);

        gridLayout->addWidget(lineEdit_15, 23, 7, 1, 2);

        label_29 = new QLabel(layoutWidget);
        label_29->setObjectName("label_29");
        label_29->setFont(font);

        gridLayout->addWidget(label_29, 26, 3, 1, 1);

        lineEdit_17 = new QLineEdit(layoutWidget);
        lineEdit_17->setObjectName("lineEdit_17");
        lineEdit_17->setFont(font);

        gridLayout->addWidget(lineEdit_17, 26, 1, 1, 2);

        lineEdit_22 = new QLineEdit(layoutWidget);
        lineEdit_22->setObjectName("lineEdit_22");
        lineEdit_22->setEnabled(false);
        lineEdit_22->setFont(font1);
        lineEdit_22->setReadOnly(true);

        gridLayout->addWidget(lineEdit_22, 26, 4, 1, 2);

        lineEdit_18 = new QLineEdit(layoutWidget);
        lineEdit_18->setObjectName("lineEdit_18");
        lineEdit_18->setFont(font);
        lineEdit_18->setReadOnly(true);

        gridLayout->addWidget(lineEdit_18, 27, 4, 1, 2);

        label_25 = new QLabel(layoutWidget);
        label_25->setObjectName("label_25");
        label_25->setFont(font);

        gridLayout->addWidget(label_25, 27, 3, 1, 1);

        lineEdit_23 = new QLineEdit(layoutWidget);
        lineEdit_23->setObjectName("lineEdit_23");
        lineEdit_23->setFont(font);

        gridLayout->addWidget(lineEdit_23, 27, 1, 1, 2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEnabled(true);
        lineEdit_2->setFont(font);
        lineEdit_2->setReadOnly(false);

        gridLayout->addWidget(lineEdit_2, 15, 4, 1, 3);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 15, 3, 1, 1);

        lineEdit_12 = new QLineEdit(layoutWidget);
        lineEdit_12->setObjectName("lineEdit_12");
        lineEdit_12->setEnabled(false);
        lineEdit_12->setFont(font1);
        lineEdit_12->setReadOnly(true);

        gridLayout->addWidget(lineEdit_12, 15, 1, 1, 2);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName("label_14");
        label_14->setFont(font);

        gridLayout->addWidget(label_14, 15, 9, 1, 1);

        dateTimeEdit_3 = new QDateTimeEdit(layoutWidget);
        dateTimeEdit_3->setObjectName("dateTimeEdit_3");
        dateTimeEdit_3->setFont(font);
        dateTimeEdit_3->setDate(QDate(2000, 3, 1));
        dateTimeEdit_3->setCalendarPopup(true);

        gridLayout->addWidget(dateTimeEdit_3, 15, 10, 1, 2);

        label_32 = new QLabel(layoutWidget);
        label_32->setObjectName("label_32");
        label_32->setFont(font1);

        gridLayout->addWidget(label_32, 16, 9, 1, 1);

        lineEdit_25 = new QLineEdit(layoutWidget);
        lineEdit_25->setObjectName("lineEdit_25");
        lineEdit_25->setFont(font);
        lineEdit_25->setReadOnly(true);

        gridLayout->addWidget(lineEdit_25, 16, 10, 1, 2);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");
        label_8->setFont(font);

        gridLayout->addWidget(label_8, 23, 9, 1, 1);

        lineEdit_14 = new QLineEdit(layoutWidget);
        lineEdit_14->setObjectName("lineEdit_14");
        lineEdit_14->setFont(font);

        gridLayout->addWidget(lineEdit_14, 3, 1, 1, 2);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName("label_11");
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_11, 15, 7, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 2, 3, 1, 1);

        label_18 = new QLabel(layoutWidget);
        label_18->setObjectName("label_18");
        label_18->setFont(font);

        gridLayout->addWidget(label_18, 3, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setEnabled(true);
        lineEdit->setFont(font);
        lineEdit->setReadOnly(false);

        gridLayout->addWidget(lineEdit, 2, 4, 1, 3);

        lineEdit_26 = new QLineEdit(layoutWidget);
        lineEdit_26->setObjectName("lineEdit_26");
        lineEdit_26->setEnabled(false);
        lineEdit_26->setFont(font1);
        lineEdit_26->setReadOnly(true);

        gridLayout->addWidget(lineEdit_26, 2, 1, 1, 2);

        comboBox_2 = new QComboBox(layoutWidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setFont(font);
        comboBox_2->setEditable(true);

        gridLayout->addWidget(comboBox_2, 3, 4, 1, 3);

        label_24 = new QLabel(layoutWidget);
        label_24->setObjectName("label_24");
        label_24->setFont(font);

        gridLayout->addWidget(label_24, 3, 3, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        label_7->setFont(font1);

        gridLayout->addWidget(label_7, 4, 3, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");
        label_9->setFont(font1);

        gridLayout->addWidget(label_9, 7, 0, 1, 1);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setFont(font);

        gridLayout->addWidget(lineEdit_5, 4, 4, 1, 3);

        dateTimeEdit_4 = new QDateTimeEdit(layoutWidget);
        dateTimeEdit_4->setObjectName("dateTimeEdit_4");
        dateTimeEdit_4->setFont(font);
        dateTimeEdit_4->setDate(QDate(2000, 3, 1));
        dateTimeEdit_4->setCalendarPopup(true);

        gridLayout->addWidget(dateTimeEdit_4, 4, 1, 1, 2);

        label_20 = new QLabel(layoutWidget);
        label_20->setObjectName("label_20");
        label_20->setFont(font);

        gridLayout->addWidget(label_20, 4, 0, 1, 1);

        label_22 = new QLabel(layoutWidget);
        label_22->setObjectName("label_22");
        label_22->setFont(font);

        gridLayout->addWidget(label_22, 4, 7, 1, 1);

        label_19 = new QLabel(layoutWidget);
        label_19->setObjectName("label_19");
        label_19->setFont(font);

        gridLayout->addWidget(label_19, 3, 7, 1, 1);

        lineEdit_16 = new QLineEdit(layoutWidget);
        lineEdit_16->setObjectName("lineEdit_16");
        lineEdit_16->setFont(font);
        lineEdit_16->setLayoutDirection(Qt::RightToLeft);
        lineEdit_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lineEdit_16, 4, 8, 1, 1);

        dateTimeEdit_2 = new QDateTimeEdit(layoutWidget);
        dateTimeEdit_2->setObjectName("dateTimeEdit_2");
        dateTimeEdit_2->setFont(font);
        dateTimeEdit_2->setDate(QDate(2000, 3, 1));
        dateTimeEdit_2->setCalendarPopup(true);

        gridLayout->addWidget(dateTimeEdit_2, 3, 8, 1, 1);

        dateTimeEdit = new QDateTimeEdit(layoutWidget);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setFont(font);
        dateTimeEdit->setDate(QDate(2000, 3, 1));
        dateTimeEdit->setCalendarPopup(true);

        gridLayout->addWidget(dateTimeEdit, 2, 7, 1, 1);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName("label_10");
        label_10->setFont(font);

        gridLayout->addWidget(label_10, 7, 3, 1, 1);

        lineEdit_7 = new QLineEdit(layoutWidget);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setFont(font);
        lineEdit_7->setReadOnly(true);

        gridLayout->addWidget(lineEdit_7, 7, 4, 1, 1);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName("label_15");
        label_15->setFont(font);

        gridLayout->addWidget(label_15, 7, 5, 1, 1);

        lineEdit_10 = new QLineEdit(layoutWidget);
        lineEdit_10->setObjectName("lineEdit_10");
        lineEdit_10->setFont(font);
        lineEdit_10->setReadOnly(true);

        gridLayout->addWidget(lineEdit_10, 7, 6, 1, 1);

        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName("label_16");
        label_16->setFont(font);

        gridLayout->addWidget(label_16, 7, 7, 1, 1);

        lineEdit_11 = new QLineEdit(layoutWidget);
        lineEdit_11->setObjectName("lineEdit_11");
        lineEdit_11->setFont(font);
        lineEdit_11->setReadOnly(true);

        gridLayout->addWidget(lineEdit_11, 7, 8, 1, 1);

        lineEdit_20 = new QLineEdit(layoutWidget);
        lineEdit_20->setObjectName("lineEdit_20");
        lineEdit_20->setEnabled(false);
        lineEdit_20->setFont(font1);
        lineEdit_20->setReadOnly(true);

        gridLayout->addWidget(lineEdit_20, 28, 4, 1, 2);

        label_27 = new QLabel(layoutWidget);
        label_27->setObjectName("label_27");
        label_27->setFont(font);

        gridLayout->addWidget(label_27, 28, 3, 1, 1);

        label_26 = new QLabel(layoutWidget);
        label_26->setObjectName("label_26");
        label_26->setFont(font);

        gridLayout->addWidget(label_26, 28, 0, 1, 1);

        lineEdit_19 = new QLineEdit(layoutWidget);
        lineEdit_19->setObjectName("lineEdit_19");
        lineEdit_19->setEnabled(false);
        lineEdit_19->setFont(font1);
        lineEdit_19->setReadOnly(true);

        gridLayout->addWidget(lineEdit_19, 28, 1, 1, 2);

        label_28 = new QLabel(layoutWidget);
        label_28->setObjectName("label_28");
        label_28->setFont(font1);

        gridLayout->addWidget(label_28, 27, 6, 1, 1);

        label_31 = new QLabel(layoutWidget);
        label_31->setObjectName("label_31");
        label_31->setFont(font);

        gridLayout->addWidget(label_31, 28, 6, 1, 1);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName("textEdit");
        textEdit->setFont(font);

        gridLayout->addWidget(textEdit, 26, 9, 3, 3);

        lineEdit_21 = new QLineEdit(layoutWidget);
        lineEdit_21->setObjectName("lineEdit_21");
        lineEdit_21->setFont(font);
        lineEdit_21->setReadOnly(false);

        gridLayout->addWidget(lineEdit_21, 27, 7, 1, 2);

        lineEdit_24 = new QLineEdit(layoutWidget);
        lineEdit_24->setObjectName("lineEdit_24");
        lineEdit_24->setFont(font);
        lineEdit_24->setReadOnly(true);

        gridLayout->addWidget(lineEdit_24, 28, 7, 1, 2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setFont(font);

        gridLayout->addWidget(pushButton_3, 7, 10, 1, 2);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setFont(font);

        gridLayout->addWidget(pushButton_6, 4, 10, 1, 2);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setFont(font);

        gridLayout->addWidget(pushButton_5, 3, 10, 1, 2);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/sterna/Resources/key_f9.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_4->setIcon(icon);
        pushButton_4->setIconSize(QSize(16, 16));

        gridLayout->addWidget(pushButton_4, 2, 10, 1, 2);

        QWidget::setTabOrder(lineEdit_26, lineEdit);
        QWidget::setTabOrder(lineEdit, dateTimeEdit);
        QWidget::setTabOrder(dateTimeEdit, lineEdit_14);
        QWidget::setTabOrder(lineEdit_14, comboBox_2);
        QWidget::setTabOrder(comboBox_2, dateTimeEdit_2);
        QWidget::setTabOrder(dateTimeEdit_2, dateTimeEdit_4);
        QWidget::setTabOrder(dateTimeEdit_4, lineEdit_5);
        QWidget::setTabOrder(lineEdit_5, lineEdit_16);
        QWidget::setTabOrder(lineEdit_16, lineEdit_6);
        QWidget::setTabOrder(lineEdit_6, lineEdit_7);
        QWidget::setTabOrder(lineEdit_7, lineEdit_10);
        QWidget::setTabOrder(lineEdit_10, lineEdit_11);
        QWidget::setTabOrder(lineEdit_11, lineEdit_12);
        QWidget::setTabOrder(lineEdit_12, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, lineEdit_8);
        QWidget::setTabOrder(lineEdit_8, lineEdit_4);
        QWidget::setTabOrder(lineEdit_4, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, lineEdit_9);
        QWidget::setTabOrder(lineEdit_9, lineEdit_13);
        QWidget::setTabOrder(lineEdit_13, lineEdit_15);
        QWidget::setTabOrder(lineEdit_15, lineEdit_17);
        QWidget::setTabOrder(lineEdit_17, lineEdit_22);
        QWidget::setTabOrder(lineEdit_22, textEdit);
        QWidget::setTabOrder(textEdit, lineEdit_23);
        QWidget::setTabOrder(lineEdit_23, lineEdit_18);
        QWidget::setTabOrder(lineEdit_18, tableView);
        QWidget::setTabOrder(tableView, pushButton_4);
        QWidget::setTabOrder(pushButton_4, pushButton_5);
        QWidget::setTabOrder(pushButton_5, pushButton_6);
        QWidget::setTabOrder(pushButton_6, pushButton_3);
        QWidget::setTabOrder(pushButton_3, dateTimeEdit_3);
        QWidget::setTabOrder(dateTimeEdit_3, lineEdit_25);

        retranslateUi(QKalkulacijaVnesClass);

        QMetaObject::connectSlotsByName(QKalkulacijaVnesClass);
    } // setupUi

    void retranslateUi(QWidget *QKalkulacijaVnesClass)
    {
        QKalkulacijaVnesClass->setWindowTitle(QCoreApplication::translate("QKalkulacijaVnesClass", "QKalkulacijaVnes", nullptr));
        label_6->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "\320\232\320\276\320\273", nullptr));
        label->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "\320\250\320\270\321\204\321\200\320\260 \320\275\320\260 \320\272\320\276\320\274\320\270\320\275.", nullptr));
        label_12->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "\320\237\321\200\320\265\320\275.\320\224\320\224\320\222(%)", nullptr));
        label_4->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#0000ff;\">\320\237\321\200\320\270\320\265\320\274\320\275\320\270\321\206\320\260 - \320\232\320\260\320\273\320\272\321\203\320\273\320\260\321\206\320\270\321\230\320\260 - \320\222\320\275\320\265\321\201</span></p></body></html>", nullptr));
        label_30->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "\320\234\320\260\321\200\320\266\320\260  (%)", nullptr));
        label_23->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "\320\240\320\260\320\261\320\260\321\202(%)", nullptr));
        label_21->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "\320\250\320\270\321\204\321\200\320\260", nullptr));
        label_5->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "\320\235\320\260\320\261.\320\246\320\265\320\275\320\260 \320\261\320\265\320\267 \320\224\320\224\320\222", nullptr));
        label_13->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "\320\224\320\224\320\222 (\320\264\320\265\320\275)", nullptr));
        label_17->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "\320\235\320\260\320\261.\320\246\320\265\320\275\320\260 \321\201\320\276 \320\224\320\224\320\222", nullptr));
        label_29->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "\320\222\320\272. \320\275\320\260\320\261\320\260\320\262\320\275\320\260 \321\201\320\276 \320\224\320\224\320\222", nullptr));
        label_25->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "\320\234\320\260\321\200\320\266\320\260  (\320\264\320\265\320\275)", nullptr));
        label_3->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "\320\220\321\200\321\202\320\270\320\272\320\260\320\273", nullptr));
        label_14->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "\320\240\320\276\320\272 \320\242\321\200\320\260\320\265\321\232\320\265", nullptr));
        dateTimeEdit_3->setDisplayFormat(QCoreApplication::translate("QKalkulacijaVnesClass", "d/M/yyyy", nullptr));
        label_32->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "\320\227\320\260\320\273\320\270\321\205\320\260", nullptr));
        label_8->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "\320\227\320\260\320\261\320\265\320\273\320\265\321\210\320\272\320\260", nullptr));
        label_11->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "\320\225\320\264\320\274", nullptr));
        label_2->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "\320\232\320\276\320\274\320\270\320\275\321\202\320\265\320\275\321\202", nullptr));
        label_18->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "\320\224\320\276\320\272\321\203\320\274\320\265\320\275\321\202 \320\261\321\200.", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("QKalkulacijaVnesClass", "\320\244\320\260\320\272\321\202\321\203\321\200\320\260", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("QKalkulacijaVnesClass", "\320\230\321\201\320\277\321\200\320\260\321\202\320\275\320\270\321\206\320\260", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("QKalkulacijaVnesClass", "\320\241\320\274\320\265\321\202\320\272\320\260", nullptr));

        label_24->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "\320\224\320\276\320\272\321\203\320\274\320\265\320\275\321\202 \320\262\320\270\320\264.", nullptr));
        label_7->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "\320\230\320\267\320\275\320\276\321\201 \321\201\320\276 \320\224\320\224\320\222", nullptr));
        label_9->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "\320\237\321\200\320\265\321\201\320\274\320\265\321\202\320\260\320\275 \320\230\320\267\320\275\320\276\321\201", nullptr));
        dateTimeEdit_4->setDisplayFormat(QCoreApplication::translate("QKalkulacijaVnesClass", "d/M/yyyy", nullptr));
        label_20->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "\320\222\320\260\320\273\321\203\321\202\320\260", nullptr));
        label_22->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "\320\240\320\260\320\261\320\260\321\202 (%)", nullptr));
        label_19->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "\320\224\320\260\321\202\321\203\320\274 \320\275\320\260 \320\264\320\276\320\272\321\203\320\274\320\265\320\275\321\202", nullptr));
        lineEdit_16->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "0", nullptr));
        dateTimeEdit_2->setDisplayFormat(QCoreApplication::translate("QKalkulacijaVnesClass", "d/M/yyyy", nullptr));
        dateTimeEdit->setDisplayFormat(QCoreApplication::translate("QKalkulacijaVnesClass", "d/M/yyyy", nullptr));
        label_10->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "\320\240\320\260\320\267\320\273\320\270\320\272\320\260", nullptr));
        label_15->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "\320\230\320\267\320\273\320\265\320\267\320\275\320\260 \320\222\321\200\320\265\320\264\320\275\320\276\321\201\321\202", nullptr));
        label_16->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "\320\224\320\276\320\261\320\270\320\262\320\272\320\260 \321\201\320\276 \320\224\320\224\320\222", nullptr));
        label_27->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "\320\237\321\200\320\265\321\201\320\274. \320\224\320\224\320\222", nullptr));
        label_26->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "\320\237\321\200\320\276\320\264.\320\246\320\265\320\275\320\260 \320\261\320\265\320\267 \320\224\320\224\320\222", nullptr));
        label_28->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "\320\237\321\200\320\276\320\264.\320\246\320\265\320\275\320\260 \321\201\320\276 \320\224\320\224\320\222", nullptr));
        label_31->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "\320\222\320\272.\320\237\321\200\320\276\320\264. \321\201\320\276 \320\224\320\224\320\222", nullptr));
        pushButton_3->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "F12- \320\224\320\276\320\264\320\260\321\230", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_3->setShortcut(QCoreApplication::translate("QKalkulacijaVnesClass", "F12", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_6->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "\320\221\321\200\320\270\321\210\320\270", nullptr));
        pushButton_5->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "Cancel", nullptr));
        pushButton_4->setText(QCoreApplication::translate("QKalkulacijaVnesClass", "\320\237\320\276\321\202\320\262\321\200\320\264\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QKalkulacijaVnesClass: public Ui_QKalkulacijaVnesClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QKALKULACIJAVNES_H

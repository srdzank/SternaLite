#include "qizvestai.h"
#include <QPainter>
#include <QGraphicsScene>
#include "qizvestaiwidget.h"
#include <QScreen>
#include <QDate>



QIzvestai::QIzvestai(QWidget *parent)
	: QMyBaseWidget(parent)
{
	ui.setupUi(this);
	scrollArea.setParent(this);
	showMaximized();
	scrollArea.setBackgroundRole(QPalette::Light);// set background of scroll Area
    scrollArea.setGeometry(0, 0, QGuiApplication::primaryScreen()->geometry().width() - 210, QGuiApplication::primaryScreen()->geometry().height() - 165);
	izvestai = showMyWidget<QIzvestaiWidget>(izvestai); 
    connect(izvestai,SIGNAL(closeW()),this,SLOT(closeW()));
    scrollArea.setWidget(izvestai);
	
	QDate d0, d;
	d0.setDate(2016, 1, 1);
	d = d.currentDate();
	scrollArea.horizontalScrollBar()->setSliderPosition(20 * d0.daysTo(d));
}

QIzvestai::~QIzvestai()
{
}

void QIzvestai::closeW()
{
    izvestai = deleteMyWidget<QIzvestaiWidget>(izvestai);
}

void QIzvestai::refresh()
{
	//izvestai->createLagerList();
}

void QIzvestai::pressEscape()
{
	this->raise();
	this->setFocus();
	emit signCloseMyWidget();
}

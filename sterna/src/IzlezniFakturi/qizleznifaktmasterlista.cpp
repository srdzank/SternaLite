#include "qizleznifaktmasterlista.h"
#include <QSqlQuery>
#include <QSqlRecord>
#include "chelperclass.h"
#include <QScreen>
#include <QDate>
#include "xx.h"



QIzleznifaktmasterLista::QIzleznifaktmasterLista(QWidget *parent)
	: QMyBaseFormWidget(parent)
	,m_row(0)
{
	ui.setupUi(this);
	Singleton *s = Singleton::Instance();
	QRect rMain = s->getMainRect();
	ui.gridLayout->setGeometry(rMain);
	setLayout(ui.gridLayout);
	setFixedSize(QSize(rMain.width()-20, rMain.height()-65));
	getTableColumnWidths(16);
	getTableColumnWidths_detail(14);
	ui.tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui.tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui.tableView_2->setSelectionMode(QAbstractItemView::SingleSelection);
    ui.tableView_2->setSelectionBehavior(QAbstractItemView::SelectRows);

	ui.tableView->setSortingEnabled(true);
	
	connect(ui.tableView->horizontalHeader(),SIGNAL(sectionClicked(int)), ui.tableView, SLOT(sortByColumn(int)));
	ui.tableView_2->setSortingEnabled(true);
	connect(ui.tableView_2->horizontalHeader(),SIGNAL(sectionClicked(int)), ui.tableView_2, SLOT(sortByColumn(int)));
    connect(ui.lineEdit_7, SIGNAL(textChanged(const QString &)), this, SLOT(lineEdit7Pressed(const QString &)));
	
    lista("%%%",QDateTime::currentDateTime(), QDateTime::currentDateTime());
    m_selectedText = model->item(0, 0) ? model->item(0, 0)->text():"";
    lista_detail(m_selectedText);
	//ui.tableView->setSortingEnabled(true); 
    ui.tableView->setFocus();
}

QIzleznifaktmasterLista::~QIzleznifaktmasterLista()
{
	setTableColumnWidths(16);
	setTableColumnWidths_detail(14);
}

void QIzleznifaktmasterLista::setRow(int mrow)
{
	ui.tableView->selectRow(mrow);
}

int QIzleznifaktmasterLista::getRow()
{
	return m_row;
}

void QIzleznifaktmasterLista::pressEscape()
{
    emit closeW();
}

void QIzleznifaktmasterLista::pressReturn()
{
	if (ui.tableView->hasFocus())
	{
		emit sfaktmasterToIzvod(m_listDataInfo);	
	}
}
void QIzleznifaktmasterLista::lista(const QString& nameSearch, QDateTime date1, QDateTime date2)
{
    QLocale loc;
	
    if (nameSearch.length() < 0)
    {
        ui.tableView->hide();
        return;
    }
    int r = 0;
    int c = 16;
    int fieldNo[16];
    QString country[16];
//    int colWidth[] = {0, 80, 80, 170, 100, 100, 100, 100, 140, 0, 0, 0, 0, 0, 90, 0};


	
	QString temp = "";
	if (date1 == date2)
	{
		temp = 
			"select dokumenti.id, dok_id, datum, komintenti.naziv, 0,0,0,0,0, zabeleska, komintenti.adresa, komintenti.grad, rok, komintenti.id, valuta_datum, komintenti.sifra "
			"from dokumenti "
			"left join komintenti on dokumenti.komintent_id = komintenti.id "
			"where dok_tip = 40 and komintenti.naziv like '"+ nameSearch +"'order by dok_id desc "
			;
	}
	else
	{
		temp = 
			"select dokumenti.id, dok_id, datum, komintenti.naziv, 0,0,0,0,0,zabeleska,komintenti.adresa, komintenti.grad, rok, komintenti.id, valuta_datum, komintenti.sifra "
			"from dokumenti "
			"left join komintenti on dokumenti.komintent_id = komintenti.id "
			"where dok_tip = 40 and (datum between #"+ date1.toString("yyyy/MM/dd") +"# and #"+ date2.toString("yyyy/MM/dd") +"# ) and komintenti.naziv like '"+ nameSearch +"'order by dok_id desc "
			;
	}
    QSqlQuery query(temp);
    model = new QStandardItemModel(r,c);
    model->setHeaderData( 0, Qt::Horizontal, tr("Id.\n"));
    model->setHeaderData( 1, Qt::Horizontal, tr("Фактура бр.\n"));
    model->setHeaderData( 2, Qt::Horizontal, tr("Датум\n"));
    model->setHeaderData( 3, Qt::Horizontal, tr("Коминтенти\n"));
    model->setHeaderData( 4, Qt::Horizontal, tr("Износ \nбез ДДВ"));
    model->setHeaderData( 5, Qt::Horizontal, tr("ДДВ Износ\n"));
    model->setHeaderData( 6, Qt::Horizontal, tr("Вкупен Износ\n со ДДВ"));
	model->setHeaderData( 7, Qt::Horizontal, tr("Платено\n"));
	model->setHeaderData( 8, Qt::Horizontal, tr("Останато \nза плаќање"));
	model->setHeaderData( 9, Qt::Horizontal, tr("Забелешка\n"));
	model->setHeaderData( 14, Qt::Horizontal, tr("Валута\n"));


    ui.tableView->setModel(model);
    header = new QHeaderView(Qt::Horizontal, this);
    header->setSectionsClickable(true);
    ui.tableView->setHorizontalHeader(header);
    header->show();
    int row = 0;
    CHelperClass chc(this);
    QString tip = "40";
    chc.createStatusMap(tip); 
    chc.createListaIzlezniFakturiIznosi(tip);
    chc.createListaKomintenti(tip);
	chc.createPovratnicaFakturiIznosi();

	chc.getFakturaIznosiAll(tip);
	
	float mIznos = 0.0f;
	float mDDV = 0.0f;
	float mVkupno = 0.0f;
	float mVPlateno = 0.0f;
	float mVOstanato = 0.0f;
	Singleton *s = Singleton::Instance();
	s->m_listFakturiS.clear();
	Singleton::tinfoFakturi itemInfo;

	setUpdatesEnabled(false);
    while (query.next()) 
    {
		itemInfo.fakturaData = query.value(2).toDateTime(); //2
		itemInfo.fakturaValuta = query.value(14).toDateTime(); //2
		itemInfo.komintent_naziv = query.value(3).toString(); //3
		//itemInfo.fakturaValuta = ; 
		itemInfo.iznos = query.value(4).toFloat(); //4
		//itemInfo.plateno = ; //7
		//itemInfo.komintent_id = ; 

		for (int i = 0; i < c; i++)
        {
			QStandardItem *item = new QStandardItem(query.value(i).toString());
            if ((i == 1))
            {
				chc.fakturaStatus(item, tip);
                item->setTextAlignment(Qt::AlignLeft);
            }

            if ((i == 2))
            {
                item = new QStandardItem(query.value(i).toString().left(10));
                item->setTextAlignment(Qt::AlignLeft);
            }
            if ((i == 3))
            {
                QString info = chc.getKomintentDetail(query.value(i).toString());
                item->setToolTip(info);
            }
            		
            if ((i == 4))
            { 
                float tempIznos = chc.getFakturaIznos(query.value(1).toString());
                mIznos += tempIznos;
                item = new QStandardItem(loc.toString(chc.rouded(tempIznos),'f',2));
                item->setTextAlignment(Qt::AlignRight);
            }
            if ((i == 5))
            {
                float tempDDV = chc.getFakturaDDV(query.value(1).toString());
                mDDV += tempDDV;
                item = new QStandardItem(loc.toString(chc.rouded(tempDDV),'f',2));
                item->setTextAlignment(Qt::AlignRight);
            }
            if ((i == 6))
            {
                float tempVkupen = chc.getFakturaVkupno(query.value(1).toString());
                mVkupno += tempVkupen;
                item = new QStandardItem(loc.toString(chc.rouded(tempVkupen),'f',2));
                item->setTextAlignment(Qt::AlignRight);
            }
			if ((i == 7))
			{
				float tempPlatenIznos = chc.getFakturaPrilivIznos(query.value(1).toString());
				float tempVratenIznos = chc.getPovratnicaFakturaVkupno(query.value(1).toString());

				mVPlateno += tempPlatenIznos;
				mVPlateno += tempVratenIznos;
				item = new QStandardItem(loc.toString(chc.rouded(tempPlatenIznos + tempVratenIznos),'f',2));
				item->setTextAlignment(Qt::AlignRight);
			}
			if ((i == 8))
			{
				QString idd = query.value(1).toString();
				float tempVkupen = chc.getFakturaVkupno(query.value(1).toString());
				float tempPlatenIznos = chc.getFakturaPrilivIznos(query.value(1).toString());
				float tempVratenIznos = chc.getPovratnicaFakturaVkupno(query.value(1).toString());
				mVOstanato += (tempVkupen - tempPlatenIznos - tempVratenIznos); 
				item = new QStandardItem(loc.toString(chc.rouded(tempVkupen - tempPlatenIznos - tempVratenIznos), 'f', 2));
				item->setTextAlignment(Qt::AlignRight);
				itemInfo.iznos = tempVkupen; //4
				itemInfo.plateno = tempPlatenIznos + tempVratenIznos; //7
			}
			if ((i == 14))
			{
				item = new QStandardItem(query.value(i).toString().left(10));
				QDateTime tempD = query.value(i).toDateTime();
				QDateTime tempC = QDateTime::currentDateTime();
				QBrush newBrush;
				if (tempD > tempC)
				{
					newBrush.setColor(Qt::darkGreen);
					item->setForeground(newBrush);
				} 
				else
				{
					newBrush.setColor(Qt::red);
					item->setForeground(newBrush);
				}

				item->setTextAlignment(Qt::AlignRight);
			}

            item->setEditable(false);
            ui.tableView->setRowHeight(row, 18);
            ui.tableView->setColumnWidth(i, colWidth[i]);
            item->setEditable(false);
            model->setItem(row, i, item);
        }
        row++;
		s->m_listFakturiS.push_back(itemInfo);
    } 
	setUpdatesEnabled(true);
	QString info = tr("       Вкупен Износ : ") + loc.toString(chc.rouded(mIznos),'f',2) + tr(" ден.") + 
		tr("       Вкупен ДДВ : ") + loc.toString(chc.rouded(mDDV),'f',2) + tr(" ден.") +
		tr("       Вкупен Износ со ДДВ: ") + loc.toString(chc.rouded(mVkupno),'f',2) + tr(" ден.") ;
	QString info2 = tr("       Платено : ") + loc.toString(chc.rouded(mVPlateno),'f',2) + tr(" ден.") + 
		tr("       Останато за плаќање : ") + loc.toString(chc.rouded(mVOstanato),'f',2) + tr(" ден.") ;

	ui.label_11->setText(info);
	ui.label_12->setText(info2);

    QItemSelectionModel *sm = ui.tableView->selectionModel();
    connect(sm, SIGNAL(currentRowChanged(QModelIndex,QModelIndex)),
        this, SLOT(selectionChanged(QModelIndex,QModelIndex)));
	connect(header, SIGNAL(sectionResized(int, int, int)), this, SLOT(procSectionResized(int, int, int)));
	ui.tableView->setColumnHidden(0, true);
	ui.tableView->setColumnHidden(9, true);
	ui.tableView->setColumnHidden(10, true);
	ui.tableView->setColumnHidden(11, true);
	ui.tableView->setColumnHidden(12, true);
	ui.tableView->setColumnHidden(13, true);
	ui.tableView->setColumnHidden(15, true);
    ui.tableView->show();
}
void QIzleznifaktmasterLista::selectionChanged(QModelIndex modelX, QModelIndex modelY)
{
	int i = ui.tableView->currentIndex().row();
	m_row = ui.tableView->currentIndex().row();
    m_selectedText = model->item(i, 1) ? model->item(i, 1)->text():"";
    m_fakturaBr = model->item(i, 1)->text();
    m_fakturadatum = model->item(i, 2)->text();
    m_komintent_naziv =  model->item(i, 3)->text();
    m_komintent_adresa =  model->item(i, 10)->text();
    m_komintent_grad =  model->item(i, 11)->text();
    m_rok =  model->item(i, 12)->text();
	ui.label->setText(tr("Фактура бр:") + m_selectedText + 
		tr(" - Шифра: ") + model->item(i, 15)->text() + 
		tr(" - Коминтент: ") + m_komintent_naziv);

	ui.lineEdit_6->setText(model->item(i, 6)->text());
	ui.lineEdit_8->setText(model->item(i, 7)->text());
	ui.lineEdit_9->setText(model->item(i, 8)->text());

    lista_detail(m_selectedText);

	
}
void QIzleznifaktmasterLista::lista_detail(const QString& nameSearch)
{
    QLocale loc;
	CHelperClass chc(this);
    if (nameSearch.length() < 0)
    {
        ui.tableView_2->hide();
        return;
    }

    int r = 0;
    int c = 14;
    int fieldNo[14];
    QString country[14];
//    int colWidth[] = {0, 50, 170, 70, 70, 70, 70, 100, 70, 100, 100, 100, 100, 0};


    QString colName[] = {"id", "sifra", "artikal", "edm", "ikol", "icena", "rabat" "iznos", "ddv", "iznos", "iznosddv", "vkupeniznos"};
    QString temp = 
        "select "
		"artikli.id, " 
		"sifra, "
		"artikal, "
		"ikol, "
		"edm, "
		"prod_cena ," //prod_cena (so ddv)
		"rabat, " 
		"prod_cena * (1 - rabat/100), " //cena + rabat
		"artikli.ddv, " //ddv
		"ikol * prod_cena * (1 - rabat/100) / ( 1 + artikli.ddv / 100), " //износ без ддв
		"ikol * prod_cena * (1 - rabat/100) -  ikol * prod_cena * (1 - rabat/100) / ( 1 + artikli.ddv / 100) , " //ddv
		"ikol * prod_cena * (1 - rabat/100) , ispratnica_id, " //iznos
		"ikol * prod_cena * (rabat/100) "
		"from magacin                                         "
        "left join artikli on magacin.artikal_id = artikli.id "
        "where magacin.dok_tip = 40 and magacin.dok_id=       ";
    temp += m_selectedText;
    temp += "";
    QSqlQuery query(temp);

    model2 = new QStandardItemModel(r,c);
    model2->setHeaderData( 0, Qt::Horizontal, tr("Ид."));
    model2->setHeaderData( 1, Qt::Horizontal, tr("Шифра"));
    model2->setHeaderData( 2, Qt::Horizontal, tr("Артикал"));
    model2->setHeaderData( 3, Qt::Horizontal, tr("Кол."));
    model2->setHeaderData( 4, Qt::Horizontal, tr("Едм."));
    model2->setHeaderData( 5, Qt::Horizontal, tr("Цена"));
	model2->setHeaderData( 6, Qt::Horizontal, tr("Рабат %"));
	model2->setHeaderData( 7, Qt::Horizontal, tr("Цена со Рабат"));
	model2->setHeaderData( 8, Qt::Horizontal, tr("ДДВ %"));
	model2->setHeaderData( 9, Qt::Horizontal, tr("Износ"));
	model2->setHeaderData( 10, Qt::Horizontal, tr("ДДВ Износ"));
	model2->setHeaderData( 11, Qt::Horizontal, tr("Износ со ДДВ"));
	model2->setHeaderData( 12, Qt::Horizontal, tr("Испратница Бр."));
	model2->setHeaderData( 13, Qt::Horizontal, tr("Рабат"));

	ui.tableView_2->setModel(model2);
    header2 = new QHeaderView(Qt::Horizontal, this);
    header2->setSectionsClickable(true);
    ui.tableView_2->setHorizontalHeader(header2);
    header2->show();
    int row = 0;
    float sumaDDV = 0.f;
	int color1_old = 0;
    bool colorCurr = false;
	while (query.next()) 
    {
        for (int i = 0; i < c; i++)
        {
            QStandardItem *item = NULL;
            QString temp = query.value(i).toString();
			item = new QStandardItem("");
		
			int color1 = query.value(12).toInt();
			if (color1 > 0)
			{
				if (color1 != color1_old)
				{
					colorCurr = !colorCurr;							
				} 
			} 
			color1_old = color1;
			if (color1 > 0)
			{
				if (colorCurr)
				{
					item->setData(QBrush(QColor(140,255,255)), Qt::BackgroundRole);
				} 
				else
				{
					item->setData(QBrush(QColor(188,255,255)), Qt::BackgroundRole);
				}

			}
		//		

			if ((i > 4)||(i == 3))
            {
                item->setText(loc.toString(chc.rouded(temp.toDouble()), 'f', 2));
				item->setTextAlignment(Qt::AlignRight);
                if (i == 11)
                {
                    sumaDDV += temp.toFloat();
                }
            }
            else
            {
                item->setText(temp);
                item->setTextAlignment(Qt::AlignLeft);
            }
            
            item->setEditable(false);
            ui.tableView_2->setRowHeight(row, 18);
            ui.tableView_2->setColumnWidth(i, colWidth_detail[i]);
            model2->setItem(row, i, item);
        }
        row++;
    } 
// 	ui.lineEdit_6->setText(loc.toString(sumaDDV, 'f', 2));
// 	CHelperClass chc(this);
// 	QString tip = "40";
// 	chc.getFakturaPlatenIznos(m_selectedText, tip);
// 	ui.lineEdit_8->setText(loc.toString(chc.getPlatenIznos(), 'f', 2));
// 	ui.lineEdit_9->setText(loc.toString(sumaDDV - chc.getPlatenIznos(), 'f', 2));
	connect(header2, SIGNAL(sectionResized(int, int, int)), this, SLOT(procSectionResized_detail(int, int, int)));
	ui.tableView_2->setColumnHidden(0, true);
	ui.tableView_2->setColumnHidden(13, true);

    ui.tableView_2->show();
}


void QIzleznifaktmasterLista::procSectionResized(int a, int b, int c)
{
	colWidth[a] = c;
}

void QIzleznifaktmasterLista::procSectionResized_detail(int a, int b, int c)
{
	colWidth_detail[a] = c;
}

void QIzleznifaktmasterLista::deleteDok(int idDok)
{
    QSqlQuery query;
    query.clear();
    query.prepare(
        "delete from magacin where dok_tip = 40 and dok_id = :a"
        );
    query.bindValue(":a", idDok);	
    query.exec();
}
void QIzleznifaktmasterLista::on_pushButton_clicked()
{
    emit procF2();
}
void QIzleznifaktmasterLista::on_pushButton_2_clicked()
{
    emit procF3();
}

QStringList QIzleznifaktmasterLista::geInfo()
{
    QStringList info;
    info.clear();
    info << m_komintent_naziv << m_komintent_adresa << m_komintent_grad << m_fakturadatum << m_fakturaBr << m_rok;
    return info;
}

void QIzleznifaktmasterLista::setInitText(QString text, QDateTime &date1, QDateTime &date2)
{
    ui.tableView->setSelectionMode(QAbstractItemView::MultiSelection); 
	ui.label_4->setText(tr("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\np, li { white-space: pre-wrap; }\n</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#0000ff;\">Излезни Фактури - Листа</span></p></body></html>"));
	ui.tableView->setFocus();
	connect(ui.tableView, SIGNAL(clicked(QModelIndex)), this, SLOT(calcSelectedItems()));
	ui.lineEdit_7->setText(text);
	lista(text + "%", date1, date2);
}

void QIzleznifaktmasterLista::setInitTextfaktmaster(QString text, QDateTime &date1, QDateTime &date2)
{
	ui.tableView->setSelectionMode(QAbstractItemView::SingleSelection); 
	ui.label_4->setText(tr("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\np, li { white-space: pre-wrap; }\n</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#0000ff;\">Излезни Фактури - Листа</span></p></body></html>"));
	ui.tableView->setFocus();
	connect(ui.tableView, SIGNAL(clicked(QModelIndex)), this, SLOT(calcSelectedItems()));

	ui.lineEdit_7->setText(text);
	lista(text + "%", date1, date2);
}

void QIzleznifaktmasterLista::lineEdit7Pressed(const QString & text)
{
    lista(text + "%", QDateTime::currentDateTime(), QDateTime::currentDateTime());
}

void QIzleznifaktmasterLista::calcSelectedItems()
{
	QLocale loc;
	QModelIndexList itemSelection = ui.tableView->selectionModel()->selectedRows();
	m_listDataInfo.clear();
	float mIznos = 0.f;
	for (int i = 0; i < itemSelection.count();i++)
	{
		QString itemData = "";
		for(int tempCol = 0; tempCol < 14; tempCol++)
		{
			itemData += model->item(itemSelection.at(i).row(), tempCol)->text()+ "  ::  ";
			if( tempCol == 8)
			{
				mIznos += loc.toFloat(model->item(itemSelection.at(i).row(), tempCol)->text());
			}
		}
		itemData += "40  ::  ";
		m_listDataInfo << itemData;

		int stop = 0;
	}
	CHelperClass chc(this);
	QString info = tr("       Вкупен Неплатен Износ во селектираните фактури е : ") + loc.toString(chc.rouded(mIznos),'f',2) + tr(" ден.");
	ui.label_13->setText(info);
}

bool QIzleznifaktmasterLista::isButtonChecked()
{
return ui.radioButton->isChecked();
}



void QIzleznifaktmasterLista::setTableColumnWidths(int ccolumn)
{
	Singleton *s = Singleton::Instance();
	QStringList tempWidth;
	for (int i = 0; i < ccolumn; i++)
	{
		tempWidth << QString::number(ui.tableView->columnWidth(i), 10);
	}
	s->setFaktura_ColumnWidth(tempWidth);
}

void QIzleznifaktmasterLista::getTableColumnWidths(int ccolumn)
{
	QLocale loc;
	Singleton *s = Singleton::Instance();
	QStringList sss = s->getFaktura_ColumnWidth();
	if (sss.count() == ccolumn)
	{
		for (int i1 = 0; i1 < ccolumn; i1++)
		{
			colWidth[i1] = loc.toInt(sss.at(i1));
		}
	}
	else
	{
		for (int i1 = 0; i1 < ccolumn; i1++)
		{
			colWidth[i1] = 100;
		}
	}
}

void QIzleznifaktmasterLista::setTableColumnWidths_detail(int ccolumn)
{
	Singleton *s = Singleton::Instance();
	QStringList tempWidth;
	for (int i = 0; i < ccolumn; i++)
	{
		tempWidth << QString::number(ui.tableView_2->columnWidth(i), 10);
	}
	s->setFaktura_Detail_ColumnWidth(tempWidth);
}

void QIzleznifaktmasterLista::getTableColumnWidths_detail(int ccolumn)
{
	QLocale loc;
	Singleton *s = Singleton::Instance();
	QStringList sss = s->getFaktura_Detail_ColumnWidth();
	if (sss.count() == ccolumn)
	{
		for (int i1 = 0; i1 < ccolumn; i1++)
		{
			colWidth_detail[i1] = loc.toInt(sss.at(i1));
		}
	}
	else
	{
		for (int i1 = 0; i1 < ccolumn; i1++)
		{
			colWidth_detail[i1] = 100;
		}
	}
}

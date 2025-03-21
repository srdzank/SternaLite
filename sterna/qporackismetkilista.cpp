#include "qporackismetkilista.h"
#include <QSqlQuery>
#include <QSqlRecord>
#include "chelperclass.h"
#include <QScreen>
#include <QDate>
#include "qfiscalform.h"
#include <QMessageBox>

#include <QSqlError>






QPorackiSmetkiLista::QPorackiSmetkiLista(QWidget *parent)
	: QMyBaseFormWidget(parent)
	,m_row(0)
	,m_statKorekcija(0)
{
	ui.setupUi(this);
    QScreen *desk = QGuiApplication::primaryScreen();
    QRect deskRect = desk->geometry();  // Get screen geometry
//	ui.tabWidget->setGeometry(10, 10, deskRect.width() - 300, deskRect.height() - 200);
	ui.tabWidget->setFixedWidth(deskRect.width() - 250);
	ui.tabWidget->setFixedHeight(deskRect.height()-200);
	
	ui.tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui.tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui.tableView_2->setSelectionMode(QAbstractItemView::SingleSelection);
    ui.tableView_2->setSelectionBehavior(QAbstractItemView::SelectRows);

	ui.tableView->setSortingEnabled(true);
	
	connect(ui.tableView->horizontalHeader(),SIGNAL(sectionClicked(int)), ui.tableView, SLOT(sortByColumn(int)));
	ui.tableView_2->setSortingEnabled(true);
	connect(ui.tableView_2->horizontalHeader(),SIGNAL(sectionClicked(int)), ui.tableView_2, SLOT(sortByColumn(int)));
//    connect(ui.lineEdit_7, SIGNAL(textChanged(const QString &)), this, SLOT(lineEdit7Pressed(const QString &)));
	
    lista("%%%",QDateTime::currentDateTime(), QDateTime::currentDateTime());
    m_selectedText = model->item(0, 0) ? model->item(0, 0)->text():"";
    lista_detail(m_selectedText);
	//ui.tableView->setSortingEnabled(true); 
    ui.tableView->setFocus();
}

QPorackiSmetkiLista::~QPorackiSmetkiLista()
{

}

void QPorackiSmetkiLista::setRow(int mrow)
{
	ui.tableView->selectRow(mrow);
}

int QPorackiSmetkiLista::getRow()
{
	return m_row;
}

void QPorackiSmetkiLista::pressEscape()
{
    emit closeW();
}

void QPorackiSmetkiLista::pressReturn()
{
	if (ui.tableView->hasFocus())
	{
		emit sSmetkiToIzvod(m_listDataInfo);	
	}
}
void QPorackiSmetkiLista::lista(const QString& nameSearch, QDateTime date1, QDateTime date2)
{
    QLocale loc;
    if (nameSearch.length() < 0)
    {
        ui.tableView->hide();
        return;
    }
    int r = 0;
    int c = 17;
    int fieldNo[17];
    QString country[17];
    int colWidth[] = {0, 80, 150, 0, 100, 100, 100, 0, 0, 0, 0, 0, 0, 0, 100, 100, 150};
    QString temp = "";
	if (date1 == date2)
	{
		temp = 
			" select dokumenti.id, dok_id, datum, 0,0,0,0,0,0,zabeleska, 0,0, rok, 0, fisc_platen_iznos, 0, tip_dokument "
			" from dokumenti "
			" where dok_tip = 48 and (datum between #"+ date1.toString("yyyy/MM/dd") +" 00:00:00# and #"+ date2.toString("yyyy/MM/dd") +" 23:59:59# ) order by dok_id desc "
			;
	}
	else
	{
		temp = 
			" select dokumenti.id, dok_id, datum, 0, 0,0,0,0,0,zabeleska, 0, 0, rok, 0, fisc_platen_iznos, 0, tip_dokument "
			" from dokumenti "
			" where dok_tip = 48 and (datum between #"+ date1.toString("yyyy/MM/dd") +" 00:00:00# and #"+ date2.toString("yyyy/MM/dd") +" 23:59:59# ) order by dok_id desc "
			;
	}
    QSqlQuery query(temp);
    model = new QStandardItemModel(r,c);
    model->setHeaderData( 0, Qt::Horizontal, tr("Id."));
    model->setHeaderData( 1, Qt::Horizontal, tr("Сметка бр."));
    model->setHeaderData( 2, Qt::Horizontal, tr("Датум"));
    model->setHeaderData( 3, Qt::Horizontal, tr("Коминтенти"));
    model->setHeaderData( 4, Qt::Horizontal, tr("Износ"));
    model->setHeaderData( 5, Qt::Horizontal, tr("ДДВ"));
    model->setHeaderData( 6, Qt::Horizontal, tr("Вкупно"));
	model->setHeaderData( 7, Qt::Horizontal, tr("Платено"));
	model->setHeaderData( 8, Qt::Horizontal, tr("Останато за плаќање"));
	model->setHeaderData( 9, Qt::Horizontal, tr("Забелешка"));
	model->setHeaderData( 14, Qt::Horizontal, tr("Платено"));
	model->setHeaderData( 15, Qt::Horizontal, tr("Кусур"));
	model->setHeaderData( 16, Qt::Horizontal, tr("Тип док."));

    ui.tableView->setModel(model);
    header = new QHeaderView(Qt::Horizontal, this);
    header->setSectionsClickable(true);
    ui.tableView->setHorizontalHeader(header);
    header->show();
    int row = 0;
    CHelperClass chc(this);
    QString tip = "48";
    //chc.createStatusMap(tip); 
    chc.createListaIzlezniFakturiIznosi(tip);
    chc.createListaKomintenti(tip);
	chc.createPovratnicaFakturiIznosi();

	chc.getFakturaIznosiAll(tip);
	
    float mIznos = 0.0f;
    float mDDV = 0.0f;
    float mVkupno = 0.0f;
	float mVPlateno = 0.0f;
	float mVOstanato = 0.0f;

	setUpdatesEnabled(false);
    while (query.next()) 
    {
        for (int i = 0; i < c; i++)
        {
            QStandardItem *item = new QStandardItem(query.value(i).toString());
            if ((i == 1))
            {
				//chc.fakturaStatus(item, tip);
                item->setTextAlignment(Qt::AlignLeft);
            }

            if ((i == 2))
            {

                item = new QStandardItem(query.value(i).toDateTime().toString("dd-MM-yyyy hh:mm:ss"));
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
                item = new QStandardItem(loc.toString(tempIznos,'f',2));
                item->setTextAlignment(Qt::AlignRight);
            }
            if ((i == 5))
            {
                float tempDDV = chc.getFakturaDDV(query.value(1).toString());
                mDDV += tempDDV;
                item = new QStandardItem(loc.toString(tempDDV,'f',2));
                item->setTextAlignment(Qt::AlignRight);
            }
            if ((i == 6))
            {
                float tempVkupen = chc.getFakturaVkupno(query.value(1).toString());
                mVkupno += tempVkupen;
                item = new QStandardItem(loc.toString(tempVkupen,'f',2));
                item->setTextAlignment(Qt::AlignRight);
            }
			if ((i == 7))
			{
				float tempPlatenIznos = chc.getFakturaPrilivIznos(query.value(1).toString());
				float tempVratenIznos = chc.getPovratnicaFakturaVkupno(query.value(1).toString());

				mVPlateno += tempPlatenIznos;
				mVPlateno += tempVratenIznos;
				item = new QStandardItem(loc.toString(tempPlatenIznos + tempVratenIznos,'f',2));
				item->setTextAlignment(Qt::AlignRight);
			}
			if ((i == 8))
			{
				QString idd = query.value(1).toString();
				float tempVkupen = chc.getFakturaVkupno(query.value(1).toString());
				float tempPlatenIznos = chc.getFakturaPrilivIznos(query.value(1).toString());
				float tempVratenIznos = chc.getPovratnicaFakturaVkupno(query.value(1).toString());
				mVOstanato += (tempVkupen - tempPlatenIznos - tempVratenIznos); 
				item = new QStandardItem(loc.toString(tempVkupen - tempPlatenIznos - tempVratenIznos, 'f', 2));
				item->setTextAlignment(Qt::AlignRight);
			}
			if ((i == 14))
			{
				if (loc.toFloat(query.value(14).toString()) == 0)
				{
					item = new QStandardItem("");
					item->setTextAlignment(Qt::AlignRight);
				}
				else
				{
					item = new QStandardItem(loc.toString(loc.toFloat(query.value(14).toString()), 'f', 2));
					item->setTextAlignment(Qt::AlignRight);
				}
			}

			if ((i == 15))
			{
				if (loc.toFloat(query.value(14).toString()) > 0)
				{
					float tempVkupen = chc.getFakturaVkupno(query.value(1).toString());
					float tempPlateno = loc.toFloat(query.value(14).toString());
					float tempKusur = tempPlateno - tempVkupen;
					item = new QStandardItem(loc.toString(tempKusur, 'f', 2));
					item->setTextAlignment(Qt::AlignRight);
				}
				else
				{
					item = new QStandardItem("");
					item->setTextAlignment(Qt::AlignRight);
				}
			}
			if (i == 16)
			{
				QBrush newBrush;
				if (query.value(16).toString() == tr("фискална сметка"))
				{
					newBrush.setColor(Qt::darkGreen);
					item->setForeground(newBrush);
				} 
				else if(query.value(16).toString() == tr("отворена сметка"))
				{
					newBrush.setColor(Qt::black);
					item->setForeground(newBrush);
				}
				else if(query.value(16).toString() == tr("грешка -неиспечатена фискална сметка"))
				{
					newBrush.setColor(Qt::blue);
					item->setForeground(newBrush);
				}
				else if(query.value(16).toString() == tr("сторно фискална сметка"))
				{
					newBrush.setColor(Qt::red);
					item->setForeground(newBrush);
				}
			}

	         item->setEditable(false);
            
		ui.tableView->setRowHeight(row, 18);
            ui.tableView->setColumnWidth(i, colWidth[i]);
            item->setEditable(false);
            model->setItem(row, i, item);
        }
        row++;
    } 
	setUpdatesEnabled(true);
	QString info = tr("       Вкупен Износ : ") + loc.toString(mIznos,'f',2) + tr(" ден.") + 
		tr("       Вкупен ДДВ : ") + loc.toString(mDDV,'f',2) + tr(" ден.") +
		tr("       Вкупен Износ со ДДВ: ") + loc.toString(mVkupno,'f',2) + tr(" ден.") ;
	QString info2 = tr("       Платено : ") + loc.toString(mVPlateno,'f',2) + tr(" ден.") + 
		tr("       Останато за плаќање : ") + loc.toString(mVOstanato,'f',2) + tr(" ден.") ;

	ui.label_11->setText(info);

    QItemSelectionModel *sm = ui.tableView->selectionModel();
    connect(sm, SIGNAL(currentRowChanged(QModelIndex,QModelIndex)),
        this, SLOT(selectionChanged(QModelIndex,QModelIndex)));
    ui.tableView->show();
}
void QPorackiSmetkiLista::selectionChanged(QModelIndex modelX, QModelIndex modelY)
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
	m_idid = model->item(i, 0)->text();
	if (model->item(i, 16)->text() == tr("фискална сметка"))
	{
		m_statKorekcija = false;
		ui.pushButton_2->setEnabled(false); // koregiraj 
		ui.pushButton_3->setEnabled(false); // brisi smetka
		ui.pushButton_4->setEnabled(false); // pecati fiskalna
		ui.pushButton_5->setEnabled(true); // storniraj
	} 
	else if (model->item(i, 16)->text() == tr("отворена сметка"))
	{
		m_statKorekcija = true;
		ui.pushButton_2->setEnabled(true);
		ui.pushButton_3->setEnabled(true);
		ui.pushButton_4->setEnabled(false);
		ui.pushButton_5->setEnabled(false);
	}
	else if (model->item(i, 16)->text() == tr("грешка -неиспечатена фискална сметка"))
	{
		m_statKorekcija = false;
		ui.pushButton_2->setEnabled(false);
		ui.pushButton_3->setEnabled(false);
		ui.pushButton_4->setEnabled(true);
		ui.pushButton_5->setEnabled(false);
	}
	else if (model->item(i, 16)->text() == tr("сторно фискална сметка"))
	{
		m_statKorekcija = false;
		ui.pushButton_2->setEnabled(false);
		ui.pushButton_3->setEnabled(false);
		ui.pushButton_4->setEnabled(false);
		ui.pushButton_5->setEnabled(false);
	}

	lista_detail(m_selectedText);
}

void QPorackiSmetkiLista::lista_detail(const QString& nameSearch)
{
    QLocale loc;
    if (nameSearch.length() < 0)
    {
        ui.tableView_2->hide();
        return;
    }

    int r = 0;
    int c = 12;
    int fieldNo[12];
    QString country[12];
    int colWidth[] = {0, 50, 170, 70, 70, 70, 70, 100, 70, 100, 100, 100};
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
		"ikol * prod_cena * (1 - rabat/100) " //iznos
		"from magacin                                         "
        "left join artikli on magacin.artikal_id = artikli.id "
        "where magacin.dok_tip = 48 and magacin.dok_id=       ";
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

	ui.tableView_2->setModel(model2);
    header2 = new QHeaderView(Qt::Horizontal, this);
    header2->setSectionsClickable(true);
    ui.tableView_2->setHorizontalHeader(header2);
    header2->show();
    int row = 0;
    float sumaDDV = 0.f;
    
	artList.clear();
	while (query.next()) 
    {
        for (int i = 0; i < c; i++)
        {
            fieldNo[i] = i; //query.record().indexOf(colName[i]);
            QStandardItem *item = NULL;
            QString temp = query.value(fieldNo[i]).toString();
            if ((i > 4)||(i == 3))
            {
                item = new QStandardItem(loc.toString(temp.toDouble(), 'f', 2));
                item->setTextAlignment(Qt::AlignRight);
                if (i == 11)
                {
                    sumaDDV += temp.toFloat();
                }
            }
            else
            {
                item = new QStandardItem(temp);
                item->setTextAlignment(Qt::AlignLeft);
            }
            
            item->setEditable(false);
            ui.tableView_2->setRowHeight(row, 18);
            ui.tableView_2->setColumnWidth(i, colWidth[i]);
            model2->setItem(row, i, item);
        }
        row++;
		artList << query.value(2).toString() + "<>" + loc.toString(query.value(5).toFloat(), 'f', 2) + "<>" + 
			loc.toString(query.value(3).toFloat(), 'f', 3) + "<>" + query.value(0).toString();
    } 
    ui.lineEdit_6->setText(loc.toString(sumaDDV, 'f', 2));
    ui.tableView_2->show();
}

void QPorackiSmetkiLista::deleteDok(int idDok)
{
    QSqlQuery query;
    query.clear();
    query.prepare(
        "delete from magacin where dok_tip = 48 and dok_id = :a"
        );
    query.bindValue(":a", idDok);	
    query.exec();
}
void QPorackiSmetkiLista::on_pushButton_clicked()
{
    emit procF2();
}
void QPorackiSmetkiLista::on_pushButton_2_clicked()
{
	emit procF3();
}

QStringList QPorackiSmetkiLista::geInfo()
{
    QStringList info;
    info.clear();
    info << m_komintent_naziv << m_komintent_adresa << m_komintent_grad << m_fakturadatum << m_fakturaBr << m_rok;
    return info;
}

void QPorackiSmetkiLista::setInitText(QString text, QDateTime &date1, QDateTime &date2)
{
    //ui.tableView->setSelectionMode(QAbstractItemView::MultiSelection); 
	ui.label_4->setText(tr("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\np, li { white-space: pre-wrap; }\n</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#0000ff;\">Излезни Фактури - Листа</span></p></body></html>"));
	ui.tableView->setFocus();
	connect(ui.tableView, SIGNAL(clicked(QModelIndex)), this, SLOT(calcSelectedItems()));
	//ui.lineEdit_7->setText(text);
	lista(text + "%", date1, date2);
}

void QPorackiSmetkiLista::setInitTextSmetki(QString text, QDateTime &date1, QDateTime &date2)
{
	ui.tableView->setSelectionMode(QAbstractItemView::SingleSelection); 
	ui.label_4->setText(tr("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\np, li { white-space: pre-wrap; }\n</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#0000ff;\">Листа на Сметки </span></p></body></html>"));
	ui.tableView->setFocus();
	connect(ui.tableView, SIGNAL(clicked(QModelIndex)), this, SLOT(calcSelectedItems()));

//	ui.lineEdit_7->setText(text);
	lista(text + "%", date1, date2);
}

void QPorackiSmetkiLista::lineEdit7Pressed(const QString & text)
{
    lista(text + "%", QDateTime::currentDateTime(), QDateTime::currentDateTime());
}

void QPorackiSmetkiLista::calcSelectedItems()
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
		itemData += "48  ::  ";
		m_listDataInfo << itemData;

		int stop = 0;
	}
	
	QString info = tr("       Вкупен Неплатен Износ во селектираните фактури е : ") + loc.toString(mIznos,'f',2) + tr(" ден.");
	//ui.label_13->setText(info);
}

bool QPorackiSmetkiLista::isButtonChecked()
{
return ui.radioButton->isChecked();
}


void QPorackiSmetkiLista::on_pushButton_3_clicked()
{
	QMessageBox msgBox;
	msgBox.setText(tr("Бриши Отворена СМЕТКАТА !!!"));
	msgBox.setInformativeText(tr("Одбери OK за да потврдиш."));
	msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
	msgBox.setDefaultButton(QMessageBox::Ok);
	int ret = msgBox.exec();
	if (ret == QMessageBox::Ok)
	{
		QSqlQuery query1;
		query1.clear();
		query1.prepare("delete from dokumenti where dok_id=:aid and dok_tip = 48");
		query1.bindValue(":aid", m_selectedText);	
		query1.exec();
		QSqlError err = query1.lastError();
		query1.clear();
		query1.prepare("delete from magacin where dok_id=:aid and dok_tip = 48");
		query1.bindValue(":aid", m_selectedText);	
		query1.exec();
		err = query1.lastError();
		QMessageBox msgBox;
		msgBox.setText(tr("ОТВОРЕНАТА СМЕТКА\nЕ ИЗБРИШАНА  !!!"));
		msgBox.setInformativeText("");
		msgBox.setStandardButtons(QMessageBox::Ok);
		msgBox.setDefaultButton(QMessageBox::Ok);
		msgBox.exec();
		lista("%%%",QDateTime::currentDateTime(), QDateTime::currentDateTime());
	}
}
void QPorackiSmetkiLista::on_pushButton_4_clicked()
{
		//call fiscal printer
		QMessageBox msgBox;
		msgBox.setText(tr("Печати ФИСКАЛНА СМЕТКАТА !!!"));
		msgBox.setInformativeText(tr("Одбери OK за да потврдиш."));
		msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
		msgBox.setDefaultButton(QMessageBox::Ok);
		int ret = msgBox.exec();
		if (ret == QMessageBox::Ok)
		{
			CHelperClass chlp(this);
			int  statErr = (int)chlp.printFiscal(artList);
            QString errText =  QString::number(statErr);
			QString info5 = chlp.checkFiscal();
			if (!info5.contains("F"))
			{
				QSqlQuery query1;
				query1.clear();
				query1.prepare("update dokumenti set tip_dokument = :a1 where dok_id=:aid and dok_tip = 48");
				query1.bindValue(":a1", tr("фискална сметка"));	
				query1.bindValue(":aid", m_selectedText);	
				msgBox.setText(tr("ФИСКАЛНАТА СМЕТКА\nЕ ОТПЕЧАТЕНА  !!!"));
				msgBox.setInformativeText(info5);
				msgBox.setStandardButtons(QMessageBox::Cancel);
				msgBox.setDefaultButton(QMessageBox::Cancel);
				msgBox.exec();
				
				query1.exec();
				QSqlError err = query1.lastError();
				lista("%%%",QDateTime::currentDateTime(), QDateTime::currentDateTime());
			}
			else
			{
				msgBox.setText(tr("ФИСКАЛНАТА СМЕТКА\nНЕ Е ОТПЕЧАТЕНА  !!!"));
				msgBox.setInformativeText(info5);
				msgBox.setStandardButtons(QMessageBox::Cancel);
				msgBox.setDefaultButton(QMessageBox::Cancel);
				msgBox.exec();
			}
		}
}
void QPorackiSmetkiLista::on_pushButton_5_clicked()
{
	//call fiscal printer
	QMessageBox msgBox;
	msgBox.setText(tr("Печати СТОРНО ФИСКАЛНА СМЕТКАТА !!!"));
	msgBox.setInformativeText(tr("Одбери OK за да потврдиш."));
	msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
	msgBox.setDefaultButton(QMessageBox::Ok);
	int ret = msgBox.exec();
	if (ret == QMessageBox::Ok)
	{
		CHelperClass chlp(this);
		int  statErr = (int)chlp.printFiscalStorno(artList);
        QString errText =  QString::number(statErr);
		QString info5 = chlp.checkFiscal();
		if (!info5.contains("F"))
		{
			QSqlQuery query1;
			query1.clear();
			query1.prepare("update dokumenti set tip_dokument = :a1, dok_tip = 448 where dok_id=:aid and dok_tip = 48");
			query1.bindValue(":a1", tr("сторно фискална сметка"));	
			query1.bindValue(":aid", m_selectedText);	
			msgBox.setText(tr("СТОРНО ФИСКАЛНА СМЕТКА\nЕ ОТПЕЧАТЕНА  !!!"));
			msgBox.setInformativeText(info5);
			msgBox.setStandardButtons(QMessageBox::Cancel);
			msgBox.setDefaultButton(QMessageBox::Cancel);
			msgBox.exec();

			query1.exec();
			QSqlError err = query1.lastError();
			lista("%%%",QDateTime::currentDateTime(), QDateTime::currentDateTime());
		}
		else
		{
			msgBox.setText(tr("СТОРНО ФИСКАЛНАТА СМЕТКА\nНЕ Е ОТПЕЧАТЕНА  !!!"));
			msgBox.setInformativeText(info5);
			msgBox.setStandardButtons(QMessageBox::Cancel);
			msgBox.setDefaultButton(QMessageBox::Cancel);
			msgBox.exec();
		}
	}
}

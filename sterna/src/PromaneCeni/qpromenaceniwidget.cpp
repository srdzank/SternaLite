#include "qPromenaCeniwidget.h"
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlError>
#include <QScreen>
#include "chelperclass.h"
#include <QClipboard>

QPromenaCeniWidget::QPromenaCeniWidget(QWidget *parent)
	: QMyBaseFormWidget(parent)
    ,m_selectedText("") 
    ,m_selectedTextName("")
{
	ui.setupUi(this);
    QScreen *desk = QGuiApplication::primaryScreen();
    QRect deskRect = desk->geometry();  // Get screen geometry
	ui.layoutWidget->setFixedWidth(deskRect.width() - 250);
	ui.layoutWidget->setFixedHeight(deskRect.height()-200);
    ui.tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui.tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
	ui.tableView->setSortingEnabled(true);
	connect(ui.tableView->horizontalHeader(),SIGNAL(sectionClicked(int)), ui.tableView, SLOT(sortByColumn(int)));
    connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(copyToClipBoard()));
    lista("%");
}

QPromenaCeniWidget::~QPromenaCeniWidget()
{

}


void QPromenaCeniWidget::pressEscape()
{
    emit closeW();
}


void QPromenaCeniWidget::lista(const QString& nameSearch)
{
    QLocale loc;
    int r = 0;
    int c = 13;
    int fieldNo[13];
    QString country[13];
    int colWidth[] = {0, 80, 180, 80, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    QString colName[9] = {"id", "sifra", "artikal", "edm", "ncena", "pcena", "sum(vkol)", "sum(ikol)", "sum(vkol)-sum(ikol)"};

    QString temp = 

		"select artikal_id, artikli.sifra, artikli.artikal, artikli.edm , magacin.ikol, magacin.nab_cena, magacin.stara_prod_cena, magacin.prod_cena, 0,0, komintent_id, magacin.dok_id, magacin.dok_tip "
        "from magacin "
		"left join artikli on  magacin.artikal_id = artikli.id "
		"where (magacin.dok_tip between 40 and 49) and ( magacin.prod_cena <> magacin.stara_prod_cena) ";
		
	QSqlQuery query(temp);
    QSqlError err = query.lastError(); 
    model = new QStandardItemModel(r, c);
    model->setHeaderData( 0, Qt::Horizontal, tr("ID\n"));
    model->setHeaderData( 1, Qt::Horizontal, tr("Шифра\n"));
    model->setHeaderData( 2, Qt::Horizontal, tr("Артикал\n"));
    model->setHeaderData( 3, Qt::Horizontal, tr("Един.\nмера"));
	model->setHeaderData( 4, Qt::Horizontal, tr("Количина\n"));
	model->setHeaderData( 5, Qt::Horizontal, tr("Набавна Цена\nсо ДДВ"));
    model->setHeaderData( 6, Qt::Horizontal, tr("Стара продажна\nЦена со ДДВ"));
	model->setHeaderData( 7, Qt::Horizontal, tr("Нова продажна\nЦена со ДДВ"));
	model->setHeaderData( 8, Qt::Horizontal, tr("Задолжи\n"));
	model->setHeaderData( 9, Qt::Horizontal, tr("Одобри\n"));
	model->setHeaderData( 10, Qt::Horizontal, tr("Коминтент\n"));
	model->setHeaderData( 11, Qt::Horizontal, tr("Документ број\n"));
	model->setHeaderData( 12, Qt::Horizontal, tr("Тип Документ\n"));

	ui.tableView->setModel(model);
    header = new QHeaderView(Qt::Horizontal, this);
    header->setSectionsClickable(true);

    ui.tableView->setHorizontalHeader(header);
    header->show();
    int row = 0;

	float vkVlezKol = 0.f;
	float vkIzlezKol = 0.f;
	float vkSaldo = 0.f;
	float vkSaldoNab = 0.f;
	float vkTotalSaldoNab = 0.f;
	setUpdatesEnabled(false);
	CHelperClass chlp(this);
	chlp.createListProdCenaKalkulacijaMapAll();

//	float CHelperClass::getProdCenaFromKalkulacija(QString & item)
	float staraProdCena = 0.f;
    while (query.next()) 
    {
		if (query.value(7).toFloat() == query.value(6).toFloat())
		{
			continue;
		}
		for (int i = 0; i < c; i++)
        {
			QString temp = query.value(i).toString();
            QStandardItem *item = NULL; 

			if (i == 5)
			{
				QString keyT = query.value(0).toString() + "Key" + query.value(10).toString();
				vkIzlezKol = chlp.getNabCenaFromKalkulacija(keyT);
				temp = loc.toString(vkIzlezKol, 'f', 2);
				item = new QStandardItem(temp);
				item->setTextAlignment(Qt::AlignRight);
				item->setEditable(false);
				ui.tableView->setRowHeight(row, 18);
				ui.tableView->setColumnWidth(i, colWidth[i]);
				model->setItem(row, i, item);
			}
			else if (i == 6)
			{
				QString keyT = query.value(0).toString() + "Key" + query.value(10).toString();
				vkIzlezKol = chlp.getProdCenaFromKalkulacija(keyT);
				temp = loc.toString(vkIzlezKol, 'f', 2);
				item = new QStandardItem(temp);
				item->setTextAlignment(Qt::AlignRight);
				item->setEditable(false);
				ui.tableView->setRowHeight(row, 18);
				ui.tableView->setColumnWidth(i, colWidth[i]);
				model->setItem(row, i, item);
			}
			else if (i == 7)
			{
				float novaprodcena = loc.toFloat(temp);
				temp = loc.toString(novaprodcena, 'f', 2);
				item = new QStandardItem(temp);
				item->setTextAlignment(Qt::AlignRight);
				item->setEditable(false);
				ui.tableView->setRowHeight(row, 18);
				ui.tableView->setColumnWidth(i, colWidth[i]);
				model->setItem(row, i, item);
			}
			else if(i == 8)
			{
				if ((query.value(7).toFloat() - vkIzlezKol) > 0)
				{
					temp = loc.toString((query.value(7).toFloat() - vkIzlezKol), 'f', 2);
					item = new QStandardItem(temp);
					item->setTextAlignment(Qt::AlignRight);
					item->setEditable(false);
					ui.tableView->setRowHeight(row, 18);
					ui.tableView->setColumnWidth(i, colWidth[i]);
					model->setItem(row, i, item);
				}
				else
				{
					temp = loc.toString( .0f, 'f', 2);
					item = new QStandardItem(temp);
					item->setTextAlignment(Qt::AlignRight);
					item->setEditable(false);
					ui.tableView->setRowHeight(row, 18);
					ui.tableView->setColumnWidth(i, colWidth[i]);
					model->setItem(row, i, item);
				}
			}
			else if(i == 9)
			{
				if ((query.value(7).toFloat() - vkIzlezKol) < 0)
				{
					temp = loc.toString((vkIzlezKol - query.value(7).toFloat()), 'f', 2);
					item = new QStandardItem(temp);
					item->setTextAlignment(Qt::AlignRight);
					item->setEditable(false);
					ui.tableView->setRowHeight(row, 18);
					ui.tableView->setColumnWidth(i, colWidth[i]);
					model->setItem(row, i, item);
				}
				else
				{
					temp = loc.toString( .0f, 'f', 2);
					item = new QStandardItem(temp);
					item->setTextAlignment(Qt::AlignRight);
					item->setEditable(false);
					ui.tableView->setRowHeight(row, 18);
					ui.tableView->setColumnWidth(i, colWidth[i]);
					model->setItem(row, i, item);

				}

			}
			else if(i == 12)
			{
				switch(query.value(12).toInt())
				{
				case 40 : temp = tr("ФАКТУРА");break;
				case 48 : temp = tr("СМЕТКА");break;
				}
				item = new QStandardItem(temp);
				item->setTextAlignment(Qt::AlignLeft);
				item->setEditable(false);
				ui.tableView->setRowHeight(row, 18);
				ui.tableView->setColumnWidth(i, colWidth[i]);
				model->setItem(row, i, item);
			}

			else
			{
				item = new QStandardItem(temp);
				item->setTextAlignment(Qt::AlignRight);
				item->setEditable(false);
				ui.tableView->setRowHeight(row, 18);
				ui.tableView->setColumnWidth(i, colWidth[i]);
				model->setItem(row, i, item);
			}
        }
			row++;
    } 
	
	for (int ia = 0; ia < model->rowCount(); ia++)
	{
		m_selectedText = model->item(ia, 0) ? model->item(ia, 0)->text():"";
		float zad = loc.toFloat(model->item(ia, 8)->text());
		float odob = loc.toFloat(model->item(ia, 9)->text());
		if (zad == odob)
		{
			model->removeRows(ia, 1);
			ia--;
		}
	}
	
	setUpdatesEnabled(true);
	temp =  loc.toString(vkTotalSaldoNab ,'f', 2);
    QItemSelectionModel *sm = ui.tableView->selectionModel();
    connect(sm, SIGNAL(currentRowChanged(QModelIndex,QModelIndex)),
        this, SLOT(selectionChanged(QModelIndex,QModelIndex)));
    ui.tableView->show();
}

void QPromenaCeniWidget::on_lineEdit_textChanged(const QString &)
{
//	lista(ui.lineEdit->text());
}


void QPromenaCeniWidget::on_tableView_clicked(const QModelIndex &modelX)
{
	int i = modelX.row();
	m_selectedText = model->item(i, 0) ? model->item(i, 0)->text():"";
}

void QPromenaCeniWidget::setFocusSearchField()
{
//	ui.lineEdit->setFocus();
}


void QPromenaCeniWidget::pressReturn()
{

    if (ui.tableView->hasFocus())
	{
		emit sPromenaCeniToDokument(m_selectedText, m_selectedTextName, m_selectedTextNameSaldo, m_selectedKomintentId, m_selectedProdCena);	
	}

}

void QPromenaCeniWidget::setInitText(QString text)
{
// 	ui.lineEdit->setText(text);
// 	ui.lineEdit->selectAll();
// 	ui.lineEdit->setFocus();
}

void QPromenaCeniWidget::selectionChanged(QModelIndex modelX, QModelIndex modelY)
{
    int i = modelX.row();
    m_selectedText = model->item(i, 0) ? model->item(i, 0)->text():"";
    m_selectedTextName = model->item(i, 2) ? model->item(i, 2)->text():"";
    m_selectedTextNameSaldo = model->item(i, 6) ? model->item(i, 6)->text():"";
	m_selectedKomintentId = model->item(i, 10) ? model->item(i, 10)->text():"";
	m_selectedProdCena = model->item(i, 5) ? model->item(i, 5)->text():"";
}

void QPromenaCeniWidget::copyToClipBoard()
{
    QString m_copyedString = "";
    setUpdatesEnabled(false);	
    for(int c_row = 0; c_row < model->rowCount(); c_row++)
    {
        QStringList c;
        c.clear();
        for(int c_col = 0; c_col < model->columnCount(); c_col++)
        {
            QString temp = model->item(c_row,c_col)->text().trimmed();
            if(temp.contains('\n'))
            {
                int stop = 0;
            }
            c << temp;
        }
        m_copyedString = m_copyedString + c.join("\t");
        c.clear();
        m_copyedString = m_copyedString + "\n";
    }
    setUpdatesEnabled(true);
	QClipboard *clipboard = QApplication::clipboard();
    clipboard->setText(m_copyedString);
}

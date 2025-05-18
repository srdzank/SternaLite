#include "chelperclass.h"
#include "QSqlQuery"
#include "QSqlRecord"
#include "QVariant"
#include <QLocale>
#include <QRegularExpression>
#include <QDate>
#include <QDateTime>
#include "qt_windows.h"
#include "qwindowdefs_win.h"
#include <shellapi.h>
#include <QStringConverter>




CHelperClass::CHelperClass(QObject *parent)
    : QObject(parent)
	, m_vkupenPriliv(0.f)
	, m_vkupenOdliv(0.f)
{

}

CHelperClass::~CHelperClass()
{

}

bool CHelperClass::isKomintentExists(const QString &komName)
{
    bool stat = false;
    QString temp = "select id, naziv, adresa, tel, mobil, zirosmetka, edb, deponent, sifdejnost, mb, zabeleska1, zabeleska2, rabat, grad from komintenti where naziv like '%";
    temp += komName;
    temp += "%' ";
    QSqlQuery query(temp);
    while (query.next()) 
    {
        if (query.value(query.record().indexOf("naziv")).toString() == komName)
        {
            stat = true;
        }
    } 
    return stat;
}

bool CHelperClass::isKomintentExistsInStore(const QString &komID)
{
	bool stat = false;
	QString temp = "select id from magacin where komintent_id = ";
	temp += komID;
	temp += " ";
	QSqlQuery query(temp);
	while (query.next()) 
	{
		stat = true;
	} 
	return stat;
}

QString  CHelperClass::getKomintentName(QString m_id)
{
	QString prevoznikIme = "";
	QString temp = "select naziv from komintenti where id = ";
	temp += m_id;

	QSqlQuery query(temp);
	while (query.next()) 
	{
		prevoznikIme = query.value(0).toString();
	} 
	return prevoznikIme;
}

bool CHelperClass::isArtikliExists(const QString &artName)
{
    bool stat = false;
    QString temp = "select id, sifra, artikal, edm, ref, kataloski_broj, "
        "art_nabavna_cena, art_nabavna_cena_valuta,  "
        "art_prodazna_cena, art_prodazna_cena_valuta "
        " from artikli where artikal like '%";
    temp += artName;
    temp += "%' ";
    QSqlQuery query(temp);
    while (query.next()) 
    {
        if (query.value(query.record().indexOf("artikal")).toString() == artName)
        {
            stat = true;
        }
    } 
    return stat;
}

int CHelperClass::isSifraArtikalExists(QString mSifra)
{
	int res = 0;
	QString temp = "select sifra from artikli where sifra = '" + mSifra + "'";
	QSqlQuery query(temp);
	while (query.next()) 
	{
		res = 1;
	} 
	return res;
}

int CHelperClass::isSifraArtikalExistsInSTore(QString mSifra)
{
	int res = 0;
	QString temp = "select id from magacin where artikal_id = " + mSifra + " ";
	QSqlQuery query(temp);
	while (query.next()) 
	{
		res = 1;
	} 
	return res;
}

int CHelperClass::isSifraKomintentExists(QString mSifra)
{
	int res = 0;

	QString temp = "select sifra from komintenti where sifra = '" + mSifra + "'";
	QSqlQuery query(temp);
	while (query.next()) 
	{
		res = 1;
	} 
	return res;
}

int CHelperClass::genSifraArtikal()
{
	int maxArt = -1;
	QString temp = "select sifra from artikli ";
	QSqlQuery query(temp);
	while (query.next()) 
	{
		maxArt = maxArt > query.value(query.record().indexOf("sifra")).toInt() ? maxArt : query.value(query.record().indexOf("sifra")).toInt();
	} 
	return maxArt + 1;
}

bool CHelperClass::isBankExists(const QString &bankName)
{
    bool stat = false;
    QString temp = "select  BankIme from TBank where BankIme like '%";
    temp += bankName;
    temp += "%' ";
    QSqlQuery query(temp);
    while (query.next()) 
    {
        if (query.value(query.record().indexOf("BankIme")).toString() == bankName)
        {
            stat = true;
        }
    } 
    return stat;
}

bool CHelperClass::isFakturaExists(const QString& fakturaId, const QString& tip )
{
	bool stat = false;
	QString temp = "select  dok_id"
		" from dokumenti where dok_id = ";
	temp += fakturaId;
	temp += " and dok_tip = ";
    temp += tip;
    temp += "";

    QSqlQuery query(temp);
	while (query.next()) 
	{
		if (query.value(query.record().indexOf("dok_id")).toString() == fakturaId)
		{
			stat = true;
		}
	} 
	return stat;
}


void CHelperClass::fakturaStatus(QStandardItem *item,  const QString& tip)
{
	QString fakturaBroj = item->text();
	float vk_iznos = 0;
// 	getFakturaPlatenIznos(fakturaBroj, tip);
//     float vk_iznos = getFakturaVkupenIznos(fakturaBroj, tip);	
	bool okInt;
	m_plateno = 0;
	vk_iznos = 0;
	QMap<int, float>::iterator itPlateno = m_mapPlateno.find(fakturaBroj.toInt(&okInt, 10));
	if (itPlateno != m_mapPlateno.end()) 
	{
		m_plateno = itPlateno.value();
		m_plateno = floor(m_plateno + .5f);
	}

	QMap<int, float>::iterator itFakturirano = m_mapZadolzuvanje.find(fakturaBroj.toInt(&okInt, 10));
	if (itFakturirano != m_mapZadolzuvanje.end()) 
	{
		vk_iznos = itFakturirano.value();
		vk_iznos = floor(vk_iznos + .5f);
	}

	
	float razlika = vk_iznos - m_plateno;
    if (vk_iznos != 0 && abs(vk_iznos - m_plateno) < 0.1)
	{
		QIcon ic1(":/sterna/Resources/ok.png");
		item->setIcon(ic1);
        item->setToolTip(tr("Платена "));
	}
	else if ((m_plateno > 0) && ((vk_iznos - m_plateno) >= 0.1))
	{
		QIcon ic1(":/sterna/Resources/information.png");
		item->setIcon(ic1);
        item->setToolTip(tr("Делумно платена "));
	}
    else if ((m_plateno == 0) && (vk_iznos > 0))
    {
        QIcon ic1(":/sterna/Resources/stop.png");
        item->setIcon(ic1);
        item->setToolTip(tr("Неплатена "));
    }
    else if (vk_iznos <= 0)
    {
        QIcon ic1(":/sterna/Resources/error.png");
        item->setIcon(ic1);
        item->setToolTip(tr("Невалидна "));
    }
    else if (m_plateno > vk_iznos )
    {
        QIcon ic1(":/sterna/Resources/error.png");
        item->setIcon(ic1);
        item->setToolTip(tr("Невалидна "));
    }

}

void CHelperClass::getFakturaPlatenIznos(const QString& faktBroj, const QString& tip)
{
	QString temp = "select  sum(priliv), sum(odliv) "
		" from TStavka where Faktura_ID   = ";
	temp += faktBroj;
	temp += " and Izvod_Tip = ";
	temp += tip;
	temp += "";

	QSqlQuery query(temp);
	while (query.next()) 
	{
		m_vkupenPriliv = query.value(0).toFloat();
		m_vkupenOdliv = query.value(1).toFloat();
	}
    m_plateno = tip == "40" ? m_vkupenPriliv : m_vkupenOdliv;
}



float CHelperClass::getPlatenIznos()
{
    return m_plateno;
}

float CHelperClass::getFakturaVkupenIznos(const QString& faktBroj, const QString& tip)
{
    float vkupenIznos = 0.f;
    QString temp = ""; 
    if (tip != "21")
	{
		temp = " select sum((ikol*icena*(100-rabat)/100)*(1 + a.ddv/100))  ";
	}
	else
	{
		temp = " select sum((ikol*icena*(100-rabat)/100))  ";
	}

	temp += " from magacin m                                            "
    " left join artikli a on m.artikal_id = a.id                "
    " where dok_id = ";

    temp += faktBroj;
    temp += " and dok_tip = ";
    temp += tip;
    temp += "";

    QSqlQuery query(temp);
    while (query.next()) 
    {
        vkupenIznos = query.value(0).toFloat();
    }
    return vkupenIznos;
}


QString CHelperClass::getArtikalByID(QString text)
{
	int artikal_id = text.toInt();
	QSqlQuery query;
	query.prepare("select artikal from artikli where id = :id");
	query.bindValue(":id", artikal_id);	
	query.exec();
	query.next();
	return (query.value(0).toString());
}

float CHelperClass::getVkKol(const QString& artikal_ID, const QString& tip)
{
	float vkKolicina = 0.f;
	QString temp = "select  sum(ikol) "
		" from magacin where artikal_id   = ";
	temp += artikal_ID;
	temp += " and dok_tip = ";
	temp += tip;
	temp += "";

	QSqlQuery query(temp);
	while (query.next()) 
	{
		vkKolicina = query.value(0).toFloat();
	}
	return vkKolicina;
}


void CHelperClass::createSaldoProizvodiPrilivMapAll()
{
	m_mapPriliv.clear();
	QString art_id = "";
	QString komintent_id = "";
	QString keyT = "";
	float vkupenPrilivProizvod = 0.f;
	QString temp = 

		" SELECT magacin.artikal_id, magacin.komintent_id, SUM(ikol) "
		" FROM dokumenti "  
		" LEFT JOIN magacin ON (dokumenti.dok_id = magacin.dok_id and dokumenti.dok_tip = magacin.dok_tip ) "
		" WHERE (magacin.dok_tip between  20 and 29) "
		" GROUP BY magacin.artikal_id, magacin.komintent_id ";

	QSqlQuery query(temp);
	while (query.next()) 
	{
		art_id = query.value(0).toString();
		komintent_id = query.value(1).toString();
		keyT = art_id + "Key" + komintent_id;
		vkupenPrilivProizvod = query.value(2).toFloat();
		m_mapPriliv.insert(keyT, rouded(vkupenPrilivProizvod));	
	}
}
void CHelperClass::createSaldoProizvodiPrilivMapAllbezKomintent()
{
	m_mapPriliv.clear();
	QString art_id = "";
	QString komintent_id = "";
	QString keyT = "";
	float vkupenPrilivProizvod = 0.f;
	QString temp = 

		" SELECT magacin.artikal_id, SUM(ikol) "
		" FROM dokumenti "  
		" LEFT JOIN magacin ON (dokumenti.dok_id = magacin.dok_id and dokumenti.dok_tip = magacin.dok_tip ) "
		" WHERE (magacin.dok_tip between  20 and 29) "
		" GROUP BY magacin.artikal_id ";

	QSqlQuery query(temp);
	while (query.next()) 
	{
		art_id = query.value(0).toString();
		keyT = art_id + "Key" ;
		vkupenPrilivProizvod = query.value(1).toFloat();
		m_mapPriliv.insert(keyT, rouded(vkupenPrilivProizvod));	
	}
}

void CHelperClass::createSaldoArtikliOdlivMapAll()
{
	m_mapOdliv.clear();
	QString art_id = "";
	QString komintent_id = "";
	QString keyT = "";
	float vkupenOdlivArtikal = 0.f;
	QString temp = 
		" SELECT magacin.artikal_id,magacin.komintent_id, SUM(ikol) "
		" FROM dokumenti "  
		" LEFT JOIN magacin ON (dokumenti.dok_id = magacin.dok_id and dokumenti.dok_tip = magacin.dok_tip) "
		" WHERE (magacin.dok_tip between 41 and 60 and dokumenti.dok_status = 0) "
		" GROUP BY magacin.artikal_id, magacin.komintent_id ";
	QSqlQuery query(temp);
	while (query.next()) 
	{
		art_id = query.value(0).toString();
		komintent_id = query.value(1).toString();
		keyT = art_id + "Key" + komintent_id;
		vkupenOdlivArtikal = query.value(2).toFloat();
		m_mapOdliv.insert(keyT, rouded(vkupenOdlivArtikal));	
	}
}
void CHelperClass::createSaldoArtikliOdlivMapAll_bezKomintent()
{
	m_mapOdliv.clear();
	QString art_id = "";
	QString komintent_id = "";
	QString keyT = "";
	float vkupenOdlivArtikal = 0.f;
	QString temp = 
		" SELECT magacin.artikal_id, SUM(ikol) "
		" FROM dokumenti "  
		" LEFT JOIN magacin ON (dokumenti.dok_id = magacin.dok_id and dokumenti.dok_tip = magacin.dok_tip) "
		" WHERE (magacin.dok_tip between 40 and 49) "
		" GROUP BY magacin.artikal_id ";
	QSqlQuery query(temp);
	while (query.next()) 
	{
		art_id = query.value(0).toString();
		keyT = art_id + "Key" ;
		vkupenOdlivArtikal = query.value(1).toFloat();
		m_mapOdliv.insert(keyT, rouded(vkupenOdlivArtikal));	
	}
}

void CHelperClass::createSaldoProizvodiPrilivMapAll(QString date1, QString date2)
{
	m_mapPriliv.clear();
	QString art_id = "";
	QString komintent_id = "";
	QString keyT = "";
	float vkupenPrilivProizvod = 0.f;
	QString temp = 

		" SELECT magacin.artikal_id, SUM(ikol) "
		" FROM dokumenti "  
		" LEFT JOIN magacin ON (dokumenti.dok_id = magacin.dok_id and dokumenti.dok_tip = magacin.dok_tip ) "
		" WHERE (magacin.dok_tip between  20 and 29) and dokumenti.datum between #"+date1+"# and #"+date2+"# "
		" GROUP BY magacin.artikal_id ";

	QSqlQuery query(temp);
	while (query.next()) 
	{
		art_id = query.value(0).toString();
		vkupenPrilivProizvod = query.value(1).toFloat();
		m_mapPriliv.insert(art_id, vkupenPrilivProizvod);	
	}
}

void CHelperClass::createSaldoArtikliOdlivMapAll(QString date1, QString date2)
{
	m_mapOdliv.clear();
	QString art_id = "";
	float vkupenOdlivArtikal = 0.f;
	QString temp = 
		" SELECT magacin.artikal_id, SUM(ikol) "
		" FROM dokumenti "  
		" LEFT JOIN magacin ON (dokumenti.dok_id = magacin.dok_id and dokumenti.dok_tip = magacin.dok_tip) "
		" WHERE (magacin.dok_tip between 40 and 49) and dokumenti.datum between #"+date1+"# and #"+date2+"# "
		" GROUP BY magacin.artikal_id ";
	QSqlQuery query(temp);
	while (query.next()) 
	{
		art_id = query.value(0).toString();
		vkupenOdlivArtikal = query.value(1).toFloat();
		m_mapOdliv.insert(art_id, vkupenOdlivArtikal);	
	}
}



float CHelperClass::getLagerListaAll(const QString & item,  const QString& tip)
{
	QString artikalBroj = item;
	float result = 0.f;
	float priliv = 0.f;
	float odliv = 0.f;

	if (tip == "PRILIV")
	{
		QMap<QString, float>::iterator itPriliv = m_mapPriliv.find(artikalBroj);
		if (itPriliv != m_mapPriliv.end()) 
		{
			priliv = itPriliv.value();
		}
		result = priliv;
	} 

	else if(tip == "ODLIV")
	{
		QMap<QString, float>::iterator itOdliv = m_mapOdliv.find(artikalBroj);
		if (itOdliv != m_mapOdliv.end()) 
		{
			odliv = itOdliv.value();
		}
		result = odliv;
	}
	return result;
}


float CHelperClass::getVkKolBetween(const QString& artikal_ID, const QString& tip, const QString& tip1)
{
	float vkKolicina = 0.f;
	QString temp = "select  sum(ikol) "
		" from magacin where artikal_id   = ";
	temp += artikal_ID;
	temp += " and dok_tip between ";
	temp += tip;
	temp += " and ";
	temp += tip1;

	QSqlQuery query(temp);
	while (query.next()) 
	{
		vkKolicina = query.value(0).toFloat();
	}
	return vkKolicina;
}


float CHelperClass::getVkKolByDate(const QString& artikal_ID, const QString& tip, const QDate& mDate, const QDate& mDate2)
{
	float vkKolicina = 0.f;
	QString temp = "";
	QString temp_tip = "";
	if (tip == "20")
	{
		temp = " select sum(ikol) from dokumenti "
			" left join magacin "
			" on dokumenti.dok_tip = magacin.dok_tip and "
			" dokumenti.dok_id = magacin.dok_id "
			" where dokumenti.dok_tip between 20 and 21 "
			" and artikal_id = " + artikal_ID +
			" and datum between #" + mDate.toString("yyyy/MM/dd") + "# and #" +  mDate2.toString("yyyy/MM/dd") + "#";
	}
	else
	{
		temp = " select sum(ikol) from dokumenti "
			" left join magacin "
			" on dokumenti.dok_tip = magacin.dok_tip and "
			" dokumenti.dok_id = magacin.dok_id "
			" where dokumenti.dok_tip between 40 and 45 "
			" and artikal_id = " + artikal_ID +
			" and datum between #" + mDate.toString("yyyy/MM/dd") + "# and #" +  mDate2.toString("yyyy/MM/dd") + "#";
	}
	
	QSqlQuery query(temp);
	while (query.next()) 
	{
		vkKolicina = query.value(0).toFloat();
	}
	return vkKolicina;
}

void CHelperClass::createZadolzuvanjeMap(const QString& tip)
{
	m_mapZadolzuvanje.clear();
	int fakt_id = 0;
	float vkupenIznos = 0.f;

	QString temp = ""; 
	if (tip == "20")
	{
		temp = " select dok_id, sum((ikol*nab_cena*(100-rabat)/100))  ";
	}
	else if (tip == "25")
	{
		temp = "  select dok_id, sum((ikol*prod_cena*(100-rabat)/100))  ";
	}
	else if (tip == "40")
	{
		temp = " select dok_id, sum((ikol*prod_cena*(100-rabat)/100))  ";
	}

	temp += " from magacin m                                            "
	" left join artikli a on m.artikal_id = a.id "
	" where dok_tip = " + tip +
	" group by dok_id, dok_tip    ";

	QSqlQuery query(temp);
	while (query.next()) 
	{
		fakt_id = query.value(0).toInt();
		vkupenIznos = rouded(query.value(1).toFloat());
		m_mapZadolzuvanje.insert(fakt_id, vkupenIznos);
	}
}

void CHelperClass::createPlatenoMap(const QString& tip)
{
	m_mapPlateno.clear();
	int fakt_id = 0;
	float vkupenPriliv = 0.f;
	float vkupenOdliv = 0.f;

	QString temp = 

	" select Dok_Id, sum(IznosPlaten) "
		" from Izvod_Plakanje "
		" where Dok_Tip = "+ tip +
		" group by Dok_Tip, Dok_Id ";


	QSqlQuery query(temp);
	while (query.next()) 
	{
		fakt_id = query.value(0).toInt();
		vkupenPriliv = rouded(query.value(1).toFloat());
		vkupenOdliv = rouded(query.value(1).toFloat());
		if (tip == "40")
		{
			m_mapPlateno.insert(fakt_id, vkupenPriliv);
		} 
		else if (tip == "20")
		{
			m_mapPlateno.insert(fakt_id, vkupenOdliv);
		}
		else if (tip == "25")
		{
			m_mapPlateno.insert(fakt_id, vkupenOdliv);
		}
	}
}

void CHelperClass::createStatusMap(const QString& tip)
{
	createPlatenoMap(tip);
	createZadolzuvanjeMap(tip);
}

void CHelperClass::createListaIzlezniFakturiIznosi(const QString &tip)
{
    m_mapFakturi.clear();
    QString dok_id = "";
    fakturiData dataFakt;

    QString temp = "";
	if (tip == "20")
	{
		temp =
			" select magacin.dok_tip, magacin.dok_id, "
			" sum(ikol * nab_cena * (1-rabat / 100)), "
			" sum(ikol * nab_cena * (1-rabat/100) - ikol * nab_cena * (1 - rabat/100)) "
			" from magacin "
			" left join artikli  on magacin.artikal_id = artikli.id "
			" group by magacin.dok_tip, magacin.dok_id "
			" having magacin.dok_tip = " + tip +" ";
	}
	else if (tip == "40")
	{
		temp =
			" select magacin.dok_tip, magacin.dok_id, "
			" sum(ikol * prod_cena * (1-rabat / 100) / (1 + artikli.ddv / 100)), "
			" sum(ikol * prod_cena * (1-rabat/100) - ikol * prod_cena * (1 - rabat/100) /(1 + artikli.ddv/100)) "
			" from magacin "
			" left join artikli  on magacin.artikal_id = artikli.id "
			" group by magacin.dok_tip, magacin.dok_id "
			" having magacin.dok_tip = " + tip +" ";
	}
	else if (tip == "48")
	{
		temp =
			" select magacin.dok_tip, magacin.dok_id, "
			" sum(ikol * prod_cena * (1-rabat / 100) / (1 + artikli.ddv / 100)), "
			" sum(ikol * prod_cena * (1-rabat/100) - ikol * prod_cena * (1 - rabat/100) /(1 + artikli.ddv/100)) "
			" from magacin "
			" left join artikli  on magacin.artikal_id = artikli.id "
			" group by magacin.dok_tip, magacin.dok_id "
			" having magacin.dok_tip = " + tip +" ";
	}
	else if (tip == "150")
	{
		temp =
			" select magacin.dok_tip, magacin.dok_id, "
			" sum(ikol * prod_cena * (1-rabat / 100) / (1 + artikli.ddv / 100)), "
			" sum(ikol * prod_cena * (1-rabat/100) - ikol * prod_cena * (1 - rabat/100) /(1 + artikli.ddv/100)) "
			" from magacin "
			" left join artikli  on magacin.artikal_id = artikli.id "
			" group by magacin.dok_tip, magacin.dok_id "
			" having magacin.dok_tip = " + tip +" ";
	}
	else if (tip == "60")
	{
		temp =
			" select magacin.dok_tip, magacin.dok_id, "
			" sum(ikol * prod_cena * (1-rabat / 100) / (1 + artikli.ddv / 100)), "
			" sum(ikol * prod_cena * (1-rabat/100) - ikol * prod_cena * (1 - rabat/100) /(1 + artikli.ddv/100)) "
			" from magacin "
			" left join artikli  on magacin.artikal_id = artikli.id "
			" group by magacin.dok_tip, magacin.dok_id "
			" having magacin.dok_tip = " + tip +" ";
	}
	else if (tip == "25")
	{
		temp =
			" select magacin.dok_tip, magacin.dok_id, "
			" sum(ikol * prod_cena * (1-rabat / 100) / (1 + artikli.ddv / 100)), "
			" sum(ikol * prod_cena * (1-rabat/100) - ikol * prod_cena * (1 - rabat/100) /(1 + artikli.ddv/100)) "
			" from magacin "
			" left join artikli  on magacin.artikal_id = artikli.id "
			" group by magacin.dok_tip, magacin.dok_id "
			" having magacin.dok_tip = " + tip +" ";
	}
	else if (tip == "80")
	{
		temp =
			" select magacin.dok_tip, magacin.dok_id, "
			" sum(ikol * prod_cena * (1-rabat / 100) / (1 + artikli.ddv / 100)), "
			" sum(ikol * prod_cena * (1-rabat/100) - ikol * prod_cena * (1 - rabat/100) /(1 + artikli.ddv/100)) "
			" from magacin "
			" left join artikli  on magacin.artikal_id = artikli.id "
			" group by magacin.dok_tip, magacin.dok_id "
			" having magacin.dok_tip = " + tip +" ";
	}

    QSqlQuery query(temp);
    while (query.next()) 
    {
        dok_id = query.value(1).toString();
        dataFakt.iznos = query.value(2).toFloat();
        dataFakt.ddv = query.value(3).toFloat();
        dataFakt.vkupno = (dataFakt.iznos + dataFakt.ddv);
		m_mapFakturi.insert(dok_id, dataFakt);
    }

}

void CHelperClass::createPovratnicaFakturiIznosi()
{
	m_mapPovratnici.clear();
	QString dok_id = "";
	fakturiData dataFakt;

	QString temp = 
		" select  IzleznaFakturaBroj, sum(IznosVraten) "
		" from povratniciPlakanje "
		" group by IzleznaFakturaBroj ";
	QSqlQuery query(temp);
	while (query.next()) 
	{
		dok_id = query.value(0).toString();
		dataFakt.vkupno = query.value(1).toFloat();
		dataFakt.iznos = 0;
		dataFakt.ddv = 0;
		m_mapPovratnici.insert(dok_id, dataFakt);
	}
}

QString CHelperClass::getFakturaBrojOdPovratnica(QString povratnica_id)
{
	QString fakt_br = "-1";
	QString temp = 
		" select  IzleznaFakturaBroj "
		" from povratniciPlakanje "
		" where Dok_ID ="+povratnica_id;
	QSqlQuery query(temp);
	while (query.next()) 
	{
		fakt_br = query.value(0).toString();
	}
	return fakt_br;
}

QStringList CHelperClass::getVraboteniInfo(const QString& u, const QString& p)
{
	QStringList info;
	QString fakt_br = "";
	QString temp = 
		" select id,korisnicko_ime, pasword, ime, prezime, adresa, grad, tel, uloga, user_id "
		" from vraboteni "
		" where korisnicko_ime ='"+u+"' and pasword = '"+p+"'";
	QSqlQuery query(temp);
	while (query.next()) 
	{
		info << query.value(0).toString() 
			<< query.value(1).toString() 
			<< query.value(2).toString() 
			<< query.value(3).toString() 
			<< query.value(4).toString() 
			<< query.value(5).toString() 
			<< query.value(6).toString() 
			<< query.value(7).toString() 
			<< query.value(8).toString() 
			<< query.value(9).toString() 
			;
	}
	return info;
}

float CHelperClass::getIznosOdPovratnica(QString povratnica_id, QString faktura_br )
{
	float iznos = 0.f;
	QString temp = 
		" select  IznosVraten "
		" from povratniciPlakanje "
		" where Dok_ID ="+povratnica_id + " and IzleznaFakturaBroj = '" + faktura_br+"'";
	QSqlQuery query(temp);
	while (query.next()) 
	{
		iznos = query.value(0).toFloat();
	}
	return iznos;
}


float CHelperClass::getPovratnicaFakturaVkupno(const QString& dok_id )
{
	float vkupno = 0.0f;
	QMap <QString, fakturiData>::iterator it = m_mapPovratnici.find(dok_id);
	if (it != m_mapPovratnici.end()) 
	{
		vkupno = it.value().vkupno;
	}
	return vkupno;
}

void CHelperClass::createListaKomintenti(const QString &tip)
{
    m_mapKomintentDetailInfo.clear();
    QString dok_id = "";

    QString temp = 
        "select distinct komintenti.naziv, komintenti.adresa, komintenti.tel, komintenti.mobil, komintenti.zirosmetka, komintenti.edb, komintenti.grad "
        "from dokumenti "
        "left join komintenti on dokumenti.komintent_id = komintenti.id "
        "where dok_tip = "+ tip +"  ";
    QSqlQuery query(temp);
    while (query.next()) 
    {
        dok_id = query.value(0).toString();
        QString temp = tr("      Назив : ")+query.value(0).toString()+"<br>"+
                       tr("     Адреса : ")+query.value(1).toString()+"<br>"+
                       tr("        Тел : ")+query.value(2).toString()+"<br>"+
                       tr("    Мобилен : ")+query.value(3).toString()+"<br>"+
                       tr("Жиро сметка : ")+query.value(4).toString()+"<br>"+
                       tr("        ЕДБ : ")+query.value(5).toString()+"<br>"+
                       tr("       Град : ")+query.value(6).toString();

        m_mapKomintentDetailInfo.insert(dok_id, temp);
    }
}


double CHelperClass::rouded(double num)
{ 
	int n = 4;
	// round 2 decimal
	return floor(num * pow(10., n) + .5) / pow(10., n);
}


void CHelperClass::createArtikliMap()
{
    m_mapArtikli.clear();
    QString artikal_id = "";
    QString artikal_naziv = "";

    QString temp = 
        " select id, artikal from artikli ";

    QSqlQuery query(temp);
    while (query.next()) 
    {
        artikal_id = query.value(0).toString();
        artikal_naziv = query.value(1).toString();
        m_mapArtikli.insert(artikal_id, artikal_naziv);
    }
}

void CHelperClass::createKomintentiMap()
{
    m_mapKomintenti.clear();
    QString komintenti_id = "";
    QString komintenti_naziv = "";

    QString temp = 
        " select id, naziv from komintenti ";

    QSqlQuery query(temp);
    while (query.next()) 
    {
        komintenti_id = query.value(0).toString();
        komintenti_naziv = query.value(1).toString();
        m_mapKomintenti.insert(komintenti_id, komintenti_naziv);
    }
}


QString CHelperClass::getArtikalNameByID(const QString& id)
{
    QString artikalName = "";
    QMap<QString, QString>::iterator itArtikal = m_mapArtikli.find(id);
    if (itArtikal != m_mapArtikli.end()) 
    {
        artikalName = itArtikal.value();
    }
    return artikalName;
}

QString CHelperClass::getKomintentNameByID(const QString& id)
{
    QString komintentName = "";
    QMap<QString, QString>::iterator itKomintent = m_mapKomintenti.find(id);
    if (itKomintent != m_mapKomintenti.end()) 
    {
        komintentName = itKomintent.value();
    }
    return komintentName;
}


void CHelperClass::createSifraMap()
{
    m_mapSifri.clear();
    QString artikal_id = "";
    QString artikal_sifra = "";

    QString temp = 
        " select id, sifra from artikli ";

    QSqlQuery query(temp);
    while (query.next()) 
    {
        artikal_id = query.value(0).toString();
        artikal_sifra = query.value(1).toString();
        m_mapSifri.insert(artikal_id, artikal_sifra);
    }
}


QString CHelperClass::getSifraNameByID(const QString& id)
{
    QString sifraName = "";
    QMap<QString, QString>::iterator itSifra = m_mapSifri.find(id);
    if (itSifra != m_mapSifri.end()) 
    {
        sifraName = itSifra.value();
    }
    return sifraName;
}


float CHelperClass::getFakturaIznos(const QString& dok_id )
{
    float iznos = 0.0f;
    QMap <QString, fakturiData>::iterator it = m_mapFakturi.find(dok_id);
    if (it != m_mapFakturi.end()) 
    {
        iznos = it.value().iznos;
    }
    return iznos;
}

float CHelperClass::getFakturaDDV(const QString& dok_id )
{
    float ddv = 0.0f;
    QMap <QString, fakturiData>::iterator it = m_mapFakturi.find(dok_id);
    if (it != m_mapFakturi.end()) 
    {
        ddv = it.value().ddv;
    }
    return ddv;
}

float CHelperClass::getFakturaVkupno(const QString& dok_id )
{
    float vkupno = 0.0f;
    QMap <QString, fakturiData>::iterator it = m_mapFakturi.find(dok_id);
    if (it != m_mapFakturi.end()) 
    {
        vkupno = it.value().vkupno;
    }
    return vkupno;
}

QString CHelperClass::getKomintentDetail(const QString& dok_id )
{
    QString info = "";
    QMap <QString, QString>::iterator it = m_mapKomintentDetailInfo.find(dok_id);
    if (it != m_mapKomintentDetailInfo.end()) 
    {
        info = it.value();
    }
    return info;
}


void CHelperClass::getFakturaIznosiAll(const QString& tip)
{
	mapIznosi.clear();
	QString temp = 

		" select Dok_Id, sum(IznosPlaten) "
		" from Izvod_Plakanje "
		" where Dok_Tip = "+ tip +
		" group by Dok_Tip, Dok_Id ";

	QSqlQuery query(temp);
	while (query.next()) 
	{
		QString m_fakturiId = query.value(0).toString();
		float m_vkupenPriliv = query.value(1).toFloat();
		float m_vkupenOdliv = query.value(1).toFloat();

		tdataInfo temp;
		temp.priliv = m_vkupenPriliv;
		temp.odliv = m_vkupenOdliv;
		mapIznosi.insert(m_fakturiId, temp);
	}
}

float CHelperClass::getFakturaPrilivIznos(const QString& dok_id )
{
	float iznos = 0.0f;
	QMap <QString, tdataInfo>::iterator it = mapIznosi.find(dok_id);
	if (it != mapIznosi.end()) 
	{
		iznos = it.value().priliv;
	}
	return iznos;
}

float CHelperClass::getFakturaOdlivIznos(const QString& dok_id )
{
	float iznos = 0.0f;
	QMap <QString, tdataInfo>::iterator it = mapIznosi.find(dok_id);
	if (it != mapIznosi.end()) 
	{
		iznos = it.value().odliv;
	}
	return iznos;
}

bool CHelperClass::isIzvodExists(const QString &bankaId, const QString &izvodId)
{
	bool stat = false;
	QString temp = " select IzvodBr from Izvodi where BankaId  = " + bankaId + " and IzvodBr =" + izvodId;
	QSqlQuery query(temp);
	while (query.next()) 
	{
		if (query.value(query.record().indexOf("IzvodBr")).toString() == izvodId)
		{
			stat = true;
		}
	} 
	return stat;
}

QString CHelperClass::GetRandomString()
{
	QString randomString;
	QDateTime currentDateTime = QDateTime::currentDateTime();
	quint64 tt = currentDateTime.toMSecsSinceEpoch();
	randomString = QString::number(tt);
	return randomString;
}


QString CHelperClass::getPlatenIznosZaFaktura(const QString& tip, const QString &faktBr)
{
	QString resA;
	QString temp = 
		" select Dok_Tip, Dok_Id, sum(IznosPlaten) "
		" from Izvod_Plakanje "
		" where Dok_Tip = "+ tip +" and Dok_Id = " + faktBr +
		" group by Dok_Tip, Dok_Id ";
	QSqlQuery query(temp);
	while (query.next()) 
	{
		resA = query.value(2).toString();
	}
	return resA;
}

QString CHelperClass::getVrabotenNextID()
{
	QString user_br = "";
	QString temp = 
		" select max (user_id) +1 as nextID "
		" from vraboteni "
		" where user_id < 9000";
	QSqlQuery query(temp);
	while (query.next()) 
	{
		 user_br =  query.value(0).toString() ;
	}
	return user_br;
}

int CHelperClass::calcMaxIdTblKalkulacii()
{
	int m_id = -1;
	QString temp = "select max(dok_id) from dokumenti where dok_tip = 20 ";
	QSqlQuery query(temp);
	QString country1 = "";
	int fieldNo = query.record().indexOf("max(dok_id)");
	while (query.next()) 
	{
		m_id = query.value(0).toInt() + 1;
	}
	return m_id;
}

int CHelperClass::calcMaxIdTblKalkulaciiStavki()
{
	int m_id = -1;
	QString temp = "select max(dok_id) from magacin where dok_tip = 20 ";
	QSqlQuery query(temp);
	QString country1 = "";
	int fieldNo = query.record().indexOf("max(dok_id)");
	while (query.next()) 
	{
		m_id = query.value(0).toInt() + 1;
	}
	return m_id;
}


void CHelperClass::calcPrilivOdlivPoKomintent()
{
	QString d_dok_tip;
	QString mKey;
	QString d_komintent_id;
	float d_iznos = 0.f;

	QString temp = 
		" select d.dok_tip,d.komintent_id, sum(ikol*prod_cena*(1-m.rabat/100)), sum(ikol*nab_cena*(1-m.rabat/100)) "
		" from dokumenti d "
		" left join magacin m on d.dok_id=m.dok_id and d.dok_tip=m.dok_tip "
		" group by d.dok_tip,d.komintent_id ";	
	QSqlQuery query(temp);

	while (query.next()) 
	{
		d_dok_tip = query.value(0).toString();
		d_komintent_id = query.value(1).toString();
		mKey = d_komintent_id + "Key" + d_dok_tip;
		if (d_dok_tip == "20")
		{
			d_iznos = query.value(3).toFloat();
			m_mapPrilivOdlivPoKomintent.insert(mKey, d_iznos);
		} 
		else if(d_dok_tip == "25")
		{
			d_iznos = query.value(2).toFloat();
			m_mapPrilivOdlivPoKomintent.insert(mKey, d_iznos);
		}
		else if(d_dok_tip == "40")
		{
			d_iznos = query.value(2).toFloat();
			m_mapPrilivOdlivPoKomintent.insert(mKey, d_iznos);
		}
	}
	QString temp1 = 
		" select d.dok_tip,d.komintent_id,faktura_ispratnica,sum(ikol*prod_cena*(1-m.rabat/100)), sum(ikol*nab_cena*(1-m.rabat/100)) "
		" from dokumenti d "
		" left join magacin m on d.dok_id=m.dok_id and d.dok_tip=m.dok_tip "
		" group by d.dok_tip,d.komintent_id, faktura_ispratnica "
		" having d.dok_tip = 60 and faktura_ispratnica = 0";
	QSqlQuery query1(temp1);

	while (query1.next()) 
	{
		d_dok_tip = query1.value(0).toString();
		d_komintent_id = query1.value(1).toString();
		mKey = d_komintent_id + "Key" + d_dok_tip;

		if(d_dok_tip == "60")
		{
			d_iznos = query1.value(3).toFloat();
			m_mapPrilivOdlivPoKomintent.insert(mKey, d_iznos);
		}
	}
}

float CHelperClass::getPrilivOdlivPoKomintent(const QString& komintent_id, const QString& dok_tip )
{
	float vkupno = 0.f;
	QString mKey = komintent_id + "Key" + dok_tip;
	QMap <QString, float>::iterator it = m_mapPrilivOdlivPoKomintent.find(mKey);
	if (it != m_mapPrilivOdlivPoKomintent.end()) 
	{
		vkupno = it.value();
	}
	return vkupno;
}


void CHelperClass::calcPlakanjaPoKomintent()
{
	QString d_dok_tip;
	QString mKey;
	QString d_komintent_id;
	float d_iznos = 0.f;

	QString temp = 
    " select komintentbr, sum(priliv), sum(odliv)  "
	" from izvod_stavki "
	" group by komintentbr ";
	QSqlQuery query(temp);

	while (query.next()) 
	{

		d_dok_tip = "40";
		d_komintent_id = query.value(0).toString();
		mKey = d_komintent_id + "Key" + d_dok_tip;
		d_iznos = query.value(1).toFloat();
		m_mapPlakanjePoKomintent.insert(mKey, d_iznos);

		d_dok_tip = "20";
		d_komintent_id = query.value(0).toString();
		mKey = d_komintent_id + "Key" + d_dok_tip;
		d_iznos = query.value(2).toFloat();
		m_mapPlakanjePoKomintent.insert(mKey, d_iznos);
	}
}

float CHelperClass::getPlakanjePoKomintent(const QString& komintent_id, const QString& dok_tip )
{
	float vkupno = 0.f;
	QString mKey = komintent_id + "Key" + dok_tip;
	QMap <QString, float>::iterator it = m_mapPlakanjePoKomintent.find(mKey);
	if (it != m_mapPlakanjePoKomintent.end()) 
	{
		vkupno = it.value();
	}
	return vkupno;
}

void CHelperClass::createMapPriemnici()
{
	m_mapPriemnici.clear();
	QString priemnica_id;


	QString temp = 
		" select dok_id, faktura_br, tip_dokument, datum_f_ra "
		" from dokumenti "
	    " where dok_tip = 20 ";

	QSqlQuery query(temp);
	while (query.next()) 
	{
		priemnica_id = query.value(0).toString();
		tpriemniciData itemTemp;
		itemTemp.dokument_id = query.value(1).toString();
		itemTemp.dokument_tip = query.value(2).toString();
		itemTemp.dokument_datum = query.value(3).toString();
		m_mapPriemnici.insert(priemnica_id, itemTemp);
	}
}

QString CHelperClass::getFakturaFromPriemnica(const QString& priemnica_id)
{
	QString Faktura_Id = "";
	QMap<QString, tpriemniciData>::iterator itA = m_mapPriemnici.find(priemnica_id);
	if (itA != m_mapPriemnici.end()) 
	{
		Faktura_Id = itA->dokument_id;
	}
	return Faktura_Id;
}
QString CHelperClass::getTipDokumentFromPriemnica(const QString& priemnica_id)
{
	QString Dokument_tip = "";
	QMap<QString, tpriemniciData>::iterator itA = m_mapPriemnici.find(priemnica_id);
	if (itA != m_mapPriemnici.end()) 
	{
		Dokument_tip = itA->dokument_tip;
	}
	return Dokument_tip;
}

void CHelperClass::createMapNefakturiraniIspratnici()
{
	m_mapNefakIspratnici.clear();
	int ispratnica_id = 0;


	QString temp = 
	    " select dok_id "
		" from dokumenti "
		" where dok_tip = 60 and faktura_ispratnica = 0 ";

	QSqlQuery query(temp);
	while (query.next()) 
	{
		ispratnica_id = query.value(0).toInt();
		m_mapNefakIspratnici.insert(ispratnica_id, ispratnica_id);
	}
}

bool CHelperClass::getNefaktiriranaIspratnica(int ispratnica_id)
{
	bool stat = false;
	QMap<int, int>::iterator itA = m_mapNefakIspratnici.find(ispratnica_id);
	if (itA != m_mapNefakIspratnici.end()) 
	{
		stat = false;
	}
	else
	{
		stat = true;
	}
	return stat;
}

long CHelperClass::printFiscal(QStringList itemArt)
{
	QString art;
	QString cena;
	QString kol;
	QFile file("PF500.IN");
	if( !file.open( QIODevice::WriteOnly) )
		return -1;
    QTextStream stream(&file);
    stream.setEncoding(QStringConverter::System);

	// 	'Otvoranje na fiskalna smetka
	QLocale loc;

	stream << QChar(0x20) << QChar(0x30) << QChar(0x31) << QChar(0x09) << QChar(0x31) << QChar(0x09) 
		<< QChar(0x09) << QChar(0x30) << QChar(0x09) << QChar(0x0d) << QChar(0x0a);
		
	
// 	'Pisuvanje artikli <seq> = Chr(35) ose Chr(36)
	
	for (int kk = 0; kk < itemArt.size(); kk++)
	{
		QStringList itemValue = itemArt.at(kk).split("<>");
		stream << QChar(35+kk);
		stream << QChar(0x31); // command
		art = itemValue.at(0);
		convertIme(stream, art); 
		stream << QChar(0x09);
		stream << QChar(0x31); // ddv tarifa 1;
		stream << QChar(0x09);
		cena = itemValue.at(1);
		stream << cena; // cena
		stream << QChar(0x09);
// 		stream << QChar(0x30); //flag za mkd
// 		stream << QChar(0x09);
		kol = itemValue.at(2);
// 		double tempKol = loc.toDouble(kol);
// 		kol = loc.toString(tempKol, 'f', 3);
		stream << QString(kol); // kol
		stream << QChar(0x09);


		stream << QChar(0x30); // discount type 0
		stream << QChar(0x09);
		stream << QChar(0x09);
		stream << QChar(0x09);


		stream << QChar(0x0d) << QChar(0x0a);
	}

// 	' TOTAL
	stream << QChar(0x26)  << QChar(0x35) << QChar(0x30) <<  QChar(0x09) << QChar(0x09) << QChar(0x0d) << QChar(0x0a);

// 
// 	'Zatvoranje smetka
	stream << QChar(0x25) << QChar(0x38) << QChar(0x0d) << QChar(0x0a);

	file.close();
	SHELLEXECUTEINFO ShExecInfo = {0};
	ShExecInfo.cbSize = sizeof(SHELLEXECUTEINFO);
	ShExecInfo.fMask = SEE_MASK_NOCLOSEPROCESS;
	ShExecInfo.hwnd = NULL;
	ShExecInfo.lpVerb = NULL;
	ShExecInfo.lpFile = L"Fiscal32.exe";        
	ShExecInfo.lpParameters = L"PF500.IN";   
	ShExecInfo.lpDirectory = NULL;
	ShExecInfo.nShow = SW_HIDE;
	ShExecInfo.hInstApp = NULL; 
	ShellExecuteEx(&ShExecInfo);
	WaitForSingleObject(ShExecInfo.hProcess,INFINITE);
	
	return 0;
}

QString CHelperClass::checkFiscal()
{
	bool stat = false;
	QFile file("PF500.out");
	if( !file.open( QIODevice::ReadOnly) )
	{
		int stop = 0;
        return "";
	}

	QTextStream stream( &file);
    QString line;
	while(!stream.atEnd())
	{
		line += stream.readLine();   
	}
	file.close();

	return line;
}

void CHelperClass::convertIme(const QTextStream &stream, QString utfIme)
{
	QString imeE = "";
	utfIme = utfIme.left(20);
	utfIme = utfIme.toUpper();
	QString::iterator it;
	for (it = utfIme.begin(); it != utfIme.end(); it++)
	{
//		if(QString(*it) == (QString)tr("З")){imeE += "З";}
//		else if(QString(*it) == (QString)tr("з")){stream << tr("з");}
//		else if(QString(*it) == (QString)tr("Џ")){stream << tr("Џ");}
//		else if(QString(*it) == (QString)tr("џ")){stream << tr("џ");}
//		else if(QString(*it) == (QString)tr("Ц")){stream << tr("Ц");}
//		else if(QString(*it) == (QString)tr("ц")){stream << tr("ц");}
//		else if(QString(*it) == (QString)tr("В")){stream << tr("В");}
//		else if(QString(*it) == (QString)tr("Б")){stream << tr("Б");}
//		else if(QString(*it) == (QString)tr("б")){stream << tr("б");}
//		else if(QString(*it) == (QString)tr("Н")){stream << tr("Н");}
//		else if(QString(*it) == (QString)tr("н")){stream << tr("н");}
//		else if(QString(*it) == (QString)tr("М")){stream << tr("М");}
//		else if(QString(*it) == (QString)tr("м")){stream << tr("м");}
//		else if(QString(*it) == (QString)tr("А")){stream << tr("А");}
//		else if(QString(*it) == (QString)tr("а")){stream << tr("а");}
//		else if(QString(*it) == (QString)tr("С")){stream << tr("С");}
//		else if(QString(*it) == (QString)tr("с")){stream << tr("с");}
//		else if(QString(*it) == (QString)tr("Д")){stream << tr("Д");}
//		else if(QString(*it) == (QString)tr("д")){stream << tr("д");}
//		else if(QString(*it) == (QString)tr("Ф")){stream << tr("Ф");}
//		else if(QString(*it) == (QString)tr("ф")){stream << tr("ф");}
//		else if(QString(*it) == (QString)tr("Г")){stream << tr("Г");}
//		else if(QString(*it) == (QString)tr("г")){stream << tr("г");}
//		else if(QString(*it) == (QString)tr("Х")){stream << tr("Х");}
//		else if(QString(*it) == (QString)tr("х")){stream << tr("х");}
//		else if(QString(*it) == (QString)tr("Ј")){stream << tr("Ј");}
//		else if(QString(*it) == (QString)tr("ј")){stream << tr("ј");}
//		else if(QString(*it) == (QString)tr("К")){stream << tr("К");}
//		else if(QString(*it) == (QString)tr("к")){stream << tr("к");}
//		else if(QString(*it) == (QString)tr("Л")){stream << tr("Л");}
//		else if(QString(*it) == (QString)tr("л")){stream << tr("л");}
//		else if(QString(*it) == (QString)tr("Ч")){stream << tr("Ч");}
//		else if(QString(*it) == (QString)tr("ч")){stream << tr("ч");}
//		else if(QString(*it) == (QString)tr("Ќ")){stream << tr("Ќ");}
//		else if(QString(*it) == (QString)tr("ќ")){stream << tr("ќ");}
//		else if(QString(*it) == (QString)tr("Љ")){stream << tr("Љ");}
//		else if(QString(*it) == (QString)tr("љ")){stream << tr("љ");}
//		else if(QString(*it) == (QString)tr("Њ")){stream << tr("Њ");}
//		else if(QString(*it) == (QString)tr("њ")){stream << tr("њ");}
//		else if(QString(*it) == (QString)tr("Е")){stream << tr("Е");}
//		else if(QString(*it) == (QString)tr("е")){stream << tr("е");}
//		else if(QString(*it) == (QString)tr("Р")){stream << tr("Р");}
//		else if(QString(*it) == (QString)tr("р")){stream << tr("р");}
//		else if(QString(*it) == (QString)tr("Т")){stream << tr("Т");}
//		else if(QString(*it) == (QString)tr("т")){stream << tr("т");}
//		else if(QString(*it) == (QString)tr("Ѕ")){stream << tr("Ѕ");}
//		else if(QString(*it) == (QString)tr("ѕ")){stream << tr("ѕ");}
//		else if(QString(*it) == (QString)tr("У")){stream << tr("У");}
//		else if(QString(*it) == (QString)tr("у")){stream << tr("у");}
//		else if(QString(*it) == (QString)tr("И")){stream << tr("И");}
//		else if(QString(*it) == (QString)tr("и")){stream << tr("и");}
//		else if(QString(*it) == (QString)tr("О")){stream << tr("О");}
//		else if(QString(*it) == (QString)tr("о")){stream << tr("о");}
//		else if(QString(*it) == (QString)tr("П")){stream << tr("П");}
//		else if(QString(*it) == (QString)tr("п")){stream << tr("п");}
//		else if(QString(*it) == (QString)tr("Ш")){stream << tr("Ш");}
//		else if(QString(*it) == (QString)tr("ш")){stream << tr("ш");}
//		else if(QString(*it) == (QString)tr("Ѓ")){stream << tr("Ѓ");}
//		else if(QString(*it) == (QString)tr("ѓ")){stream << tr("ѓ");}
//		else if(QString(*it) == (QString)tr("Ж")){stream << tr("Ж");}
//		else if(QString(*it) == (QString)tr("ж")){stream << tr("ж");}
//		else if(QString(*it) == (QString)tr(" ")){stream << tr(" ");}
//		else if(QString(*it) == (QString)tr(",")){stream << tr(",");}
//		else if(QString(*it) == (QString)tr("1")){stream << tr("1");}
//		else if(QString(*it) == (QString)tr("2")){stream << tr("2");}
//		else if(QString(*it) == (QString)tr("3")){stream << tr("3");}
//		else if(QString(*it) == (QString)tr("4")){stream << tr("4");}
//		else if(QString(*it) == (QString)tr("5")){stream << tr("5");}
//		else if(QString(*it) == (QString)tr("6")){stream << tr("6");}
//		else if(QString(*it) == (QString)tr("7")){stream << tr("7");}
//		else if(QString(*it) == (QString)tr("8")){stream << tr("8");}
//		else if(QString(*it) == (QString)tr("9")){stream << tr("9");}
//		else if(QString(*it) == (QString)tr("0")){stream << tr("0");}
//		else if(QString(*it) == (QString)tr("*")){stream << tr("*");}
//		else if(QString(*it) == (QString)tr("(")){stream << tr("(");}
//		else if(QString(*it) == (QString)tr(")")){stream << tr(")");}
	}
}

void CHelperClass::createListaKomintentiByID()
{
	m_mapKomintentByID.clear();
	QString tempID;
	QString tempSifra;

	QString temp = 
		" select distinct id, sifra "
		" from komintenti ";
	QSqlQuery query(temp);
	while (query.next()) 
	{
		tempID = query.value(0).toString();
		tempSifra = query.value(1).toString();

		m_mapKomintentByID.insert(tempID, tempSifra);
	}
}

QString CHelperClass::getSifraKomintentByID(const QString& dok_id )
{
	QString retSifra = "";
	QMap <QString, QString>::iterator it = m_mapKomintentByID.find(dok_id);
	if (it != m_mapKomintentByID.end()) 
	{
		retSifra = it.value();
	}
	return retSifra;
}

long CHelperClass::printFiscalStorno(QStringList itemArt)
{
	QString art;
	QString cena;
	QString kol;
	QFile file("PF500.IN");
	if( !file.open( QIODevice::WriteOnly) )
		return -1;
    QTextStream stream(&file);
    stream.setEncoding(QStringConverter::Encoding::Latin1);  // Closest alternative


	// 	'Otvoranje na fiskalna smetka
	QLocale loc;

	stream << QChar(0x20) << QChar(0x30) << QChar(0x31) << QChar(0x09) << QChar(0x31) << QChar(0x09) 
		<< QChar(0x09) << QChar(0x31) << QChar(0x09) << QChar(0x0d) << QChar(0x0a);


	// 	'Pisuvanje artikli <seq> = Chr(35) ose Chr(36)

	for (int kk = 0; kk < itemArt.size(); kk++)
	{
		QStringList itemValue = itemArt.at(kk).split("<>");
		stream << QChar(35+kk);
		stream << QChar(0x31); // command
		art = itemValue.at(0);
		convertIme(stream, art); 
		stream << QChar(0x09);
		stream << QChar(0x31); // ddv tarifa 1;
		stream << QChar(0x09);
		cena = itemValue.at(1);
		stream << cena; // cena
		stream << QChar(0x09);
		// 		stream << QChar(0x30); //flag za mkd
		// 		stream << QChar(0x09);
		kol = itemValue.at(2);
// 		double tempKol = loc.toDouble(kol);
// 		kol = loc.toString(tempKol, 'f', 3);
		stream << QString(kol); // kol
		stream << QChar(0x09);


		stream << QChar(0x30); // discount type 0
		stream << QChar(0x09);
		stream << QChar(0x09);
		stream << QChar(0x09);


		stream << QChar(0x0d) << QChar(0x0a);
	}

	// 	' TOTAL
	stream << QChar(0x26)  << QChar(0x35) << QChar(0x30) <<  QChar(0x09) << QChar(0x09) << QChar(0x0d) << QChar(0x0a);

	// 
	// 	'Zatvoranje smetka
	stream << QChar(0x25) << QChar(0x38) << QChar(0x0d) << QChar(0x0a);


	file.close();
	file.close();
	SHELLEXECUTEINFO ShExecInfo = {0};
	ShExecInfo.cbSize = sizeof(SHELLEXECUTEINFO);
	ShExecInfo.fMask = SEE_MASK_NOCLOSEPROCESS;
	ShExecInfo.hwnd = NULL;
	ShExecInfo.lpVerb = NULL;
	ShExecInfo.lpFile = L"Fiscal32.exe";        
	ShExecInfo.lpParameters = L"PF500.IN";   
	ShExecInfo.lpDirectory = NULL;
	ShExecInfo.nShow = SW_HIDE;
	ShExecInfo.hInstApp = NULL; 
	ShellExecuteEx(&ShExecInfo);
	WaitForSingleObject(ShExecInfo.hProcess,INFINITE);
	long result = 0;
	return result;
}

void CHelperClass::printFiscalPodesuvanjeDatumCas()
{
	QFile file("PF500.IN");
	if( !file.open( QIODevice::WriteOnly) )
		return;
    QTextStream stream(&file);
    stream.setEncoding(QStringConverter::Encoding::Latin1);  // Closest alternative
    QDateTime dateCurr = QDateTime::currentDateTime();
	QLocale loc;

	stream << QChar(0x2d) << QChar(0x3d);
	stream << dateCurr.toString("dd-MM-yy hh:mm:ss");
	stream << QChar(0x09);
	file.close();
	file.close();
	SHELLEXECUTEINFO ShExecInfo = {0};
	ShExecInfo.cbSize = sizeof(SHELLEXECUTEINFO);
	ShExecInfo.fMask = SEE_MASK_NOCLOSEPROCESS;
	ShExecInfo.hwnd = NULL;
	ShExecInfo.lpVerb = NULL;
	ShExecInfo.lpFile = L"Fiscal32.exe";        
	ShExecInfo.lpParameters = L"PF500.IN";   
	ShExecInfo.lpDirectory = NULL;
	ShExecInfo.nShow = SW_HIDE;
	ShExecInfo.hInstApp = NULL; 
	ShellExecuteEx(&ShExecInfo);
	WaitForSingleObject(ShExecInfo.hProcess,INFINITE);
}

void CHelperClass::printFiscalDnevnoFiskalnoZatvoranje()
{
	QFile file("PF500.IN");
	if( !file.open( QIODevice::WriteOnly) )
		return;
    QTextStream stream(&file);
    stream.setEncoding(QStringConverter::Encoding::Latin1);  // Closest to Windows-1251
    QDateTime dateCurr = QDateTime::currentDateTime();
	QLocale loc;

	stream << QChar(0x2a) << QChar(0x45) << QChar(0x5a) << QChar(0x09);
	
	file.close();
	file.close();
	SHELLEXECUTEINFO ShExecInfo = {0};
	ShExecInfo.cbSize = sizeof(SHELLEXECUTEINFO);
	ShExecInfo.fMask = SEE_MASK_NOCLOSEPROCESS;
	ShExecInfo.hwnd = NULL;
	ShExecInfo.lpVerb = NULL;
	ShExecInfo.lpFile = L"Fiscal32.exe";        
	ShExecInfo.lpParameters = L"PF500.IN";   
	ShExecInfo.lpDirectory = NULL;
	ShExecInfo.nShow = SW_HIDE;
	ShExecInfo.hInstApp = NULL; 
	ShellExecuteEx(&ShExecInfo);
	WaitForSingleObject(ShExecInfo.hProcess,INFINITE);
}

void CHelperClass::SluzbenIzlezNaPari(const QString &iznosPari)
{
	QFile file("PF500.IN");
	if( !file.open( QIODevice::WriteOnly) )
		return;
    QTextStream stream(&file);
    stream.setEncoding(QStringConverter::Encoding::Latin1);  // Closest to Windows-1251
    QDateTime dateCurr = QDateTime::currentDateTime();
	QLocale loc;

	stream << QChar(0x29) << QChar(0x46) << QChar(0x31) << QChar(0x09);
	stream << iznosPari;
	stream << QChar(0x09);

	file.close();
	file.close();
	SHELLEXECUTEINFO ShExecInfo = {0};
	ShExecInfo.cbSize = sizeof(SHELLEXECUTEINFO);
	ShExecInfo.fMask = SEE_MASK_NOCLOSEPROCESS;
	ShExecInfo.hwnd = NULL;
	ShExecInfo.lpVerb = NULL;
	ShExecInfo.lpFile = L"Fiscal32.exe";        
	ShExecInfo.lpParameters = L"PF500.IN";   
	ShExecInfo.lpDirectory = NULL;
	ShExecInfo.nShow = SW_HIDE;
	ShExecInfo.hInstApp = NULL; 
	ShellExecuteEx(&ShExecInfo);
	WaitForSingleObject(ShExecInfo.hProcess,INFINITE);
}

void CHelperClass::SluzbenVlezNaPari(const QString &iznosPari)
{
	QFile file("PF500.IN");
	if( !file.open( QIODevice::WriteOnly) )
		return;
    QTextStream stream(&file);
    stream.setEncoding(QStringConverter::Encoding::Latin1);  // Closest to Windows-1251
    QDateTime dateCurr = QDateTime::currentDateTime();
	QLocale loc;

	stream << QChar(0x28) << QChar(0x46) << QChar(0x30) << QChar(0x09);
	stream << iznosPari;
	stream << QChar(0x09);

	file.close();
	file.close();
	SHELLEXECUTEINFO ShExecInfo = {0};
	ShExecInfo.cbSize = sizeof(SHELLEXECUTEINFO);
	ShExecInfo.fMask = SEE_MASK_NOCLOSEPROCESS;
	ShExecInfo.hwnd = NULL;
	ShExecInfo.lpVerb = NULL;
	ShExecInfo.lpFile = L"Fiscal32.exe";        
	ShExecInfo.lpParameters = L"PF500.IN";   
	ShExecInfo.lpDirectory = NULL;
	ShExecInfo.nShow = SW_HIDE;
	ShExecInfo.hInstApp = NULL; 
	ShellExecuteEx(&ShExecInfo);
	WaitForSingleObject(ShExecInfo.hProcess,INFINITE);
}

void CHelperClass::printKontrolenIzvestajProsiren()
{
	QFile file("PF500.IN");
	if( !file.open( QIODevice::WriteOnly) )
		return;
    QTextStream stream(&file);
    stream.setEncoding(QStringConverter::Encoding::Latin1);  // Closest to Windows-1251
    QDateTime dateCurr = QDateTime::currentDateTime();
	QLocale loc;
	
	stream << QChar(0x27) << QChar(0x45) << QChar(0x58) << QChar(0x09);

	file.close();
	SHELLEXECUTEINFO ShExecInfo = {0};
	ShExecInfo.cbSize = sizeof(SHELLEXECUTEINFO);
	ShExecInfo.fMask = SEE_MASK_NOCLOSEPROCESS;
	ShExecInfo.hwnd = NULL;
	ShExecInfo.lpVerb = NULL;
	ShExecInfo.lpFile = L"Fiscal32.exe";        
	ShExecInfo.lpParameters = L"PF500.IN";   
	ShExecInfo.lpDirectory = NULL;
	ShExecInfo.nShow = SW_HIDE;
	ShExecInfo.hInstApp = NULL; 
	ShellExecuteEx(&ShExecInfo);
	WaitForSingleObject(ShExecInfo.hProcess,INFINITE);
}

void CHelperClass::printDetalenIzvestajPoPeriod(const QString &date1, const QString &date2)
{
	QFile file("PF500.IN");
	if( !file.open( QIODevice::WriteOnly) )
		return;
    QTextStream stream(&file);
    stream.setEncoding(QStringConverter::Encoding::Latin1);  // Closest to Windows-1251

	QDateTime dateCurr = QDateTime::currentDateTime();
	QLocale loc;

	stream << QChar(0x5f) << QChar(0x5e) << QChar(0x31) << QChar(0x09);
	stream << date1 << QChar(0x09);
	stream << date2 << QChar(0x09);
	file.close();
	SHELLEXECUTEINFO ShExecInfo = {0};
	ShExecInfo.cbSize = sizeof(SHELLEXECUTEINFO);
	ShExecInfo.fMask = SEE_MASK_NOCLOSEPROCESS;
	ShExecInfo.hwnd = NULL;
	ShExecInfo.lpVerb = NULL;
	ShExecInfo.lpFile = L"Fiscal32.exe";        
	ShExecInfo.lpParameters = L"PF500.IN";   
	ShExecInfo.lpDirectory = NULL;
	ShExecInfo.nShow = SW_HIDE;
	ShExecInfo.hInstApp = NULL; 
	ShellExecuteEx(&ShExecInfo);
	WaitForSingleObject(ShExecInfo.hProcess,INFINITE);
}


void CHelperClass::createListProdCenaKalkulacijaMapAll()
{
	m_mapKalkulacija.clear();
	m_mapKalkulacija2.clear();
	QString art_id = "";
	QString komintent_id = "";
	QString keyT = "";
	float prod_cena = 0.f;
	float nab_cena = 0.f;
	QString temp = 
		" SELECT artikal_id,komintent_id, MAX(prod_cena), MAX(nab_cena) "
		" FROM magacin "  
		" WHERE (magacin.dok_tip between 20 and 39) "
		" GROUP BY artikal_id, komintent_id ";
	QSqlQuery query(temp);
	while (query.next()) 
	{
		art_id = query.value(0).toString();
		komintent_id = query.value(1).toString();
		keyT = art_id + "Key" + komintent_id;
		prod_cena = query.value(2).toFloat();
		nab_cena = query.value(3).toFloat();
		m_mapKalkulacija.insert(keyT, rouded(prod_cena));	
		m_mapKalkulacija2.insert(keyT, rouded(nab_cena));
	}
}

float CHelperClass::getProdCenaFromKalkulacija(const QString & item)
{
	QString artikalBroj = item;
	float result = 0.f;


		QMap<QString, float>::iterator itPriliv = m_mapKalkulacija.find(artikalBroj);
		if (itPriliv != m_mapKalkulacija.end()) 
		{
			result = itPriliv.value();
		}
	return result;
}

float CHelperClass::getNabCenaFromKalkulacija(const QString & item)
{
	QString artikalBroj = item;
	float result = 0.f;


	QMap<QString, float>::iterator itPriliv = m_mapKalkulacija2.find(artikalBroj);
	if (itPriliv != m_mapKalkulacija2.end()) 
	{
		result = itPriliv.value();
	}
	return result;
}

void CHelperClass::createListaIzvodiMap(QString bankaId)
{
	m_mapIzvod.clear();
	QString s_izvodbr = "";
	QString s_izvod_ref = "";
	
	float vkupenPrilivProizvod = 0.f;
	QString temp = 
	" select izvodbr, izvod_ref "
	" from izvodi "
	" where bankaid = ";
	temp += bankaId;
	QSqlQuery query(temp);
	while (query.next()) 
	{
		s_izvodbr = query.value(0).toString();
		s_izvod_ref = query.value(1).toString();
		
		vkupenPrilivProizvod = query.value(2).toFloat();
		m_mapIzvod.insert(s_izvodbr, s_izvod_ref);	
	}
}

QString CHelperClass::getIzvod_Ref(const QString& izvodbr )
{
	QString izvod_ref = "";
	QMap <QString, QString>::iterator it = m_mapIzvod.find(izvodbr);
	if (it != m_mapIzvod.end()) 
	{
		izvod_ref = it.value();
	}
	return izvod_ref;
}


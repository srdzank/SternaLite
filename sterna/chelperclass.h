#ifndef CHELPERCLASS_H
#define CHELPERCLASS_H

#include <QObject>
#include <QStandardItem>
#include <QFile>
#include <QDataStream>
#include <QTextStream>


class CHelperClass : public QObject
{
    Q_OBJECT

public:
    CHelperClass(QObject *parent);
    ~CHelperClass();
    bool isKomintentExists(const QString &komName);
    bool isArtikliExists(const QString &komName);
    int genSifraArtikal();
    bool isBankExists(const QString &komName);
    bool isFakturaExists(const QString &fakturaId, const QString& tip);
    void fakturaStatus(QStandardItem *item, const QString& tip);
    void getFakturaPlatenIznos(const QString& faktBroj, const QString& tip);
    float getPlatenIznos();
	QString getKomintentName(QString m_id);
    float getFakturaVkupenIznos(const QString& faktBroj, const QString& tip);
	QString getArtikalByID(QString text);
    float getVkKol(const QString& artikal_ID, const QString& tip);
    float getVkKolBetween(const QString& artikal_ID, const QString& tip, const QString& tip1);
    float getVkKolByDate(const QString& artikal_ID, const QString& tip, const QDate& mDate, const QDate& mDate2);
    void createStatusMap(const QString& tip);
	double rouded(double num);
	int calcMaxIdTblKalkulacii();
	int calcMaxIdTblKalkulaciiStavki();
	void calcPrilivOdlivPoKomintent();
    float getPrilivOdlivPoKomintent(const QString& komintent_id, const QString& dok_tip );
	void calcPlakanjaPoKomintent();
    float getPlakanjePoKomintent(const QString& komintent_id, const QString& dok_tip );
    void createKomintentiMap();
    void createArtikliMap();
    void createSifraMap();
    void createListaIzlezniFakturiIznosi(const QString &tip);
    void createListaKomintenti(const QString &tip);
    void getFakturaIznosiAll(const QString& tip);
    float getFakturaPrilivIznos(const QString& dok_id );
    float getFakturaOdlivIznos(const QString& dok_id );
	void createMaxNabProdCenaMapAll();
    int isSifraArtikalExistsInSTore(QString mSifra);
    bool isKomintentExistsInStore(const QString &komID);

    QString getArtikalNameByID(const QString& id);
    QString getKomintentNameByID(const QString& id);
    QString getSifraNameByID(const QString& id);

    float getFakturaIznos(const QString& dok_id);
    float getFakturaDDV(const QString& dok_id);
    float getFakturaVkupno(const QString& dok_id);

	void createSaldoArtikliOdlivMapAll();
	void createSaldoProizvodiPrilivMapAll();
	void createSaldoArtikliOdlivMapAll_bezKomintent();
	void createSaldoProizvodiPrilivMapAllbezKomintent();
	void createListProdCenaKalkulacijaMapAll();
    float getProdCenaFromKalkulacija(const QString & item);
    float getNabCenaFromKalkulacija(const QString & item);

	void createSaldoArtikliOdlivMapAll(QString date1, QString date2);
	void createSaldoProizvodiPrilivMapAll(QString date1, QString date2);

    float getLagerListaAll(const QString& item,  const QString& tip);
    bool isIzvodExists(const QString& bankaId, const QString& izvodId);

	QString GetRandomString();
    QString getPlatenIznosZaFaktura(const QString& tip, const QString &faktBr);
	void createPovratnicaFakturiIznosi();
    float getPovratnicaFakturaVkupno(const QString& dok_id );
	QString getFakturaBrojOdPovratnica(QString povratnica_id);
	float getIznosOdPovratnica(QString povratnica_id, QString faktura_br );

    QStringList getVraboteniInfo(const QString& u, const QString& p);
	QString getVrabotenNextID();
    QString getKomintentDetail(const QString& dok_id );
	int isSifraArtikalExists(QString mSifra);
	int isSifraKomintentExists(QString mSifra);
	void createMapPriemnici();
    QString getFakturaFromPriemnica(const QString& priemnica_id);
    QString getTipDokumentFromPriemnica(const QString& priemnica_id);
	void createMapNefakturiraniIspratnici();
	bool getNefaktiriranaIspratnica(int ispratnica_id);
	long printFiscal(QStringList itemArt);
	long printFiscalStorno(QStringList itemArt);
	void createListaKomintentiByID();
    QString getSifraKomintentByID(const QString& dok_id );
	void printFiscalPodesuvanjeDatumCas();
	void printFiscalDnevnoFiskalnoZatvoranje();
    void SluzbenIzlezNaPari(const QString& iznosPari);
    void SluzbenVlezNaPari(const QString& iznosPari);
	void printKontrolenIzvestajProsiren();
    void printDetalenIzvestajPoPeriod(const QString &date1, const QString &date2);
	QString checkFiscal();
	void createListaIzvodiMap(QString bankaId);
    QString getIzvod_Ref(const QString& izvodbr );
	typedef struct {
		float priliv;
		float odliv;
	} tdataInfo;

	QMap<QString, tdataInfo> mapIznosi;

private:
typedef struct
	{
		int komintent_id;
		int dok_id;
		int dok_tip;
	} analitikaKomintent; 

typedef struct
{
	int komintent_id;
	int dok_id;
	int dok_tip;
	float kol;
	float cena;
	float rabat;
} analitikaKomintentArtikli; 

typedef struct
{
    float iznos;
    float ddv;
    float vkupno;
} fakturiData; 

typedef struct
{
	QString dokument_id;
	QString dokument_tip;
	QString dokument_datum;
} tpriemniciData; 

	QMap <QString, tpriemniciData> m_mapPriemnici;
	QMap <int , int> m_mapNefakIspratnici;
	float m_vkupenPriliv;
	float m_vkupenOdliv;
    float m_plateno;
	QMap <int, float> m_mapZadolzuvanje;
	QMap <int, float> m_mapPlateno;
    QMap <QString, QString> m_mapArtikli;
    QMap <QString, QString> m_mapKomintenti;
    QMap <QString, QString> m_mapSifri;
    QMap <QString, fakturiData> m_mapFakturi;
    QMap <QString, QString> m_mapKomintentDetailInfo;
	QMap <QString, fakturiData> m_mapPovratnici;

	QMap <QString, float> m_mapPriliv;
	QMap <QString, float> m_mapOdliv;
	QMap <QString, float> m_mapKalkulacija;
	QMap <QString, float> m_mapKalkulacija2;

	QMap <QString, float> m_mapPrilivOdlivPoKomintent;
	QMap <QString, float> m_mapPlakanjePoKomintent;
	QMap <QString, QString> m_mapIzvod;


	QMap <QString, QString> m_mapKomintentByID; 
    void createZadolzuvanjeMap(const QString& tip);
    void createPlatenoMap(const QString& tip);
	QVector<analitikaKomintent> vAnalitikaKomintent;
	QVector<analitikaKomintentArtikli> vAnalitikaKomintentArtikli;
	
    void convertIme(const QTextStream &stream, QString utfIme);
	
};

#endif // CHELPERCLASS_H

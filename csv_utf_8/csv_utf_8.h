#pragma once

#include <QtWidgets/QMainWindow>
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QMimeData>
#include <QMessageBox>
#include <QTextStream>
#include <QFile>
#include <QDir>
#include <vector>
#include <map>
#include <fstream>
#include "ui_csv_utf_8.h"

class csv_utf_8 : public QMainWindow
{
	Q_OBJECT

public:
	csv_utf_8(QWidget *parent = Q_NULLPTR);
	QStringList headers;
private:
	Ui::csv_utf_8Class ui;
	void dragEnterEvent(QDragEnterEvent * event);
	bool isHave(QString url);
	bool isTxt(QString url);
	void getCsv_(QString url);
	void dropEvent(QDropEvent *event);

	std::vector<std::vector<QString>> k_v = { 
	{ QStringLiteral("״̬"), "Status" },
	{ QStringLiteral("�ļ���"), "Filename" },
	{ QStringLiteral("��Ʒ����"), "Sample type" },
	{ QStringLiteral("���"), "Groups" },
	{ QStringLiteral("ˮƽ"), "Level" },
	{ QStringLiteral("��ƷID"), "Sample ID" },
	{ QStringLiteral("��Ʒ����"), "Sample name" },
	{ QStringLiteral("����"), "Comment" },
	{ QStringLiteral("��Ʒƿλ��"), "Vial position" },
	{ QStringLiteral("�������"), "Injection volume" },
	{ QStringLiteral("Ԥ��������"), "Barcode Expected" },
	{ QStringLiteral("ʵ��������"), "Barcode Actual" },
	{ QStringLiteral("��Ʒ���"), "Sample Volume" },
	{ QStringLiteral("ϡ������"), "Dilution Faction" },
	{ QStringLiteral("��Ʒ����"), "Sample Weight" },
	{ QStringLiteral("��������"), "Calculation Type" },
	{ QStringLiteral("��λ"), "Final Units" },
	{ QStringLiteral("��������"), "Instruction Method" },
	{ QStringLiteral("ͨ��"), "Channel" } };
	std::map<QString, QString> heads;
	std::vector<QString> tmp;

private slots:
	void deleteItem();
	void getCsv();
};

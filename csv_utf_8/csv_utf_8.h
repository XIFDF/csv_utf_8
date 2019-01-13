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
	{ QString::fromLocal8Bit("״̬"), "Status" },
	{ QString::fromLocal8Bit("�ļ���"), "Filename" },
	{ QString::fromLocal8Bit("��Ʒ����"), "Sample type" },
	{ QString::fromLocal8Bit("���"), "Groups" },
	{ QString::fromLocal8Bit("ˮƽ"), "Level" },
	{ QString::fromLocal8Bit("��ƷID"), "Sample ID" },
	{ QString::fromLocal8Bit("��Ʒ����"), "Sample name" },
	{ QString::fromLocal8Bit("����"), "Comment" },
	{ QString::fromLocal8Bit("��Ʒƿλ��"), "Vial position" },
	{ QString::fromLocal8Bit("�������"), "Injection volume" },
	{ QString::fromLocal8Bit("Ԥ��������"), "Barcode Expected" },
	{ QString::fromLocal8Bit("ʵ��������"), "Barcode Actual" },
	{ QString::fromLocal8Bit("��Ʒ���"), "Sample Volume" },
	{ QString::fromLocal8Bit("ϡ������"), "Dilution Faction" },
	{ QString::fromLocal8Bit("��Ʒ����"), "Sample Weight" },
	{ QString::fromLocal8Bit("��������"), "Calculation Type" },
	{ QString::fromLocal8Bit("��λ"), "Final Units" },
	{ QString::fromLocal8Bit("��������"), "Instruction Method" },
	{ QString::fromLocal8Bit("ͨ��"), "Channel" } };
	std::map<QString, QString> heads;
	std::vector<QString> tmp;

private slots:
	void deleteItem();
	void getCsv();
};

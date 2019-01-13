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
	{ QString::fromLocal8Bit("状态"), "Status" },
	{ QString::fromLocal8Bit("文件名"), "Filename" },
	{ QString::fromLocal8Bit("样品类型"), "Sample type" },
	{ QString::fromLocal8Bit("组别"), "Groups" },
	{ QString::fromLocal8Bit("水平"), "Level" },
	{ QString::fromLocal8Bit("样品ID"), "Sample ID" },
	{ QString::fromLocal8Bit("样品名称"), "Sample name" },
	{ QString::fromLocal8Bit("评论"), "Comment" },
	{ QString::fromLocal8Bit("样品瓶位置"), "Vial position" },
	{ QString::fromLocal8Bit("进样体积"), "Injection volume" },
	{ QString::fromLocal8Bit("预期条形码"), "Barcode Expected" },
	{ QString::fromLocal8Bit("实际条形码"), "Barcode Actual" },
	{ QString::fromLocal8Bit("样品体积"), "Sample Volume" },
	{ QString::fromLocal8Bit("稀释因子"), "Dilution Faction" },
	{ QString::fromLocal8Bit("样品重量"), "Sample Weight" },
	{ QString::fromLocal8Bit("计算类型"), "Calculation Type" },
	{ QString::fromLocal8Bit("单位"), "Final Units" },
	{ QString::fromLocal8Bit("仪器方法"), "Instruction Method" },
	{ QString::fromLocal8Bit("通道"), "Channel" } };
	std::map<QString, QString> heads;
	std::vector<QString> tmp;

private slots:
	void deleteItem();
	void getCsv();
};

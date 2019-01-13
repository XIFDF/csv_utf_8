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
	{ QStringLiteral("状态"), "Status" },
	{ QStringLiteral("文件名"), "Filename" },
	{ QStringLiteral("样品类型"), "Sample type" },
	{ QStringLiteral("组别"), "Groups" },
	{ QStringLiteral("水平"), "Level" },
	{ QStringLiteral("样品ID"), "Sample ID" },
	{ QStringLiteral("样品名称"), "Sample name" },
	{ QStringLiteral("评论"), "Comment" },
	{ QStringLiteral("样品瓶位置"), "Vial position" },
	{ QStringLiteral("进样体积"), "Injection volume" },
	{ QStringLiteral("预期条形码"), "Barcode Expected" },
	{ QStringLiteral("实际条形码"), "Barcode Actual" },
	{ QStringLiteral("样品体积"), "Sample Volume" },
	{ QStringLiteral("稀释因子"), "Dilution Faction" },
	{ QStringLiteral("样品重量"), "Sample Weight" },
	{ QStringLiteral("计算类型"), "Calculation Type" },
	{ QStringLiteral("单位"), "Final Units" },
	{ QStringLiteral("仪器方法"), "Instruction Method" },
	{ QStringLiteral("通道"), "Channel" } };
	std::map<QString, QString> heads;
	std::vector<QString> tmp;

private slots:
	void deleteItem();
	void getCsv();
};

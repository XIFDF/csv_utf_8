#include "csv_utf_8.h"

csv_utf_8::csv_utf_8(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	setAcceptDrops(true);

	ui.tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
	ui.tableWidget->setColumnCount(2);
	headers << QStringLiteral("�ļ���") << QStringLiteral("�ļ�·��");
	ui.tableWidget->setHorizontalHeaderLabels(headers);
	ui.tableWidget->setColumnWidth(0, 150);
	ui.tableWidget->setColumnWidth(1, 250);

	ui.tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows); //����ѡ����Ϊ������Ϊ��λ
	ui.tableWidget->setSelectionMode(QAbstractItemView::SingleSelection); //����ѡ��ģʽ��ѡ����
	
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(deleteItem()));
	connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(getCsv()));

	for (auto i : k_v) {
		heads.insert(std::pair<QString, QString>(i.at(0), i.at(1)));
	}
}

void csv_utf_8::dragEnterEvent(QDragEnterEvent *event)
{
	//���Ϊ�ļ�����֧���Ϸ�
	if (event->mimeData()->hasFormat("text/uri-list"))
		event->acceptProposedAction();
}

//���û���������ļ��󣬾ͻᴥ��dropEvent�¼�
void csv_utf_8::dropEvent(QDropEvent *event)
{
	//ע�⣺��������ж��ļ����ڣ���˼���û�һ�����϶��˶���ļ����������϶�һ��Ŀ¼
	//������ȡ����Ŀ¼�����ڲ�ͬ�Ĳ���ƽ̨�£��Լ���д����ʵ�ֶ�ȡ����Ŀ¼�ļ���
	QList<QUrl> urls = event->mimeData()->urls();
	if (urls.isEmpty())
		return;

	//���ı�����׷���ļ���
	foreach(QUrl url, urls) {
		QString file_url = url.toLocalFile();
		if (isTxt(file_url) == 0) {
			QMessageBox::about(NULL, QString::fromLocal8Bit("����"), QString::fromLocal8Bit("�ļ���ʽӦΪtxt").insert(0, file_url));
		}
		else if (isHave(file_url) == 1) {
			QMessageBox::about(NULL, QString::fromLocal8Bit("����"), QString::fromLocal8Bit("�ļ��Ѿ�����").insert(0, file_url));
		}
		else {
			int Row = ui.tableWidget->rowCount();
			ui.tableWidget->insertRow(Row);
			QString file_name = file_url.mid(file_url.lastIndexOf("/", -1) + 1, -1);
			QTableWidgetItem *item1 = new QTableWidgetItem(file_name);
			QTableWidgetItem *item2 = new QTableWidgetItem(file_url);
			ui.tableWidget->setItem(Row, 0, item1);
			ui.tableWidget->setItem(Row, 1, item2);
		}
	}
}

void csv_utf_8::deleteItem()
{
	QModelIndex index = ui.tableWidget->selectionModel()->currentIndex();
	ui.tableWidget->removeRow(index.row());
}

bool csv_utf_8::isHave(QString url) {
	QStringList tabelDate;
	for (int i = 0; i < ui.tableWidget->rowCount(); i++) {
		tabelDate.append(ui.tableWidget->item(i, 1)->text());
	}
	for (int i = 0; i < tabelDate.length(); i++) {
		if (url == tabelDate[i]) return 1;
	}
	return 0;
}

bool csv_utf_8::isTxt(QString url) {
	QString file = url.mid(url.lastIndexOf(".", -1) + 1, -1);
	if (file == "txt") {
		return 1;
	}
	else return 0;
}

void csv_utf_8::getCsv() {
	QStringList tabelDate;
	for (int i = 0; i < ui.tableWidget->rowCount(); i++) {
		tabelDate.append(ui.tableWidget->item(i, 1)->text());
	}
	for (int i = 0; i < tabelDate.length(); i++) {
		getCsv_(tabelDate[i]);
	}
	QMessageBox::about(NULL, QString::fromLocal8Bit("��ʾ"), QString::fromLocal8Bit("�������!"));

}

void csv_utf_8::getCsv_(QString url) {
	QFile f(url);

	f.open(QFile::ReadOnly);
	QByteArray b = f.readAll();
	QString datastring = QString::fromUtf16((ushort*)b.data()); //unicode txt
	int location1 = datastring.lastIndexOf("\n") + 1;
	QString truedata = datastring.left(location1);
	f.close();
	truedata.replace("\t", ",");
	
	int location2 = truedata.indexOf("\n") + 1;
	truedata.remove(location2, -1);
	QString headdata = truedata.left(location2);
	truedata.remove(0, truedata.indexOf("\n") + 1);
	headdata.remove(headdata.length() - 2, 2);
	for (int i = 0; !headdata.section(",", i, i).isEmpty(); i++)
		tmp.push_back(headdata.section(",", i, i));
	for (auto i : tmp) {
		auto iter = heads.find(i);
		if (iter != heads.end()) {
			headdata.replace(i, heads[i]);
		}
	}
	headdata.append("\r\n");
	
	QFile fileOut(url.replace("txt", "csv"));
	fileOut.open(QIODevice::WriteOnly | QFile::Truncate);
	
	QTextStream streamFileOut(&fileOut);
	streamFileOut.setCodec("UTF-8");
	streamFileOut << headdata << truedata;
	streamFileOut.flush();
}


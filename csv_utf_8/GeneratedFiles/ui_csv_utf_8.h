/********************************************************************************
** Form generated from reading UI file 'csv_utf_8.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSV_UTF_8_H
#define UI_CSV_UTF_8_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_csv_utf_8Class
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QTableWidget *tableWidget;
    QLabel *label;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *csv_utf_8Class)
    {
        if (csv_utf_8Class->objectName().isEmpty())
            csv_utf_8Class->setObjectName(QStringLiteral("csv_utf_8Class"));
        csv_utf_8Class->resize(598, 289);
        centralWidget = new QWidget(csv_utf_8Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(490, 10, 101, 41));
        pushButton->setStyleSheet(QLatin1String("QPushButton{\n"
"	font-size : 20px;\n"
"}"));
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 471, 191));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 210, 471, 21));
        label->setStyleSheet(QLatin1String("QLabel{\n"
"	font-size : 20px;\n"
"}"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(490, 230, 101, 28));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton{\n"
"	font-size : 20px;\n"
"}"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 240, 471, 21));
        label_2->setStyleSheet(QLatin1String("QLabel{\n"
"	font-size : 20px;\n"
"}"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(491, 60, 101, 21));
        label_3->setStyleSheet(QLatin1String("QLabel{\n"
"	font-size : 18px;\n"
"}"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(490, 90, 101, 21));
        label_4->setStyleSheet(QLatin1String("QLabel{\n"
"	font-size : 18px;\n"
"}"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(490, 150, 101, 21));
        label_5->setStyleSheet(QLatin1String("QLabel{\n"
"	font-size : 18px;\n"
"}"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(490, 180, 101, 21));
        label_6->setStyleSheet(QLatin1String("QLabel{\n"
"	font-size : 18px;\n"
"}"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(490, 120, 101, 21));
        label_7->setStyleSheet(QLatin1String("QLabel{\n"
"	font-size : 18px;\n"
"}"));
        csv_utf_8Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(csv_utf_8Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        csv_utf_8Class->setStatusBar(statusBar);

        retranslateUi(csv_utf_8Class);

        QMetaObject::connectSlotsByName(csv_utf_8Class);
    } // setupUi

    void retranslateUi(QMainWindow *csv_utf_8Class)
    {
        csv_utf_8Class->setWindowTitle(QApplication::translate("csv_utf_8Class", "Tracefinder\345\257\274\345\205\245csv\347\224\237\346\210\220\345\267\245\345\205\267", nullptr));
        pushButton->setText(QApplication::translate("csv_utf_8Class", "\345\210\240\351\231\244\346\226\207\344\273\266", nullptr));
        label->setText(QApplication::translate("csv_utf_8Class", "\350\275\254\347\240\201\345\271\266\346\267\273\345\212\240\346\240\274\345\274\217\347\232\204csv\346\226\207\344\273\266", nullptr));
        pushButton_2->setText(QApplication::translate("csv_utf_8Class", "\347\224\237\346\210\220", nullptr));
        label_2->setText(QApplication::translate("csv_utf_8Class", "\345\234\250\345\220\204\350\207\252txt\346\226\207\344\273\266\347\232\204\347\233\256\345\275\225\344\270\213\347\224\237\346\210\220", nullptr));
        label_3->setText(QApplication::translate("csv_utf_8Class", "\350\257\267\345\260\206Excel", nullptr));
        label_4->setText(QApplication::translate("csv_utf_8Class", "\344\270\255\347\224\237\346\210\220\347\232\204txt", nullptr));
        label_5->setText(QApplication::translate("csv_utf_8Class", "\346\213\226\346\213\275\350\277\233\345\267\246\346\226\271", nullptr));
        label_6->setText(QApplication::translate("csv_utf_8Class", "\347\232\204\350\241\250\346\240\274\344\270\255", nullptr));
        label_7->setText(QApplication::translate("csv_utf_8Class", "(Unicode)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class csv_utf_8Class: public Ui_csv_utf_8Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSV_UTF_8_H

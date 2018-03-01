/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *speedTitleLabel;
    QLabel *mineSpeedLabel;
    QPushButton *startButton;
    QLabel *shareCount;
    QFrame *line;
    QTabWidget *tabWidget;
    QWidget *tab;
    QListWidget *list;
    QWidget *tab_2;
    QLineEdit *apiKeyLine;
    QComboBox *poolBox;
    QLabel *poolLabel;
    QLabel *label;
    QPushButton *updateButton;
    QTextBrowser *poolData;
    QWidget *tab_3;
    QTextBrowser *output;
    QWidget *tab_4;
    QCheckBox *shareBox;
    QCheckBox *restartBox;
    QCheckBox *saveOutputBox;
    QFrame *settingsFrame;
    QLineEdit *parametersLine;
    QLabel *parametersLabel;
    QLineEdit *usernameLine;
    QLineEdit *passwordLine;
    QLineEdit *portLine;
    QLabel *rpcUsernameLabel;
    QLabel *rpcPasswordLabel;
    QLabel *rpcPortLabel;
    QLineEdit *rpcServerLine;
    QLabel *rpcServerLabel;
    QComboBox *threadsBox;
    QLabel *threadsLabel;
    QLabel *scantimeLabel;
    QLineEdit *scantimeLine;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(430, 460);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        speedTitleLabel = new QLabel(centralWidget);
        speedTitleLabel->setObjectName(QStringLiteral("speedTitleLabel"));
        speedTitleLabel->setGeometry(QRect(11, 0, 131, 31));
        mineSpeedLabel = new QLabel(centralWidget);
        mineSpeedLabel->setObjectName(QStringLiteral("mineSpeedLabel"));
        mineSpeedLabel->setGeometry(QRect(11, 20, 271, 31));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        mineSpeedLabel->setFont(font);
        startButton = new QPushButton(centralWidget);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setGeometry(QRect(320, 10, 101, 31));
        QFont font1;
        font1.setStyleStrategy(QFont::PreferAntialias);
        startButton->setFont(font1);
        shareCount = new QLabel(centralWidget);
        shareCount->setObjectName(QStringLiteral("shareCount"));
        shareCount->setGeometry(QRect(10, 430, 411, 31));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        shareCount->setFont(font2);
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 40, 431, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(-1, 260, 454, 170));
        tabWidget->setFont(font1);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        list = new QListWidget(tab);
        list->setObjectName(QStringLiteral("list"));
        list->setGeometry(QRect(0, 0, 428, 145));
        sizePolicy.setHeightForWidth(list->sizePolicy().hasHeightForWidth());
        list->setSizePolicy(sizePolicy);
        list->setFrameShape(QFrame::NoFrame);
        list->setFrameShadow(QFrame::Plain);
        list->setLineWidth(374);
        list->setAutoScrollMargin(100000);
        list->setSelectionBehavior(QAbstractItemView::SelectItems);
        list->setMovement(QListView::Snap);
        list->setProperty("isWrapping", QVariant(false));
        list->setBatchSize(10);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        apiKeyLine = new QLineEdit(tab_2);
        apiKeyLine->setObjectName(QStringLiteral("apiKeyLine"));
        apiKeyLine->setGeometry(QRect(180, 31, 241, 20));
        poolBox = new QComboBox(tab_2);
        poolBox->setObjectName(QStringLiteral("poolBox"));
        poolBox->setGeometry(QRect(10, 30, 161, 22));
        poolLabel = new QLabel(tab_2);
        poolLabel->setObjectName(QStringLiteral("poolLabel"));
        poolLabel->setGeometry(QRect(11, 10, 141, 16));
        label = new QLabel(tab_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(181, 10, 201, 16));
        updateButton = new QPushButton(tab_2);
        updateButton->setObjectName(QStringLiteral("updateButton"));
        updateButton->setGeometry(QRect(347, 0, 71, 23));
        poolData = new QTextBrowser(tab_2);
        poolData->setObjectName(QStringLiteral("poolData"));
        poolData->setGeometry(QRect(10, 60, 411, 80));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 0));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(240, 240, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        poolData->setPalette(palette);
        poolData->setFrameShape(QFrame::NoFrame);
        poolData->setFrameShadow(QFrame::Plain);
        poolData->setOpenLinks(false);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        output = new QTextBrowser(tab_3);
        output->setObjectName(QStringLiteral("output"));
        output->setGeometry(QRect(0, 0, 448, 145));
        sizePolicy.setHeightForWidth(output->sizePolicy().hasHeightForWidth());
        output->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamily(QStringLiteral("Droid Serif"));
        font3.setPointSize(9);
        output->setFont(font3);
        output->setFrameShape(QFrame::NoFrame);
        output->setOpenLinks(false);
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        shareBox = new QCheckBox(tab_4);
        shareBox->setObjectName(QStringLiteral("shareBox"));
        shareBox->setGeometry(QRect(10, 10, 411, 17));
        restartBox = new QCheckBox(tab_4);
        restartBox->setObjectName(QStringLiteral("restartBox"));
        restartBox->setGeometry(QRect(10, 30, 411, 17));
        saveOutputBox = new QCheckBox(tab_4);
        saveOutputBox->setObjectName(QStringLiteral("saveOutputBox"));
        saveOutputBox->setGeometry(QRect(10, 50, 411, 17));
        tabWidget->addTab(tab_4, QString());
        settingsFrame = new QFrame(centralWidget);
        settingsFrame->setObjectName(QStringLiteral("settingsFrame"));
        settingsFrame->setGeometry(QRect(-1, 50, 451, 211));
        settingsFrame->setFrameShape(QFrame::StyledPanel);
        settingsFrame->setFrameShadow(QFrame::Raised);
        parametersLine = new QLineEdit(settingsFrame);
        parametersLine->setObjectName(QStringLiteral("parametersLine"));
        parametersLine->setGeometry(QRect(10, 180, 411, 20));
        parametersLabel = new QLabel(settingsFrame);
        parametersLabel->setObjectName(QStringLiteral("parametersLabel"));
        parametersLabel->setGeometry(QRect(11, 150, 161, 31));
        usernameLine = new QLineEdit(settingsFrame);
        usernameLine->setObjectName(QStringLiteral("usernameLine"));
        usernameLine->setGeometry(QRect(10, 130, 151, 20));
        passwordLine = new QLineEdit(settingsFrame);
        passwordLine->setObjectName(QStringLiteral("passwordLine"));
        passwordLine->setGeometry(QRect(170, 130, 151, 20));
        portLine = new QLineEdit(settingsFrame);
        portLine->setObjectName(QStringLiteral("portLine"));
        portLine->setGeometry(QRect(330, 130, 91, 20));
        portLine->setMaxLength(5);
        rpcUsernameLabel = new QLabel(settingsFrame);
        rpcUsernameLabel->setObjectName(QStringLiteral("rpcUsernameLabel"));
        rpcUsernameLabel->setGeometry(QRect(11, 100, 155, 31));
        rpcUsernameLabel->setFont(font1);
        rpcPasswordLabel = new QLabel(settingsFrame);
        rpcPasswordLabel->setObjectName(QStringLiteral("rpcPasswordLabel"));
        rpcPasswordLabel->setGeometry(QRect(171, 100, 131, 31));
        rpcPasswordLabel->setFont(font1);
        rpcPortLabel = new QLabel(settingsFrame);
        rpcPortLabel->setObjectName(QStringLiteral("rpcPortLabel"));
        rpcPortLabel->setGeometry(QRect(331, 100, 131, 31));
        rpcPortLabel->setFont(font1);
        rpcServerLine = new QLineEdit(settingsFrame);
        rpcServerLine->setObjectName(QStringLiteral("rpcServerLine"));
        rpcServerLine->setGeometry(QRect(10, 80, 411, 20));
        rpcServerLabel = new QLabel(settingsFrame);
        rpcServerLabel->setObjectName(QStringLiteral("rpcServerLabel"));
        rpcServerLabel->setGeometry(QRect(11, 50, 431, 31));
        QFont font4;
        font4.setFamily(QStringLiteral("Droid Sans"));
        font4.setStyleStrategy(QFont::PreferAntialias);
        rpcServerLabel->setFont(font4);
        threadsBox = new QComboBox(settingsFrame);
        threadsBox->setObjectName(QStringLiteral("threadsBox"));
        threadsBox->setGeometry(QRect(10, 30, 201, 22));
        threadsLabel = new QLabel(settingsFrame);
        threadsLabel->setObjectName(QStringLiteral("threadsLabel"));
        threadsLabel->setGeometry(QRect(11, 0, 191, 31));
        threadsLabel->setFont(font1);
        scantimeLabel = new QLabel(settingsFrame);
        scantimeLabel->setObjectName(QStringLiteral("scantimeLabel"));
        scantimeLabel->setGeometry(QRect(231, 0, 181, 31));
        QFont font5;
        font5.setFamily(QStringLiteral("Droid Sans"));
        font5.setPointSize(10);
        font5.setStyleStrategy(QFont::PreferAntialias);
        scantimeLabel->setFont(font5);
        scantimeLine = new QLineEdit(settingsFrame);
        scantimeLine->setObjectName(QStringLiteral("scantimeLine"));
        scantimeLine->setGeometry(QRect(230, 31, 191, 20));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "CPU Miner - AndCoin", 0));
        speedTitleLabel->setText(QApplication::translate("MainWindow", "Speed", 0));
        mineSpeedLabel->setText(QApplication::translate("MainWindow", "N/A", 0));
        startButton->setText(QApplication::translate("MainWindow", "Start Mining", 0));
        shareCount->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Log", 0));
        poolBox->clear();
        poolBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "lpool.name", 0)
         << QApplication::translate("MainWindow", "hash4.life", 0)
         << QApplication::translate("MainWindow", "hashpool.eu", 0)
         << QApplication::translate("MainWindow", "pool.noip.ro", 0)
         << QApplication::translate("MainWindow", "crypto.n-engine.com", 0)
         << QApplication::translate("MainWindow", "blockmunch.club", 0)
         << QApplication::translate("MainWindow", "dpool.io", 0)
         << QApplication::translate("MainWindow", "pooldaddy.ws", 0)
         << QApplication::translate("MainWindow", "secretpool.ru", 0)
         << QApplication::translate("MainWindow", "doufen.com", 0)
        );
        poolLabel->setText(QApplication::translate("MainWindow", "Mining pool", 0));
        label->setText(QApplication::translate("MainWindow", "Wallet Address", 0));
        updateButton->setText(QApplication::translate("MainWindow", "Update", 0));
        poolData->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Droid Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\">Mining pool status hasn't been updated yet.</span></p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Mining Pool Status", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Output", 0));
        shareBox->setText(QApplication::translate("MainWindow", "Show system tray message on found share", 0));
        restartBox->setText(QApplication::translate("MainWindow", "Restart miner automatically after crashing", 0));
        saveOutputBox->setText(QApplication::translate("MainWindow", "Save output to a text file", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Options", 0));
        parametersLabel->setText(QApplication::translate("MainWindow", "Additional parameters", 0));
        rpcUsernameLabel->setText(QApplication::translate("MainWindow", "Worker or Username", 0));
        rpcPasswordLabel->setText(QApplication::translate("MainWindow", "Password", 0));
        rpcPortLabel->setText(QApplication::translate("MainWindow", "Port", 0));
        rpcServerLabel->setText(QApplication::translate("MainWindow", "Pool URL (\"stratum+tcp://...\") or RPC Server (\"http://...\" - solo mining)", 0));
        threadsBox->clear();
        threadsBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", 0)
         << QApplication::translate("MainWindow", "2", 0)
         << QApplication::translate("MainWindow", "3", 0)
         << QApplication::translate("MainWindow", "4", 0)
         << QApplication::translate("MainWindow", "5", 0)
         << QApplication::translate("MainWindow", "6", 0)
         << QApplication::translate("MainWindow", "7", 0)
         << QApplication::translate("MainWindow", "8", 0)
        );
        threadsLabel->setText(QApplication::translate("MainWindow", "Threads", 0));
        scantimeLabel->setText(QApplication::translate("MainWindow", "Scantime", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

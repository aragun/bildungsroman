/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit_clientId_ac;
    QLabel *label_2;
    QLineEdit *lineEdit_resource_ac;
    QLabel *label_3;
    QLineEdit *lineEdit_redirectUri_ac;
    QLabel *label_4;
    QLineEdit *lineEdit_authority_ac;
    QLabel *label_15;
    QComboBox *comboBox_promptBehavior;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonGetToken_ac;
    QTextBrowser *textBrowser_ac;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QLineEdit *lineEdit_clientId_cc;
    QLabel *label_6;
    QLineEdit *lineEdit_resource_cc;
    QLabel *label_7;
    QLineEdit *lineEdit_redirectUri_cc;
    QLabel *label_8;
    QLineEdit *lineEdit_authority_cc;
    QLabel *label_16;
    QLineEdit *lineEdit_clientSecret;
    QPushButton *pushButtonGetToken_cc;
    QTextBrowser *textBrowser_cc;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QFormLayout *formLayout_3;
    QLabel *label_9;
    QLineEdit *lineEdit_clientId_pwd;
    QLabel *label_10;
    QLineEdit *lineEdit_resource_pwd;
    QLabel *label_11;
    QLineEdit *lineEdit_redirectUri_pwd;
    QLabel *label_12;
    QLineEdit *lineEdit_authority_pwd;
    QLabel *label_14;
    QLineEdit *lineEdit_userName;
    QLabel *label_13;
    QLineEdit *lineEdit_password;
    QPushButton *pushButtonGetToken_pwd;
    QTextBrowser *textBrowser_pwd;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(753, 410);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit_clientId_ac = new QLineEdit(tab);
        lineEdit_clientId_ac->setObjectName(QStringLiteral("lineEdit_clientId_ac"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_clientId_ac);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_resource_ac = new QLineEdit(tab);
        lineEdit_resource_ac->setObjectName(QStringLiteral("lineEdit_resource_ac"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_resource_ac);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_redirectUri_ac = new QLineEdit(tab);
        lineEdit_redirectUri_ac->setObjectName(QStringLiteral("lineEdit_redirectUri_ac"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_redirectUri_ac);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lineEdit_authority_ac = new QLineEdit(tab);
        lineEdit_authority_ac->setObjectName(QStringLiteral("lineEdit_authority_ac"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_authority_ac);

        label_15 = new QLabel(tab);
        label_15->setObjectName(QStringLiteral("label_15"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_15);

        comboBox_promptBehavior = new QComboBox(tab);
        comboBox_promptBehavior->setObjectName(QStringLiteral("comboBox_promptBehavior"));
        comboBox_promptBehavior->setMaxVisibleItems(3);
        comboBox_promptBehavior->setFrame(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, comboBox_promptBehavior);


        horizontalLayout->addLayout(formLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButtonGetToken_ac = new QPushButton(tab);
        pushButtonGetToken_ac->setObjectName(QStringLiteral("pushButtonGetToken_ac"));

        verticalLayout->addWidget(pushButtonGetToken_ac);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        textBrowser_ac = new QTextBrowser(tab);
        textBrowser_ac->setObjectName(QStringLiteral("textBrowser_ac"));

        verticalLayout_2->addWidget(textBrowser_ac);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_5);

        lineEdit_clientId_cc = new QLineEdit(tab_2);
        lineEdit_clientId_cc->setObjectName(QStringLiteral("lineEdit_clientId_cc"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_clientId_cc);

        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

        lineEdit_resource_cc = new QLineEdit(tab_2);
        lineEdit_resource_cc->setObjectName(QStringLiteral("lineEdit_resource_cc"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_resource_cc);

        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_7);

        lineEdit_redirectUri_cc = new QLineEdit(tab_2);
        lineEdit_redirectUri_cc->setObjectName(QStringLiteral("lineEdit_redirectUri_cc"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEdit_redirectUri_cc);

        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_8);

        lineEdit_authority_cc = new QLineEdit(tab_2);
        lineEdit_authority_cc->setObjectName(QStringLiteral("lineEdit_authority_cc"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, lineEdit_authority_cc);

        label_16 = new QLabel(tab_2);
        label_16->setObjectName(QStringLiteral("label_16"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_16);

        lineEdit_clientSecret = new QLineEdit(tab_2);
        lineEdit_clientSecret->setObjectName(QStringLiteral("lineEdit_clientSecret"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, lineEdit_clientSecret);


        horizontalLayout_2->addLayout(formLayout_2);

        pushButtonGetToken_cc = new QPushButton(tab_2);
        pushButtonGetToken_cc->setObjectName(QStringLiteral("pushButtonGetToken_cc"));

        horizontalLayout_2->addWidget(pushButtonGetToken_cc);


        verticalLayout_3->addLayout(horizontalLayout_2);

        textBrowser_cc = new QTextBrowser(tab_2);
        textBrowser_cc->setObjectName(QStringLiteral("textBrowser_cc"));

        verticalLayout_3->addWidget(textBrowser_cc);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_5 = new QVBoxLayout(tab_3);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setSpacing(6);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_9);

        lineEdit_clientId_pwd = new QLineEdit(tab_3);
        lineEdit_clientId_pwd->setObjectName(QStringLiteral("lineEdit_clientId_pwd"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lineEdit_clientId_pwd);

        label_10 = new QLabel(tab_3);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_10);

        lineEdit_resource_pwd = new QLineEdit(tab_3);
        lineEdit_resource_pwd->setObjectName(QStringLiteral("lineEdit_resource_pwd"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, lineEdit_resource_pwd);

        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_11);

        lineEdit_redirectUri_pwd = new QLineEdit(tab_3);
        lineEdit_redirectUri_pwd->setObjectName(QStringLiteral("lineEdit_redirectUri_pwd"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, lineEdit_redirectUri_pwd);

        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_12);

        lineEdit_authority_pwd = new QLineEdit(tab_3);
        lineEdit_authority_pwd->setObjectName(QStringLiteral("lineEdit_authority_pwd"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, lineEdit_authority_pwd);

        label_14 = new QLabel(tab_3);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_14);

        lineEdit_userName = new QLineEdit(tab_3);
        lineEdit_userName->setObjectName(QStringLiteral("lineEdit_userName"));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, lineEdit_userName);

        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout_3->setWidget(5, QFormLayout::LabelRole, label_13);

        lineEdit_password = new QLineEdit(tab_3);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));

        formLayout_3->setWidget(5, QFormLayout::FieldRole, lineEdit_password);


        horizontalLayout_3->addLayout(formLayout_3);

        pushButtonGetToken_pwd = new QPushButton(tab_3);
        pushButtonGetToken_pwd->setObjectName(QStringLiteral("pushButtonGetToken_pwd"));

        horizontalLayout_3->addWidget(pushButtonGetToken_pwd);


        verticalLayout_5->addLayout(horizontalLayout_3);

        textBrowser_pwd = new QTextBrowser(tab_3);
        textBrowser_pwd->setObjectName(QStringLiteral("textBrowser_pwd"));

        verticalLayout_5->addWidget(textBrowser_pwd);

        tabWidget->addTab(tab_3, QString());

        gridLayout->addWidget(tabWidget, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
#ifndef QT_NO_SHORTCUT
        label->setBuddy(lineEdit_clientId_ac);
        label_2->setBuddy(lineEdit_clientId_ac);
        label_3->setBuddy(lineEdit_clientId_ac);
        label_4->setBuddy(lineEdit_clientId_ac);
        label_15->setBuddy(lineEdit_clientId_ac);
        label_5->setBuddy(lineEdit_clientId_ac);
        label_6->setBuddy(lineEdit_clientId_ac);
        label_7->setBuddy(lineEdit_clientId_ac);
        label_8->setBuddy(lineEdit_clientId_ac);
        label_16->setBuddy(lineEdit_clientId_ac);
        label_9->setBuddy(lineEdit_clientId_ac);
        label_10->setBuddy(lineEdit_clientId_ac);
        label_11->setBuddy(lineEdit_clientId_ac);
        label_12->setBuddy(lineEdit_clientId_ac);
        label_14->setBuddy(lineEdit_clientId_ac);
        label_13->setBuddy(lineEdit_clientId_ac);
#endif // QT_NO_SHORTCUT

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        comboBox_promptBehavior->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "RmsAuth Sample", 0));
        label->setText(QApplication::translate("MainWindow", "client_id", 0));
        lineEdit_clientId_ac->setText(QApplication::translate("MainWindow", "4a63455a-cfa1-4ac6-bd2e-0d046cf1c3f7", 0));
        label_2->setText(QApplication::translate("MainWindow", "resource", 0));
        lineEdit_resource_ac->setText(QApplication::translate("MainWindow", "api.aadrm.com", 0));
        label_3->setText(QApplication::translate("MainWindow", "redirect_uri", 0));
        lineEdit_redirectUri_ac->setText(QApplication::translate("MainWindow", "https://client.test.app", 0));
        label_4->setText(QApplication::translate("MainWindow", "authority", 0));
        lineEdit_authority_ac->setText(QApplication::translate("MainWindow", "https://sts.aadrm.com/_sts/oauth/authorize", 0));
        label_15->setText(QApplication::translate("MainWindow", "prompt", 0));
        comboBox_promptBehavior->clear();
        comboBox_promptBehavior->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Auto", 0)
         << QApplication::translate("MainWindow", "Always", 0)
         << QApplication::translate("MainWindow", "Never", 0)
        );
        comboBox_promptBehavior->setCurrentText(QApplication::translate("MainWindow", "Auto", 0));
        pushButtonGetToken_ac->setText(QApplication::translate("MainWindow", "Get token", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "authorization_code", 0));
        label_5->setText(QApplication::translate("MainWindow", "client_id", 0));
        lineEdit_clientId_cc->setText(QApplication::translate("MainWindow", "4e921ad9-69cb-4223-af1a-3a73620815e8", 0));
        label_6->setText(QApplication::translate("MainWindow", "resource", 0));
        lineEdit_resource_cc->setText(QApplication::translate("MainWindow", "https://rms.joshgav.com", 0));
        label_7->setText(QApplication::translate("MainWindow", "redirect_uri", 0));
        lineEdit_redirectUri_cc->setText(QApplication::translate("MainWindow", "https://rms.joshgav.com, https://localhost:8080/oauth2/token", 0));
        label_8->setText(QApplication::translate("MainWindow", "authority", 0));
        lineEdit_authority_cc->setText(QApplication::translate("MainWindow", "https://login.microsoftonline.com/msopentechtest01.onmicrosoft.com/oauth2/token", 0));
        label_16->setText(QApplication::translate("MainWindow", "client_secret", 0));
        lineEdit_clientSecret->setText(QString());
        pushButtonGetToken_cc->setText(QApplication::translate("MainWindow", "Get token", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "client_credentials", 0));
        label_9->setText(QApplication::translate("MainWindow", "client_id", 0));
        lineEdit_clientId_pwd->setText(QApplication::translate("MainWindow", "4a63455a-cfa1-4ac6-bd2e-0d046cf1c3f7", 0));
        label_10->setText(QApplication::translate("MainWindow", "resource", 0));
        lineEdit_resource_pwd->setText(QApplication::translate("MainWindow", "https://outlook.office365.com", 0));
        label_11->setText(QApplication::translate("MainWindow", "redirect_uri", 0));
        lineEdit_redirectUri_pwd->setText(QApplication::translate("MainWindow", "https://client.test.app", 0));
        label_12->setText(QApplication::translate("MainWindow", "authority", 0));
        lineEdit_authority_pwd->setText(QApplication::translate("MainWindow", "https://login.microsoftonline.com/common/oauth2/token", 0));
        label_14->setText(QApplication::translate("MainWindow", "user_name", 0));
        lineEdit_userName->setText(QString());
        label_13->setText(QApplication::translate("MainWindow", "password", 0));
        lineEdit_password->setText(QString());
        pushButtonGetToken_pwd->setText(QApplication::translate("MainWindow", "Get token", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "password", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

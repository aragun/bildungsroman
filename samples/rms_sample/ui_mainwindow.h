/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label_resourseId;
    QLabel *label_redirectUrl;
    QLineEdit *lineEdit_clientId;
    QLabel *label_clitntId;
    QLineEdit *lineEdit_redirectUrl;
    QLabel *label_certificatesPath;
    QPushButton *certificatesPathButton;
    QLineEdit *lineEdit_resourseId;
    QPushButton *encryptPFILETemplatesButton;
    QLineEdit *ineEdit_certificatesPath;
    QPushButton *fromPFILEButton;
    QLabel *label_clientEmail;
    QLineEdit *lineEdit_clientEmail;
    QPushButton *encryptPFILERightsButton;
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QTextBrowser *textBrowser;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(614, 345);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_resourseId = new QLabel(centralWidget);
        label_resourseId->setObjectName(QStringLiteral("label_resourseId"));

        gridLayout->addWidget(label_resourseId, 4, 0, 1, 1);

        label_redirectUrl = new QLabel(centralWidget);
        label_redirectUrl->setObjectName(QStringLiteral("label_redirectUrl"));

        gridLayout->addWidget(label_redirectUrl, 2, 0, 2, 1);

        lineEdit_clientId = new QLineEdit(centralWidget);
        lineEdit_clientId->setObjectName(QStringLiteral("lineEdit_clientId"));

        gridLayout->addWidget(lineEdit_clientId, 0, 1, 1, 1);

        label_clitntId = new QLabel(centralWidget);
        label_clitntId->setObjectName(QStringLiteral("label_clitntId"));

        gridLayout->addWidget(label_clitntId, 0, 0, 1, 1);

        lineEdit_redirectUrl = new QLineEdit(centralWidget);
        lineEdit_redirectUrl->setObjectName(QStringLiteral("lineEdit_redirectUrl"));

        gridLayout->addWidget(lineEdit_redirectUrl, 2, 1, 1, 1);

        label_certificatesPath = new QLabel(centralWidget);
        label_certificatesPath->setObjectName(QStringLiteral("label_certificatesPath"));

        gridLayout->addWidget(label_certificatesPath, 5, 0, 1, 1);

        certificatesPathButton = new QPushButton(centralWidget);
        certificatesPathButton->setObjectName(QStringLiteral("certificatesPathButton"));

        gridLayout->addWidget(certificatesPathButton, 5, 2, 1, 1);

        lineEdit_resourseId = new QLineEdit(centralWidget);
        lineEdit_resourseId->setObjectName(QStringLiteral("lineEdit_resourseId"));

        gridLayout->addWidget(lineEdit_resourseId, 3, 1, 2, 1);

        encryptPFILETemplatesButton = new QPushButton(centralWidget);
        encryptPFILETemplatesButton->setObjectName(QStringLiteral("encryptPFILETemplatesButton"));

        gridLayout->addWidget(encryptPFILETemplatesButton, 0, 2, 1, 1);

        ineEdit_certificatesPath = new QLineEdit(centralWidget);
        ineEdit_certificatesPath->setObjectName(QStringLiteral("ineEdit_certificatesPath"));

        gridLayout->addWidget(ineEdit_certificatesPath, 5, 1, 1, 1);

        fromPFILEButton = new QPushButton(centralWidget);
        fromPFILEButton->setObjectName(QStringLiteral("fromPFILEButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fromPFILEButton->sizePolicy().hasHeightForWidth());
        fromPFILEButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(fromPFILEButton, 4, 2, 1, 1);

        label_clientEmail = new QLabel(centralWidget);
        label_clientEmail->setObjectName(QStringLiteral("label_clientEmail"));

        gridLayout->addWidget(label_clientEmail, 1, 0, 1, 1);

        lineEdit_clientEmail = new QLineEdit(centralWidget);
        lineEdit_clientEmail->setObjectName(QStringLiteral("lineEdit_clientEmail"));

        gridLayout->addWidget(lineEdit_clientEmail, 1, 1, 1, 1);

        encryptPFILERightsButton = new QPushButton(centralWidget);
        encryptPFILERightsButton->setObjectName(QStringLiteral("encryptPFILERightsButton"));

        gridLayout->addWidget(encryptPFILERightsButton, 1, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));

        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout);

        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy1);
        splitter->setOrientation(Qt::Horizontal);
        textBrowser = new QTextBrowser(splitter);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        sizePolicy1.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy1);
        splitter->addWidget(textBrowser);

        verticalLayout->addWidget(splitter);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(lineEdit_clientId, lineEdit_clientEmail);
        QWidget::setTabOrder(lineEdit_clientEmail, lineEdit_redirectUrl);
        QWidget::setTabOrder(lineEdit_redirectUrl, lineEdit_resourseId);
        QWidget::setTabOrder(lineEdit_resourseId, ineEdit_certificatesPath);
        QWidget::setTabOrder(ineEdit_certificatesPath, textBrowser);
        QWidget::setTabOrder(textBrowser, encryptPFILETemplatesButton);
        QWidget::setTabOrder(encryptPFILETemplatesButton, encryptPFILERightsButton);
        QWidget::setTabOrder(encryptPFILERightsButton, fromPFILEButton);
        QWidget::setTabOrder(fromPFILEButton, certificatesPathButton);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_resourseId->setText(QApplication::translate("MainWindow", "Resource ID", 0));
        label_redirectUrl->setText(QApplication::translate("MainWindow", "Redirect URI", 0));
        lineEdit_clientId->setText(QApplication::translate("MainWindow", "4a63455a-cfa1-4ac6-bd2e-0d046cf1c3f7", 0));
        label_clitntId->setText(QApplication::translate("MainWindow", "Client ID", 0));
        lineEdit_redirectUrl->setText(QApplication::translate("MainWindow", "https://client.test.app", 0));
        label_certificatesPath->setText(QApplication::translate("MainWindow", "Certificates path", 0));
        certificatesPathButton->setText(QApplication::translate("MainWindow", "Browse...", 0));
        lineEdit_resourseId->setText(QApplication::translate("MainWindow", "api.aadrm.com", 0));
        encryptPFILETemplatesButton->setText(QApplication::translate("MainWindow", "Encrypt Async (templates)", 0));
        ineEdit_certificatesPath->setText(QApplication::translate("MainWindow", "./certificates/", 0));
        fromPFILEButton->setText(QApplication::translate("MainWindow", "Decrypt PFILE", 0));
        label_clientEmail->setText(QApplication::translate("MainWindow", "Client Email", 0));
        lineEdit_clientEmail->setText(QApplication::translate("MainWindow", "john.smith@msopentechtest01.onmicrosoft.com", 0));
        encryptPFILERightsButton->setText(QApplication::translate("MainWindow", "Encrypt  Sync (rights)", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

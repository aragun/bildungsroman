/********************************************************************************
** Form generated from reading UI file 'consentlistdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSENTLISTDIALOG_H
#define UI_CONSENTLISTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ConsentListDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QCheckBox *checkBox;
    QTableView *ConsentTableView;

    void setupUi(QDialog *ConsentListDialog)
    {
        if (ConsentListDialog->objectName().isEmpty())
            ConsentListDialog->setObjectName(QStringLiteral("ConsentListDialog"));
        ConsentListDialog->setWindowModality(Qt::WindowModal);
        ConsentListDialog->resize(400, 300);
        ConsentListDialog->setSizeGripEnabled(false);
        ConsentListDialog->setModal(true);
        buttonBox = new QDialogButtonBox(ConsentListDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 260, 371, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::No|QDialogButtonBox::Yes);
        label = new QLabel(ConsentListDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 371, 16));
        checkBox = new QCheckBox(ConsentListDialog);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(10, 230, 371, 17));
        ConsentTableView = new QTableView(ConsentListDialog);
        ConsentTableView->setObjectName(QStringLiteral("ConsentTableView"));
        ConsentTableView->setGeometry(QRect(10, 30, 371, 192));

        retranslateUi(ConsentListDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ConsentListDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ConsentListDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ConsentListDialog);
    } // setupUi

    void retranslateUi(QDialog *ConsentListDialog)
    {
        ConsentListDialog->setWindowTitle(QApplication::translate("ConsentListDialog", "Accept given requests", 0));
        label->setText(QApplication::translate("ConsentListDialog", "<html><head/><body><p>Please confirm URLs request:</p></body></html>", 0));
        checkBox->setText(QApplication::translate("ConsentListDialog", "Don't show it again for current user and URL", 0));
    } // retranslateUi

};

namespace Ui {
    class ConsentListDialog: public Ui_ConsentListDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSENTLISTDIALOG_H

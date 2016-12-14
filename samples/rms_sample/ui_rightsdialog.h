/********************************************************************************
** Form generated from reading UI file 'rightsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RIGHTSDIALOG_H
#define UI_RIGHTSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_RightsDialog
{
public:
    QDialogButtonBox *buttonBox;
    QTableView *UserRightsView;

    void setupUi(QDialog *RightsDialog)
    {
        if (RightsDialog->objectName().isEmpty())
            RightsDialog->setObjectName(QStringLiteral("RightsDialog"));
        RightsDialog->resize(627, 300);
        buttonBox = new QDialogButtonBox(RightsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 240, 601, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        UserRightsView = new QTableView(RightsDialog);
        UserRightsView->setObjectName(QStringLiteral("UserRightsView"));
        UserRightsView->setGeometry(QRect(10, 10, 601, 221));

        retranslateUi(RightsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RightsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RightsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RightsDialog);
    } // setupUi

    void retranslateUi(QDialog *RightsDialog)
    {
        RightsDialog->setWindowTitle(QApplication::translate("RightsDialog", "Specify users and rights", 0));
    } // retranslateUi

};

namespace Ui {
    class RightsDialog: public Ui_RightsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIGHTSDIALOG_H

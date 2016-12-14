/********************************************************************************
** Form generated from reading UI file 'templatesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEMPLATESDIALOG_H
#define UI_TEMPLATESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_TemplatesDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QComboBox *comboBoxTemplates;

    void setupUi(QDialog *TemplatesDialog)
    {
        if (TemplatesDialog->objectName().isEmpty())
            TemplatesDialog->setObjectName(QStringLiteral("TemplatesDialog"));
        TemplatesDialog->resize(400, 107);
        buttonBox = new QDialogButtonBox(TemplatesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 60, 381, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(TemplatesDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 151, 16));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        comboBoxTemplates = new QComboBox(TemplatesDialog);
        comboBoxTemplates->setObjectName(QStringLiteral("comboBoxTemplates"));
        comboBoxTemplates->setGeometry(QRect(200, 17, 181, 22));

        retranslateUi(TemplatesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TemplatesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TemplatesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TemplatesDialog);
    } // setupUi

    void retranslateUi(QDialog *TemplatesDialog)
    {
        TemplatesDialog->setWindowTitle(QApplication::translate("TemplatesDialog", "Dialog", 0));
        label->setText(QApplication::translate("TemplatesDialog", "Select template from list:", 0));
    } // retranslateUi

};

namespace Ui {
    class TemplatesDialog: public Ui_TemplatesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMPLATESDIALOG_H

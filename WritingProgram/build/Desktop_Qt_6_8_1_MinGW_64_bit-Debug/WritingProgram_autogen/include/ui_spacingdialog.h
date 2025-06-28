/********************************************************************************
** Form generated from reading UI file 'spacingdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPACINGDIALOG_H
#define UI_SPACINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_SpacingDialog
{
public:
    QGridLayout *gridLayout;
    QDoubleSpinBox *spacingBox;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SpacingDialog)
    {
        if (SpacingDialog->objectName().isEmpty())
            SpacingDialog->setObjectName("SpacingDialog");
        SpacingDialog->resize(400, 300);
        gridLayout = new QGridLayout(SpacingDialog);
        gridLayout->setObjectName("gridLayout");
        spacingBox = new QDoubleSpinBox(SpacingDialog);
        spacingBox->setObjectName("spacingBox");
        spacingBox->setValue(1.000000000000000);

        gridLayout->addWidget(spacingBox, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(SpacingDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        gridLayout->addWidget(buttonBox, 3, 1, 1, 1);


        retranslateUi(SpacingDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SpacingDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SpacingDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SpacingDialog);
    } // setupUi

    void retranslateUi(QDialog *SpacingDialog)
    {
        SpacingDialog->setWindowTitle(QCoreApplication::translate("SpacingDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SpacingDialog: public Ui_SpacingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPACINGDIALOG_H

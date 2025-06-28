#include "spacingdialog.h"
#include "ui_spacingdialog.h"

SpacingDialog::SpacingDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SpacingDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Spacing");
    this->setModal(true);
}

SpacingDialog::~SpacingDialog()
{
    delete ui;
}

void SpacingDialog::on_buttonBox_accepted()
{
    spaceValue = ui->spacingBox->value();
}


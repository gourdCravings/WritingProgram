#ifndef SPACINGDIALOG_H
#define SPACINGDIALOG_H

#include <QDialog>


namespace Ui {
class SpacingDialog;
}

class SpacingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SpacingDialog(QWidget *parent = nullptr);
    ~SpacingDialog();
    qreal spaceValue;

private slots:
    void on_buttonBox_accepted();

private:
    Ui::SpacingDialog *ui;
};

#endif // SPACINGDIALOG_H

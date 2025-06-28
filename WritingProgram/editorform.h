#ifndef EDITORFORM_H
#define EDITORFORM_H

#include <QWidget>
#include <QToolButton>
#include <QAction>
#include <QMenu>
#include <QTextEdit>

namespace Ui {
class EditorForm;
}

class EditorForm : public QWidget
{
    Q_OBJECT

public:
    explicit EditorForm(QWidget *parent = nullptr);
    ~EditorForm();

private slots:
    void on_spacingButton_clicked();

private:
    Ui::EditorForm *ui;
    void makeButtons();
};

#endif // EDITORFORM_H

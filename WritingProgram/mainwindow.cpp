#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "editorform.h"
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // create default editor window
    EditorForm *editor = new EditorForm();
    QVBoxLayout *tabLayout = new QVBoxLayout();
    tabLayout->addWidget(editor);
    ui->tab->setLayout(tabLayout);
}

MainWindow::~MainWindow()
{
    delete ui;
}

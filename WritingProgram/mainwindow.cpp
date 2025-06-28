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
    tabLayout->addWidget(editor);
    ui->tab->setLayout(tabLayout);

    // connect actions
    connect(ui->notepadAction, &QAction::triggered,
            this, &MainWindow::openNotepad);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openNotepad()
{
    ui->centralwidget->layout()->addWidget(notepad);
}

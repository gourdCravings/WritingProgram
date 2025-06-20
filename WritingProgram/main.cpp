// 6/20/2025 -- beginning of project, simple QTextEdit + QFontComboBox template

#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

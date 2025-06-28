/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *openProjectAction;
    QAction *openFileAction;
    QAction *saveAction;
    QAction *newProjectAction;
    QAction *newChapterAction;
    QAction *notepadAction;
    QAction *saveAsAction;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QMenuBar *menubar;
    QMenu *fileMenu;
    QMenu *openMenu;
    QMenu *saveMenu;
    QMenu *newMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        openProjectAction = new QAction(MainWindow);
        openProjectAction->setObjectName("openProjectAction");
        openFileAction = new QAction(MainWindow);
        openFileAction->setObjectName("openFileAction");
        saveAction = new QAction(MainWindow);
        saveAction->setObjectName("saveAction");
        newProjectAction = new QAction(MainWindow);
        newProjectAction->setObjectName("newProjectAction");
        newChapterAction = new QAction(MainWindow);
        newChapterAction->setObjectName("newChapterAction");
        notepadAction = new QAction(MainWindow);
        notepadAction->setObjectName("notepadAction");
        saveAsAction = new QAction(MainWindow);
        saveAsAction->setObjectName("saveAsAction");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());

        horizontalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        fileMenu = new QMenu(menubar);
        fileMenu->setObjectName("fileMenu");
        openMenu = new QMenu(fileMenu);
        openMenu->setObjectName("openMenu");
        saveMenu = new QMenu(fileMenu);
        saveMenu->setObjectName("saveMenu");
        newMenu = new QMenu(fileMenu);
        newMenu->setObjectName("newMenu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(fileMenu->menuAction());
        fileMenu->addAction(newMenu->menuAction());
        fileMenu->addAction(openMenu->menuAction());
        fileMenu->addAction(saveMenu->menuAction());
        openMenu->addAction(openProjectAction);
        openMenu->addAction(openFileAction);
        openMenu->addAction(notepadAction);
        saveMenu->addAction(saveAction);
        saveMenu->addAction(saveAsAction);
        newMenu->addAction(newProjectAction);
        newMenu->addAction(newChapterAction);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        openProjectAction->setText(QCoreApplication::translate("MainWindow", "Project", nullptr));
#if QT_CONFIG(shortcut)
        openProjectAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        openFileAction->setText(QCoreApplication::translate("MainWindow", "File", nullptr));
#if QT_CONFIG(shortcut)
        openFileAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+O", nullptr));
#endif // QT_CONFIG(shortcut)
        saveAction->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
#if QT_CONFIG(tooltip)
        saveAction->setToolTip(QCoreApplication::translate("MainWindow", "Save", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        saveAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        newProjectAction->setText(QCoreApplication::translate("MainWindow", "Project", nullptr));
#if QT_CONFIG(shortcut)
        newProjectAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+N", nullptr));
#endif // QT_CONFIG(shortcut)
        newChapterAction->setText(QCoreApplication::translate("MainWindow", "Chapter", nullptr));
#if QT_CONFIG(shortcut)
        newChapterAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        notepadAction->setText(QCoreApplication::translate("MainWindow", "Notepad", nullptr));
#if QT_CONFIG(shortcut)
        notepadAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        saveAsAction->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
#if QT_CONFIG(tooltip)
        saveAsAction->setToolTip(QCoreApplication::translate("MainWindow", "Save As", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        saveAsAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+S", nullptr));
#endif // QT_CONFIG(shortcut)
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        fileMenu->setTitle(QCoreApplication::translate("MainWindow", "File...", nullptr));
        openMenu->setTitle(QCoreApplication::translate("MainWindow", "Open...", nullptr));
        saveMenu->setTitle(QCoreApplication::translate("MainWindow", "Save...", nullptr));
        newMenu->setTitle(QCoreApplication::translate("MainWindow", "New...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

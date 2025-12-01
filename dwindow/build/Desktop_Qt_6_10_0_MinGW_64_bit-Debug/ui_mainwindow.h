/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionClose;
    QAction *actionSave;
    QAction *actionASave;
    QAction *actionQuit;
    QAction *actionReduction;
    QAction *actionRemake;
    QAction *actionClip;
    QAction *actionCopy;
    QAction *actionAll;
    QAction *actionPaste;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actionFullScreen;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu_F;
    QMenu *menu_E;
    QMenu *menu_V;
    QStatusBar *statusbar;
    QToolBar *fileToolBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName("actionNew");
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName("actionClose");
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        actionASave = new QAction(MainWindow);
        actionASave->setObjectName("actionASave");
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName("actionQuit");
        actionReduction = new QAction(MainWindow);
        actionReduction->setObjectName("actionReduction");
        actionRemake = new QAction(MainWindow);
        actionRemake->setObjectName("actionRemake");
        actionClip = new QAction(MainWindow);
        actionClip->setObjectName("actionClip");
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName("actionCopy");
        actionAll = new QAction(MainWindow);
        actionAll->setObjectName("actionAll");
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName("actionPaste");
        actionZoomIn = new QAction(MainWindow);
        actionZoomIn->setObjectName("actionZoomIn");
        actionZoomOut = new QAction(MainWindow);
        actionZoomOut->setObjectName("actionZoomOut");
        actionFullScreen = new QAction(MainWindow);
        actionFullScreen->setObjectName("actionFullScreen");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        menu_F = new QMenu(menubar);
        menu_F->setObjectName("menu_F");
        menu_E = new QMenu(menubar);
        menu_E->setObjectName("menu_E");
        menu_V = new QMenu(menubar);
        menu_V->setObjectName("menu_V");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        fileToolBar = new QToolBar(MainWindow);
        fileToolBar->setObjectName("fileToolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, fileToolBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menu_F->menuAction());
        menubar->addAction(menu_E->menuAction());
        menubar->addAction(menu_V->menuAction());
        menu_F->addAction(actionNew);
        menu_F->addAction(actionOpen);
        menu_F->addAction(actionClose);
        menu_F->addSeparator();
        menu_F->addAction(actionSave);
        menu_F->addAction(actionASave);
        menu_F->addSeparator();
        menu_F->addAction(actionQuit);
        menu_E->addAction(actionReduction);
        menu_E->addAction(actionRemake);
        menu_E->addAction(actionClip);
        menu_E->addAction(actionCopy);
        menu_E->addAction(actionAll);
        menu_E->addAction(actionPaste);
        menu_V->addAction(actionZoomIn);
        menu_V->addAction(actionZoomOut);
        menu_V->addSeparator();
        menu_V->addAction(actionFullScreen);
        fileToolBar->addAction(actionOpen);
        fileToolBar->addAction(actionClose);
        fileToolBar->addAction(actionSave);
        fileToolBar->addSeparator();
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionAll);
        toolBar->addAction(actionPaste);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\242\236(&N)", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("MainWindow", "\351\226\213\345\225\237(&O)", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClose->setText(QCoreApplication::translate("MainWindow", "\351\227\234\351\226\211(&C)", nullptr));
#if QT_CONFIG(shortcut)
        actionClose->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWindow", "\345\204\262\345\255\230(&S)", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionASave->setText(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230\346\226\260\346\252\224(&A)", nullptr));
#if QT_CONFIG(shortcut)
        actionASave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionQuit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272(&X)", nullptr));
#if QT_CONFIG(shortcut)
        actionQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionReduction->setText(QCoreApplication::translate("MainWindow", "\351\202\204\345\216\237(&Z)", nullptr));
#if QT_CONFIG(shortcut)
        actionReduction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRemake->setText(QCoreApplication::translate("MainWindow", "\351\207\215\344\275\234(&Y)", nullptr));
#if QT_CONFIG(shortcut)
        actionRemake->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClip->setText(QCoreApplication::translate("MainWindow", "\345\211\252\344\270\213(&X)", nullptr));
#if QT_CONFIG(shortcut)
        actionClip->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("MainWindow", "\350\244\207\350\243\275(&C)", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAll->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\201\270(&A)", nullptr));
#if QT_CONFIG(shortcut)
        actionAll->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("MainWindow", "\350\262\274\344\270\212(&V)", nullptr));
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoomIn->setText(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247(&+)", nullptr));
#if QT_CONFIG(shortcut)
        actionZoomIn->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl++", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoomOut->setText(QCoreApplication::translate("MainWindow", "\347\270\256\345\260\217(&-)", nullptr));
#if QT_CONFIG(shortcut)
        actionZoomOut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+-", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFullScreen->setText(QCoreApplication::translate("MainWindow", "\345\205\250\350\236\242\345\271\225(&F)", nullptr));
#if QT_CONFIG(shortcut)
        actionFullScreen->setShortcut(QCoreApplication::translate("MainWindow", "F11", nullptr));
#endif // QT_CONFIG(shortcut)
        menu_F->setTitle(QCoreApplication::translate("MainWindow", "\346\252\224\346\241\210", nullptr));
        menu_E->setTitle(QCoreApplication::translate("MainWindow", "\347\267\250\350\274\257", nullptr));
        menu_V->setTitle(QCoreApplication::translate("MainWindow", "\346\252\242\350\246\226", nullptr));
        fileToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

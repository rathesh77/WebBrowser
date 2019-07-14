/********************************************************************************
** Form generated from reading UI file 'Boogle.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOGLE_H
#define UI_BOOGLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BoogleClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BoogleClass)
    {
        if (BoogleClass->objectName().isEmpty())
            BoogleClass->setObjectName(QString::fromUtf8("BoogleClass"));
        BoogleClass->resize(600, 400);
        menuBar = new QMenuBar(BoogleClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        BoogleClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BoogleClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        BoogleClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(BoogleClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        BoogleClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(BoogleClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        BoogleClass->setStatusBar(statusBar);

        retranslateUi(BoogleClass);

        QMetaObject::connectSlotsByName(BoogleClass);
    } // setupUi

    void retranslateUi(QMainWindow *BoogleClass)
    {
        BoogleClass->setWindowTitle(QCoreApplication::translate("BoogleClass", "Boogle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BoogleClass: public Ui_BoogleClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOGLE_H

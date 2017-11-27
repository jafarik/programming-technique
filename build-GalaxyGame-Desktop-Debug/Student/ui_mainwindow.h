/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *start_game_button;
    QPushButton *quite_game_button;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(570, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        start_game_button = new QPushButton(centralwidget);
        start_game_button->setObjectName(QStringLiteral("start_game_button"));
        start_game_button->setGeometry(QRect(160, 176, 241, 71));
        quite_game_button = new QPushButton(centralwidget);
        quite_game_button->setObjectName(QStringLiteral("quite_game_button"));
        quite_game_button->setGeometry(QRect(160, 290, 241, 71));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(quite_game_button, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(start_game_button, SIGNAL(clicked()), MainWindow, SLOT(hide()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        start_game_button->setText(QApplication::translate("MainWindow", "Play Game", 0));
        quite_game_button->setText(QApplication::translate("MainWindow", "Quit", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

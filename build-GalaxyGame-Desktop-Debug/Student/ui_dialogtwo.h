/********************************************************************************
** Form generated from reading UI file 'dialogtwo.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGTWO_H
#define UI_DIALOGTWO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_DialogTwo
{
public:

    void setupUi(QDialog *DialogTwo)
    {
        if (DialogTwo->objectName().isEmpty())
            DialogTwo->setObjectName(QStringLiteral("DialogTwo"));
        DialogTwo->resize(400, 300);

        retranslateUi(DialogTwo);

        QMetaObject::connectSlotsByName(DialogTwo);
    } // setupUi

    void retranslateUi(QDialog *DialogTwo)
    {
        DialogTwo->setWindowTitle(QApplication::translate("DialogTwo", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogTwo: public Ui_DialogTwo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGTWO_H

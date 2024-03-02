/********************************************************************************
** Form generated from reading UI file 'welcomewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWINDOW_H
#define UI_WELCOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WelcomeWindow
{
public:
    QLabel *image;
    QLabel *welcome;
    QPushButton *Logout;

    void setupUi(QDialog *WelcomeWindow)
    {
        if (WelcomeWindow->objectName().isEmpty())
            WelcomeWindow->setObjectName("WelcomeWindow");
        WelcomeWindow->resize(400, 300);
        image = new QLabel(WelcomeWindow);
        image->setObjectName("image");
        image->setGeometry(QRect(10, 40, 371, 211));
        welcome = new QLabel(WelcomeWindow);
        welcome->setObjectName("welcome");
        welcome->setGeometry(QRect(10, 10, 381, 31));
        Logout = new QPushButton(WelcomeWindow);
        Logout->setObjectName("Logout");
        Logout->setGeometry(QRect(10, 260, 93, 29));

        retranslateUi(WelcomeWindow);

        QMetaObject::connectSlotsByName(WelcomeWindow);
    } // setupUi

    void retranslateUi(QDialog *WelcomeWindow)
    {
        WelcomeWindow->setWindowTitle(QCoreApplication::translate("WelcomeWindow", "Dialog", nullptr));
        image->setText(QString());
        welcome->setText(QCoreApplication::translate("WelcomeWindow", "Hello ..", nullptr));
        Logout->setText(QCoreApplication::translate("WelcomeWindow", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeWindow: public Ui_WelcomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW_H

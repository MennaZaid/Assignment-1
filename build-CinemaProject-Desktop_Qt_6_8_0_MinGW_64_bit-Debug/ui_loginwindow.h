/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QLabel *username;
    QLabel *Password;
    QLineEdit *name;
    QLineEdit *pass;
    QPushButton *Login;
    QPushButton *Register;
    QLabel *error;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(800, 600);
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName("centralwidget");
        username = new QLabel(centralwidget);
        username->setObjectName("username");
        username->setGeometry(QRect(22, 70, 81, 20));
        Password = new QLabel(centralwidget);
        Password->setObjectName("Password");
        Password->setGeometry(QRect(40, 120, 63, 20));
        name = new QLineEdit(centralwidget);
        name->setObjectName("name");
        name->setGeometry(QRect(120, 70, 113, 26));
        pass = new QLineEdit(centralwidget);
        pass->setObjectName("pass");
        pass->setGeometry(QRect(120, 110, 113, 26));
        pass->setEchoMode(QLineEdit::Password);
        Login = new QPushButton(centralwidget);
        Login->setObjectName("Login");
        Login->setGeometry(QRect(30, 170, 93, 29));
        Register = new QPushButton(centralwidget);
        Register->setObjectName("Register");
        Register->setGeometry(QRect(170, 170, 93, 29));
        error = new QLabel(centralwidget);
        error->setObjectName("error");
        error->setGeometry(QRect(40, 150, 261, 20));
        LoginWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        LoginWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginWindow);
        statusbar->setObjectName("statusbar");
        LoginWindow->setStatusBar(statusbar);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "LoginWindow", nullptr));
        username->setText(QCoreApplication::translate("LoginWindow", "Username", nullptr));
        Password->setText(QCoreApplication::translate("LoginWindow", "Password", nullptr));
        Login->setText(QCoreApplication::translate("LoginWindow", "Login", nullptr));
        Register->setText(QCoreApplication::translate("LoginWindow", "Register", nullptr));
        error->setText(QCoreApplication::translate("LoginWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">Error : wrong username or password</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H

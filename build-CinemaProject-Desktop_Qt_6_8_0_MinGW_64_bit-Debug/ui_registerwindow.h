/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_RegisterWindow
{
public:
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *passwordsMatchError;
    QLabel *invalidAge;
    QGroupBox *groupBox;
    QComboBox *month;
    QLineEdit *day;
    QLineEdit *year;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_7;
    QGroupBox *groupBox_2;
    QRadioButton *male;
    QRadioButton *female;
    QGroupBox *groupBox_3;
    QRadioButton *user;
    QRadioButton *admin;
    QLabel *alreadyexists;
    QGroupBox *groupBox_4;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QLabel *allfileds;
    QPushButton *Register;
    QLineEdit *password;
    QLineEdit *usernameline;
    QLineEdit *retypepassword;

    void setupUi(QDialog *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName("RegisterWindow");
        RegisterWindow->resize(455, 611);
        label = new QLabel(RegisterWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 40, 81, 20));
        label_3 = new QLabel(RegisterWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 80, 63, 20));
        label_4 = new QLabel(RegisterWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 120, 121, 20));
        passwordsMatchError = new QLabel(RegisterWindow);
        passwordsMatchError->setObjectName("passwordsMatchError");
        passwordsMatchError->setGeometry(QRect(250, 80, 111, 20));
        passwordsMatchError->setTextFormat(Qt::AutoText);
        passwordsMatchError->setScaledContents(false);
        invalidAge = new QLabel(RegisterWindow);
        invalidAge->setObjectName("invalidAge");
        invalidAge->setGeometry(QRect(290, 180, 121, 20));
        groupBox = new QGroupBox(RegisterWindow);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 160, 281, 91));
        month = new QComboBox(groupBox);
        month->addItem(QString());
        month->addItem(QString());
        month->addItem(QString());
        month->addItem(QString());
        month->addItem(QString());
        month->addItem(QString());
        month->addItem(QString());
        month->addItem(QString());
        month->addItem(QString());
        month->addItem(QString());
        month->addItem(QString());
        month->addItem(QString());
        month->setObjectName("month");
        month->setGeometry(QRect(10, 50, 80, 26));
        day = new QLineEdit(groupBox);
        day->setObjectName("day");
        day->setGeometry(QRect(110, 50, 71, 26));
        year = new QLineEdit(groupBox);
        year->setObjectName("year");
        year->setGeometry(QRect(200, 50, 71, 26));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(200, 20, 63, 20));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(110, 30, 63, 20));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 30, 63, 20));
        groupBox_2 = new QGroupBox(RegisterWindow);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(0, 260, 161, 80));
        male = new QRadioButton(groupBox_2);
        male->setObjectName("male");
        male->setGeometry(QRect(10, 20, 110, 24));
        female = new QRadioButton(groupBox_2);
        female->setObjectName("female");
        female->setGeometry(QRect(10, 50, 110, 24));
        groupBox_3 = new QGroupBox(RegisterWindow);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(180, 260, 171, 80));
        user = new QRadioButton(groupBox_3);
        user->setObjectName("user");
        user->setGeometry(QRect(10, 20, 110, 24));
        admin = new QRadioButton(groupBox_3);
        admin->setObjectName("admin");
        admin->setGeometry(QRect(10, 50, 110, 24));
        alreadyexists = new QLabel(RegisterWindow);
        alreadyexists->setObjectName("alreadyexists");
        alreadyexists->setGeometry(QRect(250, 50, 111, 20));
        groupBox_4 = new QGroupBox(RegisterWindow);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(0, 350, 331, 171));
        checkBox = new QCheckBox(groupBox_4);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(10, 30, 91, 24));
        checkBox_2 = new QCheckBox(groupBox_4);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(10, 60, 91, 24));
        checkBox_3 = new QCheckBox(groupBox_4);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setGeometry(QRect(10, 90, 91, 24));
        checkBox_4 = new QCheckBox(groupBox_4);
        checkBox_4->setObjectName("checkBox_4");
        checkBox_4->setGeometry(QRect(120, 30, 91, 24));
        checkBox_5 = new QCheckBox(groupBox_4);
        checkBox_5->setObjectName("checkBox_5");
        checkBox_5->setGeometry(QRect(120, 60, 91, 24));
        checkBox_6 = new QCheckBox(groupBox_4);
        checkBox_6->setObjectName("checkBox_6");
        checkBox_6->setGeometry(QRect(120, 90, 91, 24));
        allfileds = new QLabel(RegisterWindow);
        allfileds->setObjectName("allfileds");
        allfileds->setGeometry(QRect(140, 530, 181, 20));
        allfileds->setToolTipDuration(-34);
        Register = new QPushButton(RegisterWindow);
        Register->setObjectName("Register");
        Register->setGeometry(QRect(10, 530, 93, 29));
        password = new QLineEdit(RegisterWindow);
        password->setObjectName("password");
        password->setGeometry(QRect(90, 80, 113, 26));
        password->setEchoMode(QLineEdit::Password);
        usernameline = new QLineEdit(RegisterWindow);
        usernameline->setObjectName("usernameline");
        usernameline->setGeometry(QRect(90, 40, 113, 26));
        retypepassword = new QLineEdit(RegisterWindow);
        retypepassword->setObjectName("retypepassword");
        retypepassword->setGeometry(QRect(140, 120, 113, 26));
        retypepassword->setEchoMode(QLineEdit::Password);
        groupBox->raise();
        label->raise();
        label_3->raise();
        label_4->raise();
        passwordsMatchError->raise();
        invalidAge->raise();
        groupBox_2->raise();
        groupBox_3->raise();
        alreadyexists->raise();
        groupBox_4->raise();
        allfileds->raise();
        Register->raise();
        password->raise();
        usernameline->raise();
        retypepassword->raise();

        retranslateUi(RegisterWindow);

        QMetaObject::connectSlotsByName(RegisterWindow);
    } // setupUi

    void retranslateUi(QDialog *RegisterWindow)
    {
        RegisterWindow->setWindowTitle(QCoreApplication::translate("RegisterWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("RegisterWindow", "UserName:", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterWindow", "Password", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterWindow", "Re-type Password", nullptr));
        passwordsMatchError->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">*Not Matching</span></p></body></html>", nullptr));
        invalidAge->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">*Age must be at least 12</span></p></body></html>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("RegisterWindow", "Date Of Birth", nullptr));
        month->setItemText(0, QCoreApplication::translate("RegisterWindow", "January", nullptr));
        month->setItemText(1, QCoreApplication::translate("RegisterWindow", "February", nullptr));
        month->setItemText(2, QCoreApplication::translate("RegisterWindow", "March", nullptr));
        month->setItemText(3, QCoreApplication::translate("RegisterWindow", "April", nullptr));
        month->setItemText(4, QCoreApplication::translate("RegisterWindow", "May", nullptr));
        month->setItemText(5, QCoreApplication::translate("RegisterWindow", "June", nullptr));
        month->setItemText(6, QCoreApplication::translate("RegisterWindow", "July", nullptr));
        month->setItemText(7, QCoreApplication::translate("RegisterWindow", "August", nullptr));
        month->setItemText(8, QCoreApplication::translate("RegisterWindow", "September", nullptr));
        month->setItemText(9, QCoreApplication::translate("RegisterWindow", "October", nullptr));
        month->setItemText(10, QCoreApplication::translate("RegisterWindow", "Novermber", nullptr));
        month->setItemText(11, QCoreApplication::translate("RegisterWindow", "December", nullptr));

        day->setText(QString());
        label_9->setText(QCoreApplication::translate("RegisterWindow", "Year", nullptr));
        label_8->setText(QCoreApplication::translate("RegisterWindow", "Day", nullptr));
        label_7->setText(QCoreApplication::translate("RegisterWindow", "Month", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("RegisterWindow", "Gender", nullptr));
        male->setText(QCoreApplication::translate("RegisterWindow", "Male", nullptr));
        female->setText(QCoreApplication::translate("RegisterWindow", "Female", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("RegisterWindow", "Account Type", nullptr));
        user->setText(QCoreApplication::translate("RegisterWindow", "User", nullptr));
        admin->setText(QCoreApplication::translate("RegisterWindow", "Admin", nullptr));
        alreadyexists->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">*Username Already Exists</span></p></body></html>", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("RegisterWindow", "Favourite Genre(s)", nullptr));
        checkBox->setText(QCoreApplication::translate("RegisterWindow", "Action", nullptr));
        checkBox_2->setText(QCoreApplication::translate("RegisterWindow", "Comedy", nullptr));
        checkBox_3->setText(QCoreApplication::translate("RegisterWindow", "Romance", nullptr));
        checkBox_4->setText(QCoreApplication::translate("RegisterWindow", "Drama", nullptr));
        checkBox_5->setText(QCoreApplication::translate("RegisterWindow", "Horror", nullptr));
        checkBox_6->setText(QCoreApplication::translate("RegisterWindow", "Other", nullptr));
#if QT_CONFIG(tooltip)
        allfileds->setToolTip(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        allfileds->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">*All fields must be filled</span></p></body></html>", nullptr));
        Register->setText(QCoreApplication::translate("RegisterWindow", "Register", nullptr));
        password->setText(QString());
        retypepassword->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H

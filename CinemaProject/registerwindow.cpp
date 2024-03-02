#include "registerwindow.h"
#include "ui_registerwindow.h"
#include "Users.h"
#include "welcomewindow.h"

RegisterWindow::RegisterWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);

    ui->passwordsMatchError->setVisible(false);
    ui->invalidAge->setVisible(false);
    ui->allfileds->setVisible(false);
    ui->alreadyexists->setVisible(false);
}

RegisterWindow::~RegisterWindow()
{
    delete ui;
}



void RegisterWindow::on_Register_clicked()
{
    ui->allfileds->setVisible(false);
    ui->alreadyexists->setVisible(false);
    ui->passwordsMatchError->setVisible(false);
    ui->invalidAge->setVisible(false);

    QString password = ui->password->text();
    QString retypedPassword = ui->retypepassword->text();
    QString username = ui->usernameline->text();

    QString year = ui->year->text();
    QString day = ui->day->text();
    QString month = ui->month->currentText();

    bool isFemale = ui->female->isChecked();
    bool isMale = ui->male->isChecked();

    bool isAdmin = ui->admin->isChecked();
    bool isUser = ui->user->isChecked();

    bool invalid = false;

    if (password != retypedPassword)
    {
        ui->passwordsMatchError->setVisible(true);
        invalid = true;
    }

    if (!((isFemale || isMale) && (isAdmin || isUser)))
    {
        ui->allfileds->setVisible(true);
        invalid = true;
    }

    if(2024 - year.toInt() < 12)
    {
        ui->invalidAge->setVisible(true);
        invalid = true;
    }

    if (!invalid)
    {
        int index = usersCount++;
        usernames[index] = username;
        passwords[index] = password;
        ages[index] = (2024 - year.toInt());
        destroy();
        WelcomeWindow* welcomewindow = new WelcomeWindow(this->parentWidget(), username, QString::number(ages[index]));
        welcomewindow->show();
    }
}

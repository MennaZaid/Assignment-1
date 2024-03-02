#include "loginwindow.h"
#include "ui_loginwindow.h"
#include"welcomewindow.h"
#include "Users.h"
#include "registerwindow.h"
LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    ui->error->setVisible(false);

}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_Login_clicked()
{

    QString username = ui->name->text();
    QString password = ui ->pass->text();
    bool found = false;
    int index = 0;
    for (int i = 0; i < 100; ++i)
    {
        if (usernames[i] == username && passwords[i] == password)
        {
            index = i;
            found = true;
            break;
        }
    }
    if (found==true)
    {
        hide();
        WelcomeWindow* welcomewindow = new WelcomeWindow(this, username, QString::number(ages[index]));
        welcomewindow->show();
    }
    else
    {
        ui->error->setVisible(true);
    }

}


void LoginWindow::on_Register_clicked()
{
    hide();
    RegisterWindow* registerWindow = new RegisterWindow(this);
    registerWindow->show();
}

#include "loginwindow.h"
#include "ui_loginwindow.h"
#include"welcomewindow.h"
#include "Users.h"
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
    for (int i = 0; i < 101; ++i)
    {
        if (usernames[i] == username && passwords[i] == password)
        {
            found = true;
            break;
        }
    }
    if (found==true)
    {
     hide();
     WelcomeWindow* welcomewindow = new WelcomeWindow(this);
     welcomewindow->show();
    }
    else
    {
        ui->error->setVisible(true);
    }

}


void LoginWindow::on_Register_clicked()
{
    hide ();
    WelcomeWindow* welcomeWindow = new WelcomeWindow(this);
    welcomeWindow->show();
}


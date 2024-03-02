#include "welcomewindow.h"
#include "ui_welcomewindow.h"

WelcomeWindow::WelcomeWindow(QWidget *parent, QString username, QString age)
    : QDialog(parent)
    , ui(new Ui::WelcomeWindow)
{
    ui->setupUi(this);

    ui->welcome->setText("Hello, " + username + " " + age);

    QPixmap pix(":/new/prefix1/Screenshot 2024-03-02 234024.png");
    int w = ui->image->width();
    int h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w,h, Qt::KeepAspectRatio));
}

WelcomeWindow::~WelcomeWindow()
{
    delete ui;
}

void WelcomeWindow::on_Logout_clicked()
{
    destroy();
    this->parentWidget()->show();
}


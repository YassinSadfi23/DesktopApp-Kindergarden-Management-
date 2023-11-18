#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "home.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_enterbtn_clicked()
{
    hide();
    //creating database connection
    QSqlDatabase db;
    db=QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setPort(3306);

    db.setUserName("root"); //default user name for mysql
    db.setPassword("");
    db.setDatabaseName("kindergarden");

    if(db.open())
    {
        QMessageBox::information(this, "connection", "DATABASE SUCCESSFULLY CONNECTED");

    }
    else
    {

        //With this you get to know better why the connection failed
        QMessageBox::information(this, "Connection", "DATABASE NOT CONNECTED");

    }
    home home;
    home.setModal(true);
    home.exec();
}


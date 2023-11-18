#include "signin.h"
#include "ui_signin.h"
#include "eleve.h"

signin::signin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::signin)
{
    ui->setupUi(this);
}

signin::~signin()
{
    delete ui;
}

void signin::on_pushButton_3_clicked()
{
    eleve home;
    home.setModal(true);
    home.exec();
}


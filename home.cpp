#include "home.h"
#include "ui_home.h"
#include "eleve.h"
#include "enseignant.h"
home::home(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::home)
{
    ui->setupUi(this);
}

home::~home()
{
    delete ui;
}

void home::on_eleve_clicked()
{
    eleve eleveWin;
    eleveWin.setModal(true);
    eleveWin.exec();
}


void home::on_enseignant_clicked()
{
    enseignant ensWin;
    ensWin.setModal(true);
    ensWin.exec();
}


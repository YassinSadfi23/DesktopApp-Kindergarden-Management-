#include "enseignant.h"
#include "ui_enseignant.h"

enseignant::enseignant(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::enseignant)
{
    ui->setupUi(this);
}

enseignant::~enseignant()
{
    delete ui;
}

#include "eleve.h"
#include "ui_eleve.h"


eleve::eleve(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::eleve)
{
    ui->setupUi(this);
}

eleve::~eleve()
{
    delete ui;
}



void eleve::on_addbtn_clicked()
{
    if (db.open()) {
        QSqlDatabase::database().transaction();

        int id = ui->idE->toPlainText().toInt();
        QString nom = ui->nomE->toPlainText();
        QString prenom = ui->prenomE->toPlainText();
        int classe = ui->classeE->toPlainText().toInt();
        QString num = ui->numE->toPlainText();

        QSqlQuery q(db);
        q.prepare("INSERT INTO eleve (id, nom, prenom, classe, num) VALUES (:ID, :Nom, :Prenom, :Classe, :Numero)");
        q.bindValue(":ID", id);
        q.bindValue(":Nom", nom);
        q.bindValue(":Prenom", prenom);
        q.bindValue(":Classe", classe);
        q.bindValue(":Numero", num);

        if (!q.exec()) {
            qDebug() << "Error executing query:" << q.lastError().text();
        } else {
            qDebug() << "Data inserted successfully!";
            QMessageBox::information(this, "Registered", "Welcome");
        }

        if (!db.commit()) {
            qDebug() << "Transaction commit error:" << db.lastError().text();
            db.rollback();  // Rollback changes if commit fails
        }

        db.close();
    } else {
        qDebug() << "Database couldn't be opened:" << db.lastError().text();
    }
}



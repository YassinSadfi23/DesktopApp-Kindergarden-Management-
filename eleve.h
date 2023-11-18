#ifndef ELEVE_H
#define ELEVE_H

#include <QDialog>

#include <QtSql/QtSql>
#include <QtSql/QSqlDatabase>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
namespace Ui {
class eleve;
}

class eleve : public QDialog
{
    Q_OBJECT

public:
    explicit eleve(QWidget *parent = nullptr);
    ~eleve();

private slots:
    void on_addbtn_clicked();

private:
    Ui::eleve *ui;
    QSqlDatabase db ;
};

#endif // ELEVE_H

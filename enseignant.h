#ifndef ENSEIGNANT_H
#define ENSEIGNANT_H

#include <QDialog>

namespace Ui {
class enseignant;
}

class enseignant : public QDialog
{
    Q_OBJECT

public:
    explicit enseignant(QWidget *parent = nullptr);
    ~enseignant();

private:
    Ui::enseignant *ui;
};

#endif // ENSEIGNANT_H

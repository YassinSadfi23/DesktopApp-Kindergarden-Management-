#ifndef SIGNIN_H
#define SIGNIN_H

#include <QMainWindow>

namespace Ui {
class signin;
}

class signin : public QMainWindow
{
    Q_OBJECT

public:
    explicit signin(QWidget *parent = nullptr);
    ~signin();

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::signin *ui;
};

#endif // SIGNIN_H

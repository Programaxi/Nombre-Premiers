#ifndef NOMBREPREMIER_H
#define NOMBREPREMIER_H

#include <QWidget>
#include <QString>
#include <iostream>
#include <math.h>

namespace Ui {
class NombrePremier;
}

class NombrePremier : public QWidget
{
    Q_OBJECT

public:
    explicit NombrePremier(QWidget *parent = 0);
    ~NombrePremier();
    int estPremier(int n);

public slots:
    void prog(int n);

private:
    Ui::NombrePremier *ui;
    QString m_texte;
};

#endif // NOMBREPREMIER_H

#include "nombrepremier.h"
#include "ui_nombrepremier.h"

NombrePremier::NombrePremier(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NombrePremier)
{
    ui->setupUi(this);
}

NombrePremier::~NombrePremier()
{
    delete ui;
}

void NombrePremier::prog(int n) {
    int n2(n);

    // Nombre Premier
    if (ui->checkBox->isChecked()) {
        if (estPremier(n)) {
            ui->label->setText("Oui");
        }

        else {
            ui->label->setText("Non");
        }
    }

    else {
        ui->label->setText("");
    }

    // Decomposition
    if (ui->checkBox_2->isChecked()) {
        m_texte = "";
        if (!estPremier(n)) {
            for (int j(2); j <= n/2; j++) {

                if (estPremier(j) && n2%j==0) {
                    while (n2%j == 0) {
                        if (n2 == n) {
                            m_texte += QString::number(j);
                        }

                        else {
                            m_texte += " * " + QString::number(j);
                        }

                        n2 = n2/j;
                    }
                }
            }
            ui->label_2->setText(m_texte + " = " + QString::number(n));
        }

        else {
            ui->label_2->setText("...");
        }
    }

    else {
        ui->label_2->setText("");
    }

    //Diviseurs
    if (ui->checkBox_3->isChecked()) {
        m_texte = "1";
        for (int i(2); i <= n/2; i++) {
            if (n%i == 0) {
                m_texte += " - " + QString::number(i);
            }
        }
        m_texte += " - " + QString::number(n);
        ui->label_3->setText(m_texte);
    }

    else {
        ui->label_3->setText("");
    }


}

int NombrePremier::estPremier(int n) {
    for (int i(n/2); i > 1; i--) {
        if (n%i == 0) {
            return false;
        }
    }
    return true;
}

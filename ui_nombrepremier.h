/********************************************************************************
** Form generated from reading UI file 'nombrepremier.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOMBREPREMIER_H
#define UI_NOMBREPREMIER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NombrePremier
{
public:
    QVBoxLayout *verticalLayout;
    QLCDNumber *lcdNumber;
    QSpinBox *spinBox;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *NombrePremier)
    {
        if (NombrePremier->objectName().isEmpty())
            NombrePremier->setObjectName(QString::fromUtf8("NombrePremier"));
        NombrePremier->resize(343, 223);
        NombrePremier->setWindowOpacity(999999);
        verticalLayout = new QVBoxLayout(NombrePremier);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lcdNumber = new QLCDNumber(NombrePremier);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        verticalLayout->addWidget(lcdNumber);

        spinBox = new QSpinBox(NombrePremier);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimum(2);
        spinBox->setMaximum(99999);

        verticalLayout->addWidget(spinBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        checkBox = new QCheckBox(NombrePremier);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout_2->addWidget(checkBox);

        checkBox_2 = new QCheckBox(NombrePremier);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        verticalLayout_2->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(NombrePremier);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        verticalLayout_2->addWidget(checkBox_3);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(NombrePremier);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        label_2 = new QLabel(NombrePremier);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        label_3 = new QLabel(NombrePremier);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(NombrePremier);
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), NombrePremier, SLOT(prog(int)));

        QMetaObject::connectSlotsByName(NombrePremier);
    } // setupUi

    void retranslateUi(QWidget *NombrePremier)
    {
        NombrePremier->setWindowTitle(QApplication::translate("NombrePremier", "Form", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("NombrePremier", "Premier", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("NombrePremier", "D\303\251composition", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("NombrePremier", "Diviseurs", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NombrePremier: public Ui_NombrePremier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOMBREPREMIER_H

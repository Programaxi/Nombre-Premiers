#include <QApplication>
#include <QInputDialog>
#include <QLocale>
#include <QLibraryInfo>

#include "nombrepremier.h"

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    NombrePremier fenetre;

    fenetre.setWindowTitle("Nombre premier");
    fenetre.show();

    return app.exec();
}

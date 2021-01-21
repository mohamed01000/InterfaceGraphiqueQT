#include "mainwindow.h"
#include <QApplication>

// Todo list
// Ajouter les commentaires
// Faire une version moins brouillon
// Ajouter un bouton clear
//
//



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

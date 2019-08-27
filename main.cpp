#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); //create the application object
    MainWindow w;
    w.show();

    return a.exec();
}

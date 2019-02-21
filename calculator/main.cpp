#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    //QApplication instance is created.
    QApplication a(argc, argv);
    //MainWindow instance is created.
    MainWindow w;
    //w is displayed on user's computer.
    w.show();
    //This makes user able to exit the application.
    return a.exec();
}

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QGuiApplication::setApplicationDisplayName(MainWindow::tr("Photouston"));
    MainWindow w;
    w.show();

    return a.exec();
}

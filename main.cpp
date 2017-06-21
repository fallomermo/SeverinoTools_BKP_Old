#include "principal.h"
#include <QApplication>
#include <QSplashScreen>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Principal w;
    w.show();
    return a.exec();
}

#include <QApplication>

#include "Client.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Client client;

    return a.exec();
}

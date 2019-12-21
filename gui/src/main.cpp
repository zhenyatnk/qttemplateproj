#include "areyouready.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication m_app(argc, argv);
    return AreYouReady().exec();
}

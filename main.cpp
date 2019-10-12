#include "oknoglowne.h"

#include <QApplication>
#include <QTextBrowser>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    OknoGlowne w;
    w.show();
    return a.exec();
}

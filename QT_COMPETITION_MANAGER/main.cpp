#include "mainsys.h"
#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainSys w;
    w.setWindowTitle("Competition Management    ------made by xuanxuandianxia");
    w.setWindowFlag(Qt::FramelessWindowHint);
    w.setWindowIcon(QIcon(":source/SELECT.png"));
    w.show();
    return a.exec();
}


#include "mainwindow.h"
#include <QApplication>
#include "basedialog.h"
#include "baseinfo.h"

const BaseInfo* BaseInfo::m_instance = new BaseInfo;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //w.show();
    BaseDialog b;
    b.show();
    return a.exec();
}

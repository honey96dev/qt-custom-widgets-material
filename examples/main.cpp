#include <QtWidgets/QApplication>
#include <QDebug>
#include "mainwindow.h"
#include "MyTestForm.h"
#include <QDebug>
#include <lib/qtmaterialstyle.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Q_INIT_RESOURCE(resources);

    MyTestForm window;
    window.show();

//    qDebug()<<QtMaterialStyle::instance().themeColor("");

    return a.exec();
}

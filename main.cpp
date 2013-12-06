#include <QApplication>
#include "natashareplywidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    NatashaReplyWidget* nrw = new NatashaReplyWidget();
    nrw->show();

    return a.exec();
}

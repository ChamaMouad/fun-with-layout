#include <QApplication>
#include<dialog3.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    dialog3 *D=new dialog3;
    D->show();

    return a.exec();
}

#include "simpleplot.hpp"

#include <QApplication>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    QWidget plot;
    plot.show();

    return app.exec();
}

#include "simpleplot.hpp"

#include <QApplication>

#include <qwt/qwt_plot.h>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    QwtPlot plot;
    plot.show();

    return app.exec();
}

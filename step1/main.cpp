#include "simpleplot.hpp"
#include "simulator.hpp"

#include <QApplication>
#include <QHBoxLayout>
#include <QPushButton>
#include <QVBoxLayout>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    QWidget w;
    auto* vl = new QVBoxLayout;

    auto* plot = new SimplePlot(std::make_unique<Simulator>());
    vl->addWidget(plot);

    auto* hl = new QHBoxLayout;
    auto* b = new QPushButton(QObject::tr("Stop"));
    QObject::connect(b, &QPushButton::clicked, plot, &SimplePlot::reset);
    hl->addWidget(b);
    b = new QPushButton(QObject::tr("Pause"));
    QObject::connect(b, &QPushButton::clicked, plot, &SimplePlot::pause);
    hl->addWidget(b);
    b = new QPushButton(QObject::tr("Play"));
    QObject::connect(b, &QPushButton::clicked, plot, &SimplePlot::play);
    hl->addWidget(b);
    b = new QPushButton(QObject::tr("Step"));
    QObject::connect(b, &QPushButton::clicked, plot, &SimplePlot::advance);
    hl->addWidget(b);
    vl->addLayout(hl);

    w.setLayout(vl);
    w.show();

    return app.exec();
}

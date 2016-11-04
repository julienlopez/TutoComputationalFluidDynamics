#include "simpleplot.hpp"

#include "isimulator.hpp"

#include <QTimer>

#include <qwt/qwt_plot_curve.h>

SimplePlot::SimplePlot(std::unique_ptr<ISimulator> simulator, QWidget* parent)
    : QwtPlot(parent)
    , m_simulator(std::move(simulator))
{
    m_timer = new QTimer(this);
    m_timer->setInterval(500);
    connect(m_timer, &QTimer::timeout, this, &SimplePlot::advance);

    m_curve = new QwtPlotCurve(tr("Curve 1"));
    m_curve->setSamples(m_simulator->data());
    m_curve->attach(this);

    replot();
}

SimplePlot::~SimplePlot() = default;

void SimplePlot::advance()
{
    m_simulator->update();
    m_curve->setSamples(m_simulator->data());
    replot();
}

void SimplePlot::reset()
{
    m_timer->stop();
    m_simulator->reset();
    m_curve->setSamples(m_simulator->data());
    replot();
}

void SimplePlot::play()
{
    m_timer->start();
}

void SimplePlot::pause()
{
    m_timer->stop();
}

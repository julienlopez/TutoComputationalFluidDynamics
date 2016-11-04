#pragma once

#include <memory>

#include <qwt/qwt_plot.h>

class ISimulator;

class QwtPlotCurve;

class SimplePlot : public QwtPlot
{
    Q_OBJECT
public:
    explicit SimplePlot(std::unique_ptr<ISimulator> simulator, QWidget* parent = nullptr);

    virtual ~SimplePlot();

public slots:
    void advance();

    void reset();

    void play();

    void pause();

private:
    std::unique_ptr<ISimulator> m_simulator;

    QwtPlotCurve* m_curve;
    QTimer* m_timer;
};

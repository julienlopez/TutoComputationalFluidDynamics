#pragma once

#include <QWidget>

class SimplePlot : public QWidget
{
    Q_OBJECT
public:
    explicit SimplePlot(QWidget* parent = nullptr);

    virtual ~SimplePlot() = default;
};
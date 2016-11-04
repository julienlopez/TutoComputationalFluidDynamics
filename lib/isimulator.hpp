#pragma once

#include <QPoint>
#include <QVector>

class ISimulator
{
public:
    using SampleVector = QVector<QPointF>;

    virtual ~ISimulator() = default;

    void reset();

    void update();

    SampleVector data() const;

protected:
    ISimulator() = default;

private:
    virtual void impl_reset() = 0;

    virtual void impl_update() = 0;

    virtual SampleVector impl_data() const = 0;
};

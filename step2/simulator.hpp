#pragma once

#include "isimulator.hpp"

class Simulator : public ISimulator
{
public:
    Simulator(const SampleVector& init = {});

    virtual ~Simulator() = default;

    const double nx = 41;
    const double dx = 2 / (nx - 1);
    const double nt = 25; // nt is the number of timesteps we want to calculate
    const double dt = .025; // dt is the amount of time each timestep covers (delta t)

private:
    SampleVector m_data;

    virtual void impl_reset() override;

    virtual void impl_update() override;

    virtual SampleVector impl_data() const override;
};

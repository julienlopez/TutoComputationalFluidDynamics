#include "simulator.hpp"

Simulator::Simulator(const SampleVector& init)
    : m_data(init)
{
    reset();
}

void Simulator::impl_reset()
{
    m_data.resize(nx);
    for(int i = 0; i < nx; i++)
    {
        const auto n = i * dx;
        m_data[i] = QPointF(n, (n >= 0.5 && n <= 1 ? 2. : 1.));
    }
}

void Simulator::impl_update()
{
    SampleVector new_values(m_data.size());
    new_values.fill(m_data[0]);
    for(int i = 1; i < new_values.size(); i++)
        new_values[i] = QPointF(m_data[i].x(), m_data[i].y() - c * dt / dx * (m_data[i].y() - m_data[i - 1].y()));
    m_data = new_values;
}

auto Simulator::impl_data() const -> SampleVector
{
    return m_data;
}

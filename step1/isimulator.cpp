#include "isimulator.hpp"

void ISimulator::reset()
{
    impl_reset();
}

void ISimulator::update()
{
    impl_update();
}

auto ISimulator::data() const -> SampleVector
{
    return impl_data();
}

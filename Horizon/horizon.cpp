#include "horizon.h"

Horizon::Horizon()
{
    line.push_front( Point( 0.0, 0.0 ) );
    line.push_back( Point( 1.0, 0.0 ) );
}

const std::list< Horizon::Point >& Horizon::getLineData() const
{
    return line;
}

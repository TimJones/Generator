#include <cstdlib>
#include <ctime>
#include "horizon.h"

Horizon::Horizon()
{
    line.push_front( Point( 0.0, 0.0 ) );
    line.push_back( Point( 1.0, 0.0 ) );

    srand( time( NULL ) );
}

void Horizon::Generate()
{
    Point mid;
    LineData newline;
    LineData::iterator next = line.begin();
    next++;

    for( LineData::iterator it = line.begin(); it != line.end(); it++, next++ )
    {
        newline.push_back( *it );

        mid.x = it->x + ( ( next->x - it->x ) * 0.5 );
        mid.y = it->y + ( ( next->y - it->y ) * 0.5 );

        float displacement = ( rand() / ( static_cast< float >( RAND_MAX ) + 1.0 ) ) * ( 1.0 - -1.0 ) + -1.0;
        mid.y += displacement;

        newline.push_back( mid );
    }

    line.clear();
    line = newline;
}

const std::list< Horizon::Point >& Horizon::getLineData() const
{
    return line;
}

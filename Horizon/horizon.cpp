#include <cstdlib>
#include <ctime>
#include "horizon.h"

Horizon::Horizon():
    variance( 1.0 )
{
    line.push_front( Point( 0.0, 0.0 ) );
    line.push_back( Point( 1.0, 0.0 ) );

    srand( time( NULL ) );
}

void Horizon::Generate()
{
    float high = variance / 2.0 , low = high * -1.0;
    Point mid;
    LineData newline;
    LineData::iterator next = line.begin(), last_but_one = line.end();
    next++; last_but_one--;

    for( LineData::iterator it = line.begin(); it != last_but_one; it++, next++ )
    {
        newline.push_back( *it );

        mid.x = it->x + ( ( next->x - it->x ) * 0.5 );
        mid.y = it->y + ( ( next->y - it->y ) * 0.5 );

        float displacement = ( rand() / ( static_cast< float >( RAND_MAX ) + 1.0 ) ) * ( high - low ) + low;
        mid.y += displacement;

        newline.push_back( mid );
    }
    newline.push_back( line.back() );
    line.clear();
    line = newline;
    variance *= 0.8;
}

const std::list< Horizon::Point >& Horizon::getLineData() const
{
    return line;
}

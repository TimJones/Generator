#ifndef HORIZON_H
#define HORIZON_H

#include <list>

class Horizon
{
public:
    struct Point
    {
        Point(): x( 0.0 ), y( 0.0 ) {};
        Point( float x_pos, float y_pos ): x( x_pos ), y( y_pos ) {};
        float x, y;
    };

    Horizon();

    void Generate();
    const std::list< Horizon::Point >& getLineData() const;

    typedef std::list< Horizon::Point > LineData;
    typedef std::list< Horizon::Point >::const_iterator LineDataIt;

protected:
    float variance;
    std::list< Horizon::Point > line;
};
#endif // HORIZON_H

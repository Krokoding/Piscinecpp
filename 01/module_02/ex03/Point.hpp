#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed x;
		Fixed y;
	public:
		Point( void ) : x(0), y(0) {}
		Point( const float x, const float y );
		Point( const Point& other );

		Point	operator=(const Point& other);
		Fixed	getFixedX( void );
		Fixed	getFixedY( void );
		~Point();
};


bool bsp( Point const a, Point const b, Point const c, Point const point );

#endif
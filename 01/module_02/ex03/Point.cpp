#include "Point.hpp"

Point::Point( const float x, const float y ) : x(x), y(y) {
}

Point::Point( const Point& other ) {
	x = other.x;
	y = other.y;
}


Fixed	Point::getFixedX( void ) {
	return this->x;
}
Fixed	Point::getFixedY( void ) {
	return this->y;
}

Point::~Point( void ) {

}
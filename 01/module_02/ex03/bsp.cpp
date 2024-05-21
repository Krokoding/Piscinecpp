#include "Point.hpp"

Fixed	triangleArea( Point a, Point b, Point c ) {
	Fixed	x1 = a.getFixedX();
	Fixed	y1 = a.getFixedY();
	Fixed	x2 = b.getFixedX();
	Fixed	y2 = b.getFixedY();
	Fixed	x3 = c.getFixedX();
	Fixed	y3 = c.getFixedY();
	std::cout << "x1 = " << x1 << std::endl;
	std::cout << "y1 = " << y1 << std::endl;
	std::cout << "x2 = " << x2 << std::endl;
	std::cout << "y2 = " << y2 << std::endl;
	std::cout << "x3 = " << x3 << std::endl;
	std::cout << "y3 = " << y3 << std::endl;
	Fixed	result;
	
	result =  (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2;
	if (result.toFloat() < 0)
		result = result * -1;
	return result;
}

bool bsp( Point a, Point const b, Point const c, Point const point ) {
	Fixed	areaABC = triangleArea(a, b, c);
	Fixed	areaPBC = triangleArea(point, b, c);
	Fixed	areaAPC = triangleArea(a, point, c);
	Fixed	areaABP = triangleArea(a, b, point);
	std::cout <<areaABC << std::endl;
	std::cout <<areaPBC << std::endl;
	std::cout <<areaAPC << std::endl;
	std::cout <<areaABP << std::endl;
	std::cout << "tot =" << areaABP + areaPBC + areaAPC << std::endl;
	

	return	(areaPBC + areaAPC + areaABP == areaABC);
}
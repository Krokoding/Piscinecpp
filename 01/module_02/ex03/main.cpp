
#include "Point.hpp"
#include <iostream>

int main( void ) {
	std::cout << "Should be out ";
	std::cout << bsp(Point(2.38, 5.32), Point(5.56, -1.62), Point(-2.58, -2.78), Point(-2.58, -2.18)) << std::endl;
	std::cout << "Should be out ";
	std::cout << bsp(Point(2.38, 5.32), Point(5.56, -1.62), Point(-2.58, -2.78), Point(-1.77, -1.45)) << std::endl;
	std::cout << "Should be in ";
	std::cout << bsp(Point(2.38, 5.32), Point(5.56, -1.62), Point(-2.58, -2.78), Point(-1.16, -0.68)) << std::endl;
	std::cout << "Should be in ";
	std::cout << bsp(Point(2.38, 5.32), Point(5.56, -1.62), Point(-2.58, -2.78), Point(2.36, 4.84)) << std::endl;
	std::cout << "Should be in ";
	std::cout << bsp(Point(2.38, 5.32), Point(5.56, -1.62), Point(-2.58, -2.78), Point(-0.26, 0.48)) << std::endl;
	std::cout << "Should be out ";
	std::cout << bsp(Point(2.38, 5.32), Point(5.56, -1.62), Point(-2.58, -2.78), Point(-0.56, 1.42)) << std::endl;
	std::cout << "Should be in ";
	std::cout << bsp(Point(2.38, 5.32), Point(5.56, -1.62), Point(-2.58, -2.78), Point(5.16, -1.32)) << std::endl;
}
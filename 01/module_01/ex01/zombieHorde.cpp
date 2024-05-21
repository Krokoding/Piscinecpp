#include "Zombie.hpp"
#include <sstream>

std::string to_string( const int& value ) {
	std::ostringstream oss;
	oss << value;
	return oss.str();
}
Zombie	*zombieHorde( int N, std::string name )
{
	Zombie	*zombie = new Zombie[N];

	for (int i = 0; i < N; ++i)
	{
		(zombie + i)->setName( name + to_string(i + 1) );
	}
	return zombie;
}
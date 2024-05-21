#include "Zombie.hpp"



Zombie::Zombie() : _name("Unamed") { std::cout << "Zombie " << this->_name << " created\n"; }

Zombie::Zombie( std::string name ) : _name(name) { std::cout << "Zombie " << this->_name << " created\n"; }

void	Zombie::setName( std::string name )
{
	_name = name;
}

Zombie::~Zombie()
{
	std::cout << _name  << " destroyed\n";
}

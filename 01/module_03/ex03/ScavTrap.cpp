#include "ScavTrap.hpp"

ScavTrap::ScavTrap( const std::string& name ) : ClapTrap( name,  100, 50, 20 )
{
	std::cout << "ScavTrap with name : " << name << " created\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << this->_name << " (scav trap instance) Destructed \n";
}

void	ScavTrap::guardGate() {
	std::cout << this->_name << " is now in Gate keeper mode \n";
}
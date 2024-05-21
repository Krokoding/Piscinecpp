#include "HumanB.hpp"

HumanB::~HumanB()
{
	std::cout << "Human B destroyed\n";
}

void	HumanB::attack( void )
{
	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << "hmmhmmmm\n";
}
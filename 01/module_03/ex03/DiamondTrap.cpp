#include "DiamondTrap.hpp"


void	DiamondTrap::whoAmI( void ) {
	std::cout << "ClapTrap name : " << ClapTrap::_name << std::endl;
	std::cout << "Diamond name : " << this->_name << std::endl;
}
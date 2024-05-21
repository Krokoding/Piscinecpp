#include "Weapon.hpp"


Weapon::Weapon( std::string weapon_name ) : type(weapon_name)
{
}

Weapon::~Weapon()
{
	std::cout << "Weapon has been destroyed\n";
}

void	Weapon::setType( std::string new_type )
{
	type = new_type;
}
const std::string	&Weapon::getType( void )
{
	return (this->type);
}

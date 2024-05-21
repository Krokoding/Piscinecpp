#include "Zombie.hpp"

void	Zombie::announce( void )
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie( void )
{
	std::cout << "Zombie instance '" << this->name << "' destroyed." << std::endl;
}
Zombie::Zombie( std::string	name ) :
	name(name)
{
	std::cout << "Zombie instance '" << this->name << "' Created." << std::endl;
}

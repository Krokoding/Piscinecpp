#include "Zombie.hpp"

int	main()
{
	Zombie	zombie("zombie1");
	Zombie	*zombite = newZombie( "zombie2" );
	zombie.announce();
	zombite->announce();
	randomChump( "zombielachancla" );
	delete zombite;
}
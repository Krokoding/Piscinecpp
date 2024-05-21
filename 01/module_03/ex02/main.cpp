#include "FragTrap.hpp"

int main( void ) {
	ClapTrap bob("bob");
	ClapTrap alice("alice");

	bob.attack("Alice");
	alice.takeDamage(3);
	alice.attack("bob");
	bob.takeDamage(5);

	ScavTrap	scavi( "scavlamenace" );
	scavi.attack("un mec dans la rue");
	scavi.takeDamage(30);
	scavi.beRepaired(30);

	FragTrap	fragi( "fragilamenace" );
	fragi.attack( "un mec dans un bar" );
	fragi.highFivesGuys();
	fragi.takeDamage(30);
	fragi.beRepaired(20);
}
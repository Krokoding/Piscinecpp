#include "ClapTrap.hpp"

int main( void ) {
	ClapTrap bob("bob");
	ClapTrap alice("alice");

	bob.attack("Alice");
	alice.takeDamage(3);
	alice.attack("bob");
	bob.takeDamage(5);
}
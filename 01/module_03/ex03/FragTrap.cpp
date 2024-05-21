#include "FragTrap.hpp"

FragTrap::~FragTrap() {
	std::cout << "Frag trap destructor called for : " << this->_name << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "Positive high five\n";
}

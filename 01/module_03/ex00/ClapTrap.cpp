#include "ClapTrap.hpp"

void	ClapTrap::attack(const std::string& target) {
	if (this->energyPoint > 0 && this->hitPoint > 0 )
		std::cout << "ClapTrap " << this->_name << "attacks" << target << ", causing " << this->attackDamage << " points of damage !\n";
	else
		std::cout << this->_name << " has not enough energy to attack\n";
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->hitPoint > 0 && this->hitPoint > 0 ) {
		this->hitPoint -= amount;
		std::cout << amount << " of damage taken\n";
		std::cout << "New life = " << this->hitPoint << std::endl;
	}
	else
		std::cout << "Already dead, stop trying to hit him\n";
	
}
void ClapTrap::beRepaired(unsigned int amount) {
	if ( this->energyPoint >= amount && this->hitPoint > 0 ) {
		energyPoint -= amount;
		this->hitPoint += amount;
		std::cout << "Life repaired : +" << amount << std::endl;
		std::cout << "New life = " << this->hitPoint << std::endl;
	}
	else
		std::cout << "can't repair, no energy or no life\n";
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "Destructor called\n";
}
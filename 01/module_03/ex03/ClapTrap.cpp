#include "ClapTrap.hpp"

void	ClapTrap::attack(const std::string& target) {
	if (this->_energyPoint > 0 && this->_hitPoint > 0 )
		std::cout << "ClapTrap " << this->_name << "attacks" << target << ", causing " << this->_attackDamage << " points of damage !\n";
	else
		std::cout << this->_name << " has not enough energy to attack\n";
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoint > 0 && this->_hitPoint > 0 ) {
		this->_hitPoint -= amount;
		std::cout << amount << " of damage taken\n";
		std::cout << "New life = " << this->_hitPoint << std::endl;
	}
	else
		std::cout << "Already dead, stop trying to hit him\n";
	
}
void ClapTrap::beRepaired(unsigned int amount) {
	if ( this->_energyPoint >= amount && this->_hitPoint > 0 ) {
		_energyPoint -= amount;
		this->_hitPoint += amount;
		std::cout << "Life repaired : +" << amount;
		std::cout << "	|	New life = " << this->_hitPoint;
		std::cout << "	|	New energy level = " << this->_energyPoint << std::endl;
	}
	else
		std::cout << "can't repair, no energy or no life\n";
}

ClapTrap::~ClapTrap( void ) {
	std::cout << " Basis Destructor called for " << this->_name << std::endl;
}
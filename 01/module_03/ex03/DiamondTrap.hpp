#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string _name;
public:
	DiamondTrap( const std::string& name ) : ClapTrap( name + "_clap_name"), FragTrap( name + "_clap_name" ), ScavTrap( name + "_clap_name" ), _name(name) {
		this->_name = name;
		this->_hitPoint = FragTrap::_hitPoint;
		this->_energyPoint = ScavTrap::_energyPoint;
		this->_attackDamage = FragTrap::_attackDamage;
		std::cout << "Diamond trap constructed " << this->_name << std::endl;
	}
	~DiamondTrap() {
		std::cout << "diamond Destructor called " << this->_name << std::endl;
	}
	void	attack( const std::string& target ) {
		ScavTrap::attack( target );
	}
	void	whoAmI( void );
};
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap( const std::string& name );
	~ScavTrap();
	void guardGate();
	void attack( const std::string& target ) {
		std::cout << this->_name << "attack les jambes " << target << std::endl;
	}
};



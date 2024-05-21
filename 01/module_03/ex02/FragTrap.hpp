#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap( const std::string& name ) : ClapTrap( name, 100, 100, 30 ) {
		std::cout << "FragTrap init with name : " << name << std::endl;
	};
	~FragTrap();
	void highFivesGuys(void);
};




#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;
	Weapon &_weapon;
public:
	HumanA( std::string name, Weapon &weapon ) : _name(name), _weapon(weapon) {}
	~HumanA() { std::cout << "Human A destroyed\n"; }

	void	attack( void );
};



#endif
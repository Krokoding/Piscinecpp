#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon	*_weapon;
		std::string	_name;
	public:
		HumanB( std::string name ) : _name(name) {}
		~HumanB();

		void	setWeapon( Weapon &weapon ) { _weapon = &weapon; }
		void	attack( void );
};
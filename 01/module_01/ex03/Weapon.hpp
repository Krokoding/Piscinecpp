#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <cctype>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon( std::string weapon_name );
		~Weapon();

		const std::string	&getType( void );
		void				setType( std::string new_type );
};




#endif
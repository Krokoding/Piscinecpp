#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cctype>

class Zombie
{
	private:
		std::string _name;

	public:
		//default constructor
		Zombie( void );

		//name constructors
		Zombie( std::string name );
		~Zombie( void );

		//setters
		void	setName( std::string name );
		//getters
		void	announce( void ) { std::cout << _name << std::endl; };
};

Zombie	*zombieHorde( int N, std::string name );


#endif
#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog( void );
	~Dog();
	void	makeSound( void ) const {
		std::cout << "grrrr wouf wouf grrr wouf\n";
	}
};

Dog::Dog( void ) : Animal()
{
	this->_type = "Dog";
	std::cout << "Dog created\n";
}

Dog::~Dog()
{
	std::cout << "Dog destroyed \n";
}

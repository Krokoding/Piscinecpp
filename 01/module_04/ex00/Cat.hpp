#include "Dog.hpp"

class Cat : public Animal
{
public:
	Cat( void );
	~Cat();
	void	makeSound( void ) const {
		std::cout << "miaou\n";
	}
};

Cat::Cat( void )  : Animal() 
{
	this->_type = "Cat";
	std::cout << "Cat created\n";
}

Cat::~Cat()
{
	std::cout << "Cat destroyed \n";
}
#include "Dog.hpp"

class Cat : public Animal
{
private:
	brain	*Brain;
public:
	Cat( void );
	~Cat();
	void	makeSound( void ) const {
		std::cout << "miaou\n";
	}
	Cat& operator=(const Cat& other);
};

Cat& Cat::operator=(const Cat& other) {
	if (this != &other) {
		delete Brain;
		this->Brain = new brain(*other.Brain);
	}
	return (*this);
}


Cat::Cat( void )  : Animal() 
{
	this->_type = "Cat";
	std::cout << "Cat created\n";
	this->Brain = new brain;
}

Cat::~Cat()
{
	delete this->Brain;
	std::cout << "Cat destroyed \n";
}
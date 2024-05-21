#include "Animal.hpp"
#include "brain.hpp"

class Dog : public Animal
{
private:
	brain	*Brain;
public:
	Dog( void );
	~Dog();
	void	makeSound( void ) const {
		std::cout << "grrrr wouf wouf grrr wouf\n";
	}
	Dog& operator=(const Dog& other);
};

Dog& Dog::operator=(const Dog& other) {
	if (this != &other)
	{
		delete this->Brain;
		this->Brain = new brain(*other.Brain);
	}
	return (*this);
}


Dog::Dog( void ) : Animal()
{
	this->_type = "Dog";
	std::cout << "Dog created\n";
	this->Brain = new brain;
}

Dog::~Dog()
{
	delete this->Brain;
	std::cout << "Dog destroyed \n";
}

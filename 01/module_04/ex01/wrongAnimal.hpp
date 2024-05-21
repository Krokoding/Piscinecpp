#include "Cat.hpp"

class wrongAnimal : public Animal
{
protected:
	std::string _type;
public:
	wrongAnimal(/* args */) : _type("unknown") {
		std::cout << "Wrong animal constructor called\n";
	}
	~wrongAnimal();
	std::string getType( void ) const {
		return _type;
	}
	virtual void	makeSound( void ) const {
		std::cout << "wrong sound from wrong animal\n";
	}
};

wrongAnimal::~wrongAnimal()
{
	std::cout << "Wrong animal destructor called\n";
}

#include "wrongAnimal.hpp"

class wrongCat : public wrongAnimal
{
public:
	wrongCat(/* args */);
	~wrongCat();
	virtual void makeSound() const {
		std::cout << "wrong cat sound : ougah ougah\n";
	}
};

wrongCat::wrongCat(/* args */) : wrongAnimal()
{
	_type = "wrongCat";
	std::cout << "wrong cat constructor called\n";
}

wrongCat::~wrongCat()
{
	std::cout << "wrong cat constructor called\n";
}

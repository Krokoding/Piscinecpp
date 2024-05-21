#include <iostream>
#include <cctype>

class ClapTrap
{
private:
	std::string 	_name;
	unsigned int	hitPoint;
	unsigned int	energyPoint;
	unsigned int	attackDamage;
public:
	
	ClapTrap( std::string name ) : _name(name), hitPoint(10), energyPoint(10), attackDamage(0) {
		std::cout << "Construcor called\n";
	};
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

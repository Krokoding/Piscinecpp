#include <iostream>
#include <cctype>

class ClapTrap
{
protected:
	std::string 	_name;
	unsigned int	_hitPoint;
	unsigned int	_energyPoint;
	unsigned int	_attackDamage;
	ClapTrap( std::string name, unsigned int hitPoint, unsigned int energyPoint, unsigned int attackDamage ) : _name(name), _hitPoint(hitPoint), _energyPoint(energyPoint), _attackDamage(attackDamage) {
		std::cout << "Construcor public called\n";
	}

public:
	ClapTrap( std::string name ) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0) {
	std::cout << "Construcor default called\n";
	}
	~ClapTrap();
	virtual void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

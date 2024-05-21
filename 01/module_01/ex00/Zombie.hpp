#include <cctype>
#include <iostream>

class Zombie
{
private:
	std::string	name;
public:
	Zombie(std::string name);
	~Zombie();
	std::string getName() const { return name; }
	void	announce( void );
};

Zombie* newZombie( std::string name );
void 	randomChump( std::string name );

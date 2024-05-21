#include "Harl.hpp"


void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}
void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!\n";
}
void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}
void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::def( void )
{
	std::cout << "[ Probably complaining about insignificant problems ]\n";
}


Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::complain( std::string level )
{
	int i = 0;
	std::string	complains[4] = { "WARNING", "ERROR", "INFO", "DEBUG"};

	while (i < 4) {
		if (level == complains[i])
			break;
		i++;
	}
	switch ( i ) {
		case 0:
			Harl::warning();
			break;
		case 1:
			Harl::error();
			break;
		case 2:
			Harl::info();
			break;
		case 3:
			Harl::debug();
			break;
		default:
			Harl::def();
	}
}

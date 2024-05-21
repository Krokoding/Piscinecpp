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

void	Harl::complain( std::string level )
{
	void (Harl::*complain[4]) (void) = {&Harl::debug
								, &Harl::error
								, &Harl::info
								, &Harl::warning};
	std::string	levels[4] = { "DEBUG", "ERROR", "INFO", "WARNING" };
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*complain[i])();
			break;
		}
	}

}


Harl::Harl()
{
}

Harl::~Harl()
{
}
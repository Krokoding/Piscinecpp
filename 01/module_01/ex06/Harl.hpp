#include <iostream>

class Harl
{
private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
	void	def( void );
public:
	Harl();
	~Harl();

	void	complain( std::string level );
};



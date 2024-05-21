#include <cctype>
#include <iostream>

class Fixed
{
private:
	int					value;
	static const int	fractional_bits = 8;
public:
	Fixed( void );

	Fixed(const Fixed& other);

	Fixed& operator=(const Fixed& other);

	int	getRawBits( void );

	void	setRawBits ( int const raw );
	~Fixed();
};

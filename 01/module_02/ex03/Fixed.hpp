#ifndef FIXED_HPP
#define FIXED_HPP

#include <cctype>
#include <iostream>
#include <math.h>


class Fixed
{
private:
	int					value;
	static const int	fractional_bits = 8;
public:

	//constructeurs
	Fixed( void );
	Fixed( const Fixed& other );
	Fixed( const int );
	Fixed( const float nbfloat );

	float	toFloat( void ) const;
	int		toInt( void ) const;
	
	//Operateur de surcharge
	Fixed& 		operator=(const Fixed& other);
	friend		std::ostream& operator<<( std::ostream& os, const Fixed& fixed );
	//arithmétiques
	Fixed		operator+(const Fixed& other);
	Fixed		operator-(const Fixed& other);
	Fixed		operator*(const Fixed& other);
	Fixed		operator/(const Fixed& other);
	//Comparaison
	bool		operator>(const Fixed& other);
	bool		operator<(const Fixed& other);
	bool		operator>=(const Fixed& other);
	bool		operator<=(const Fixed& other);
	bool		operator==(const Fixed& other);
	bool		operator!=(const Fixed& other);
	//Incr Decr
	Fixed		operator++(int);
	Fixed		operator++();
	Fixed		operator--(int);
	Fixed		operator--();

	//MIN MAX
	static	Fixed	&min(Fixed& first, Fixed& second);
	static	const Fixed	&min(const Fixed& first, const Fixed& second);
	static	Fixed	&max(Fixed& first, Fixed& second);
	static	const Fixed	&max(const Fixed& first, const Fixed& second);

	int	getRawBits( void );

	void	setRawBits ( int const raw );
	~Fixed();
};


#endif
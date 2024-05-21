#include "Fixed.hpp"

Fixed::Fixed(const Fixed& other) {
	value = other.value;
    // std::cout << "Constructeur de copie appelé!" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
	if (this != &other) {
		this->value = other.value;
		// std::cout << "Opérateur d’affectation appelé!" << std::endl;
	}
	return *this;
}

int	Fixed::getRawBits( void ) {
	// std::cout << "getRawBits appelé!" << std::endl;
	return this->value;
}

void	Fixed::setRawBits ( int const raw ) {
	// std::cout << "setRawBits appelé!" << std::endl;
	this->value = raw;
}

Fixed::Fixed( void ) : value(0) {
	// std::cout << "Constructeur par defaut appele\n";
}

Fixed::Fixed( const int nb ) : value(nb << this->fractional_bits) {
	// std::cout << "Constructeur entier appele\n";
}

Fixed::Fixed( float const nbfloat ) : value(roundf(nbfloat * (1 << this->fractional_bits))) {
	std::cout << "constructeur float Fixed = "<< nbfloat << std::endl;
	std::cout << "flaot stocked = " << this->value << std::endl;
	// std::cout << "constructeur fractionnal bits Fixed = "<< (1 << fractional_bits) << std::endl;
	// std::cout << "Constructeur float appele\n";
}

Fixed::~Fixed() {
	// std::cout << "Destructeur par defaut appele\n";
}

float	Fixed::toFloat( void ) const {
	return ((float)this->value / static_cast<float>(1 << this->fractional_bits));
}

int		Fixed::toInt( void ) const {
	return (this->value >> this->fractional_bits);
}

std::ostream& operator<<( std::ostream& os, const Fixed& fixed ) {
	os << fixed.toFloat();
	return os;
}


Fixed		Fixed::operator+(const Fixed& other) {
	Fixed res;
	res.value = this->toFloat() + other.toFloat();
	return (res);
}

Fixed		Fixed::operator-(const Fixed& other) {
	Fixed res;
	res.value = this->toFloat() - other.toFloat();
	return (res);
}
Fixed		Fixed::operator*(const Fixed& other) {
	Fixed res;
	res.value = this->toFloat() * other.toFloat();
	return (res);}

Fixed		Fixed::operator/(const Fixed& other) {
	Fixed res;
	res.value = this->toFloat() / other.toFloat();
	return (res);}
//Comparaison
bool		Fixed::operator>(const Fixed& other) {
	return (this->toFloat() > other.toFloat());
}
bool		Fixed::operator<(const Fixed& other) {
	return (this->toFloat() < other.toFloat());
}
bool		Fixed::operator>=(const Fixed& other) {
	return (this->toFloat() >= other.toFloat());
}
bool		Fixed::operator<=(const Fixed& other) {
	return (this->toFloat() <= other.toFloat());
}
bool		Fixed::operator==(const Fixed& other) {
	return (this->toFloat() == other.toFloat());
}
bool		Fixed::operator!=(const Fixed& other) {
	return (this->toFloat() != other.toFloat());
}
//Inr decre
Fixed		Fixed::operator++() {
	this->value++;
	return *this;
}
Fixed		Fixed::operator++(int) {
	Fixed temp = *this;
	++this->value;
	return temp; 
}
Fixed		Fixed::operator--() {
	this->value--;
	return *this;
}
Fixed		Fixed::operator--(int) {
	Fixed temp = *this;
	--this->value;
	return temp; 
}

Fixed	&Fixed::min(Fixed& first, Fixed& second) {
	if (first.toFloat() < second.toFloat())
		return (first);
	else
		return second;
}
const Fixed	&Fixed::min(const Fixed& first, const Fixed& second) {
		if (first.toFloat() < second.toFloat())
		return (first);
	else
		return second;
}
Fixed	&Fixed::max(Fixed& first, Fixed& second) {
	if (first.toFloat() > second.toFloat())
		return (first);
	else
		return second;
}
const	Fixed	&Fixed::max(const Fixed& first, const Fixed& second) {
	if (first.toFloat() > second.toFloat())
		return (first);
	else
		return second;
}

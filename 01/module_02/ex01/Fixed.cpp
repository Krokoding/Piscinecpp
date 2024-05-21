#include "Fixed.hpp"

Fixed::Fixed(const Fixed& other) {
	value = other.value;
    std::cout << "Constructeur de copie appelé!" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
	if (this != &other) {
		this->value = other.value;
		std::cout << "Opérateur d’affectation appelé!" << std::endl;
	}
	return *this;
}

int	Fixed::getRawBits( void ) {
	std::cout << "getRawBits appelé!" << std::endl;
	return this->value;
}

void	Fixed::setRawBits ( int const raw ) {
	std::cout << "setRawBits appelé!" << std::endl;
	this->value = raw;
}

Fixed::Fixed( void ) : value(0) {
	std::cout << "Constructeur par defaut appele\n";
}

Fixed::~Fixed() {
	std::cout << "Destructeur par defaut appele\n";
}


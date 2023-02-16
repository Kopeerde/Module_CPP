
#include "../headers/Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;

	this->exposant = 0;
}

Fixed::Fixed(const Fixed &original)
{
	std::cout << "Copy constructor called" << std::endl;
	this->exposant = original.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assigment operator called" << std::endl;
	if (this == &other)
		return *this;
	exposant = other.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->exposant;
}

void Fixed::setRawBits(const int raw)
{
	this->exposant = raw;
}

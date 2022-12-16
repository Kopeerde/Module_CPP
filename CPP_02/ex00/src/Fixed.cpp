
#include "../headers/Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;

	this->exposant = 0;
	this->mantisse = 0;
}

Fixed::Fixed(const Fixed &original)
{
	std::cout << "Copy constructor called" << std::endl;
	exposant = original.exposant;
	mantisse = original.mantisse;
}

Fixed::~Fixed()
{ std::cout << "Destructor called" << std::endl; }


Fixed& Fixed::operator=(const Fixed&)
{
	std::cout << "Copy assigment operator called" << std::endl;
	return *this;
}

int Fixed::getRawBits(void) const
{
	return 0;
}

void Fixed::setRawBits(const int raw)
{
	this->exposant = raw;
}

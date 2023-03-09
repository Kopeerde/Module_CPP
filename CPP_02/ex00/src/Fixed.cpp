
#include "../headers/Fixed.hpp"


Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;

	this->fixed_value = 0;
}

Fixed::Fixed(const Fixed &original)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixed_value = original.getRawBits();
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
	fixed_value = other.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixed_value;
}

void Fixed::setRawBits(const int raw)
{
	this->fixed_value = raw;
}

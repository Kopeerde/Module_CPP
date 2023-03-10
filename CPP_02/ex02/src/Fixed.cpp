
#include "../headers/Fixed.hpp"

/*
 ********************************************************
 * 					CONSTRUCTEURS						*
 ********************************************************
 */

/**
 * Default constructor
 */
Fixed::Fixed()
{
//	std::cout << "Default constructor called" << std::endl;

	fixed_value = 0;
}

/**
 * It's a constructor that takes an int as a parameter and sets the value of the fixed_value to the value of the int.
 *
 * @param value the value to assign to the Fixed instance.
*/
Fixed::Fixed(const int value)
{
//	std::cout << "Int constructor called" << std::endl;

	this->fixed_value = value << this->mantisse_size;
}

Fixed::Fixed(const float value)
{
//	std::cout << "Float constructor called" << std::endl;

	this->fixed_value = roundf(value * (1 << this->mantisse_size));
}

/**
 * It copies the value of the parameter into the object
 *
 * @param original a reference to the object that is being copied.
*/
Fixed::Fixed(const Fixed &original)
{
//	std::cout << "Copy constructor called" << std::endl;

	this->fixed_value = original.getRawBits();
}

/*
 ****************************************************
 *						 DESTRUCTEURS				*
 ****************************************************
*/


/**
 * The destructor is called when the object is destroyed
*/
Fixed::~Fixed()
{
//	std::cout << "Destructor called" << std::endl;
}


/*
 ************************************************
 *					SETTERS						*
 ************************************************
*/

/**
* It sets the value of the variable fixed_value to the value of the parameter raw.
*
* @param raw the raw value of the fixed point value
*/
void    Fixed::setRawBits(int const raw)
{ this->fixed_value = raw; }

/*
 ************************************************
 *					GETTERS						*
 ************************************************
*/

/**
 * It returns the value of the member variable fixed_value
 *
 * @return The value of the member variable fixed_value.
 */
int Fixed::getRawBits() const
{ return this->fixed_value; }

/*
 ************************************************
 *					FONCTIONS MEMBRES			*
 ************************************************
*/

/**
* It returns the value of the fixed point number as an integer
*
* @return The value of the exponent.
*/
int Fixed::toInt() const
{
	return this->fixed_value >> this->mantisse_size;
}

float Fixed::toFloat(void) const
{
	return (float) fixed_value / (1 << mantisse_size);
}

/*
********************************************************
*						SURCHARGES						*
********************************************************
*/


/**
 * If the object is not the same as the one we're assigning to, then assign the value of the other object to the current
 * object
 *
 * @return A reference to the object that called the function.
*/
Fixed& Fixed::operator=(const Fixed& other)
{
//	std::cout << "Copy assigment operator called" << std::endl;

	if (this == &other)
		return *this;
	fixed_value = other.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream& stream, const Fixed& self)
{
	stream << self.toFloat();
	return stream;
}

Fixed& Fixed::operator++()
{
	// Pre-increment
	this->fixed_value += 1;
	return *this;
}

Fixed& Fixed::operator--()
{
	// Pre-decrement
	this->fixed_value -= 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	// Post-increment
	Fixed temp(*this);
	++(*this);
	return temp;
}

Fixed Fixed::operator--(int)
{
	// Post-decrement
	Fixed temp(*this);
	--(*this);
	return temp;
}

bool Fixed::operator>(const Fixed &other) const
{
	return this->getRawBits() > other.getRawBits();
}

bool Fixed::operator<(const Fixed &other) const
{
	return this->getRawBits() < other.getRawBits();
}

bool Fixed::operator>=(const Fixed &other) const
{
	return this->getRawBits() >= other.getRawBits();
}

bool Fixed::operator<=(const Fixed &other) const
{
	return this->getRawBits() <= other.getRawBits();
}

bool Fixed::operator==(const Fixed &other) const
{
	return this->getRawBits() == other.getRawBits();
}

bool Fixed::operator!=(const Fixed &other) const
{
	return this->getRawBits() != other.getRawBits();
}

Fixed &Fixed::operator+(const Fixed &other)
{
	Fixed buffer(this->toFloat() + other.toFloat());
	*this = buffer;
	return *this;
}

Fixed &Fixed::operator-(const Fixed &other)
{
	Fixed buffer(this->toFloat() - other.toFloat());
	*this = buffer;

	return *this;
}

Fixed &Fixed::operator*(const Fixed &other)
{
	Fixed buffer(this->toFloat() * other.toFloat());
	*this = buffer;

	return *this;
}

Fixed &Fixed::operator/(const Fixed &other)
{
	Fixed buffer(this->toFloat() / other.toFloat());
	*this = buffer;

	return *this;
}

/*
********************************************************
*					FONCTIONS STATIQUES					*
********************************************************
*/

const Fixed &Fixed::min(const Fixed &left, const Fixed &right)
{
	if (left.getRawBits() < right.getRawBits())
		return left;
	return right;
}

Fixed &Fixed::min(Fixed &left, Fixed &right)
{
	if (left.getRawBits() < right.getRawBits())
		return left;
	return right;
}

const Fixed &Fixed::max(const Fixed &left, const Fixed &right)
{
	if (left.getRawBits() < right.getRawBits())
		return right;
	return left;
}

Fixed &Fixed::max(Fixed &left, Fixed &right)
{
	if (left.getRawBits() < right.getRawBits())
		return right;
	return left;
}


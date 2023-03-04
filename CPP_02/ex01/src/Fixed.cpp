
#include "../headers/Fixed.hpp"
#include <bitset>
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
	std::cout << "Default constructor called" << std::endl;

	this->exposant = 0;
}

/**
 * It's a constructor that takes an int as a parameter and sets the value of the exposant to the value of the int.
 *
 * @param value the value to assign to the Fixed instance.
*/
Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	if (value > 16777215)
		throw std::overflow_error("Value is over 16777215 (2^24)");
	this->exposant = value;
	std::bitset<32> x(value);
	std::cout << x << std::endl;
}

// TODO
Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	if ((int) value => 2^(32 - (this->mantisse_size + 1)))
		throw std::overflow_error("Value is over 16777215 (2^24)");
	// Stocker le int sur les 32 - (this->mantisse_size + 1) premiers bits
	this->exposant = (int) value;
	// Stocker la mantisse dans les 8 derniers bits
	for (int i = 10; i < 18; i++)
	{

	}
}

/**
 * It copies the value of the parameter into the object
 *
 * @param original a reference to the object that is being copied.
*/
Fixed::Fixed(const Fixed &original)
{
	std::cout << "Copy constructor called" << std::endl;
	this->exposant = original.getRawBits();
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
	std::cout << "Destructor called" << std::endl;
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
	std::cout << "Copy assigment operator called" << std::endl;
	if (this == &other)
		return *this;
	exposant = other.getRawBits();
	return *this;
}

// TODO
Fixed &Fixed::operator<<(const Fixed &)
{
	return *this;
}

/*
 ************************************************
 *					FONCTIONS MEMBRES			*
 ************************************************
*/


/**
 * It returns the value of the member variable exposant
 *
 * @return The value of the member variable exposant.
 */
int Fixed::getRawBits(void) const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return this->exposant;
}

/**
 * It sets the value of the variable exposant to the value of the parameter raw.
 *
 * @param raw the raw value of the fixed point value
 */
void Fixed::setRawBits(const int raw)
{
	this->exposant = raw;
}

/**
 * It returns the value of the fixed point number as an integer
 *
 * @return The value of the exponent.
 */
int Fixed::toInt(void) const
{
	return this->exposant;
}

// TODO
float Fixed::toFloat(void) const
{
	float res = 0;

	res += this->exposant;



	return res;
}



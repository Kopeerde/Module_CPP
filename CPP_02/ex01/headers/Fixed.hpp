
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int                 fixed_value;
		static const int    mantisse_size = 8;

	public:
		// Contructeurs
		Fixed();					// Constructeur par defaut
		Fixed(const int value);		// Constructeur avec valeure par defaut de type int
		Fixed(const float value);	// Constructeur avec valeure par defaut de type float
		Fixed(const Fixed &original);	// Constructeur par copie

		// Destructeur
		~Fixed();					// Destructeur par defaut

		// Surcharges
		Fixed& operator=(const Fixed &);	// Surchage operateur =

		// getter
		int getRawBits(void) const;

		// setter
		void setRawBits(int const raw);

		// Fonctions membres
		int toInt(void) const;

		float toFloat(void) const;
};

std::ostream& operator<<(std::ostream& stream, const Fixed&);

#endif //FIXED_HPP
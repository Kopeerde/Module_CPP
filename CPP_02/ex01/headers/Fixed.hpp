
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int exposant;
		static const int mantisse_size = 8;

	public:
		// Constructeurs
		Fixed();					  // Constructeur par defaut
		Fixed(const Fixed &original); // Constructeur par copie
		Fixed(const int value);		  // Constructeur avec valeure par defaut de type int
		Fixed(const float value);	  // Constructeur avec valeure par defaut de type float

		// Destructeurs
		~Fixed();					  // Destructeur par defaut

		// Surcharges
		Fixed& operator=(const Fixed&); // Surchage operateur =
		Fixed& operator<<(const Fixed&);

		// Fonctions membres
		int toInt(void) const;

		float toFloat(void) const;

		// getter
		int getRawBits(void) const;

		// setter
		void setRawBits(int const raw);
};


#endif //FIXED_HPP

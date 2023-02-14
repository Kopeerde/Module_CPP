
#ifndef MODULE_CPP_FIXED_HPP
#define MODULE_CPP_FIXED_HPP

#define NB_VAL_MANT 8

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int exposant;
		int mantisse[NB_VAL_MANT];

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
		int getRawBits(void) const;
		int toInt(void) const;

		void setRawBits(int const raw);

		float toFloat(void) const;

};


#endif //MODULE_CPP_FIXED_HPP

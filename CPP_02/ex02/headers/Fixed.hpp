
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int fixed_value;
		static const int mantisse_size = 8;

	public:
		// Constructeurs
		Fixed();					  // Constructeur par defaut
		Fixed(const Fixed &original); // Constructeur par copie
		Fixed(const int value);		  // Constructeur avec valeure par defaut de type int
		Fixed(const float value);	  // Constructeur avec valeure par defaut de type float

		// Destructeurs
		~Fixed();					  // Destructeur par defaut

		// getter
		int getRawBits(void) const;

		// setter
		void setRawBits(int const raw);

		// Surcharges
			// Assignation
		Fixed& operator=(const Fixed&); // Surcharge operateur =

			// Comparaison
		bool operator>(const Fixed &other) const; // Surcharge operateur >
		bool operator<(const Fixed &other) const; // Surcharge operateur <
		bool operator>=(const Fixed &other) const; // Surcharge operateur >=
		bool operator<=(const Fixed &other) const; // Surcharge operateur <=
		bool operator==(const Fixed &other) const; // Surcharge operateur ==
		bool operator!=(const Fixed &other) const; // Surcharge operateur !=

			//Arithmetique
		Fixed operator+(const Fixed &other) const; // Surcharge operateur +
		Fixed operator-(const Fixed &other) const; // Surcharge operateur -
		Fixed operator*(const Fixed &other) const; // Surcharge operateur *
		Fixed operator/(const Fixed &other) const; // Surcharge operateur /

			// Pre/Post increment
		Fixed &operator++(); // Surcharge prefix operateur ++<var>
		Fixed operator++(int); // Surcharge postfix operateur <var>++
		Fixed &operator--(); // Surcharge prefix operateur --<var>
		Fixed operator--(int); // Surcharge postfix operateur <var>--

		// Fonctions membres
		int toInt(void) const;

		float toFloat(void) const;

		static const Fixed& min(const Fixed &left, const Fixed &right);
		static Fixed& min(Fixed &left, Fixed &right);
		static const Fixed& max(const Fixed &left, const Fixed &right);
		static Fixed& max(Fixed &left, Fixed &right);
};

std::ostream& operator<<(std::ostream &stream, const Fixed&); // Surcharge operateur <<

#endif //FIXED_HPP

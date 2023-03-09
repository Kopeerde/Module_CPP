
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int fixed_value;
		static const int mantisse_size = 8;

	public:
		// Constructeurs
		Fixed();
		Fixed(const Fixed &original);

		// Destructeurs
		~Fixed();

		// Surcharges
		Fixed& operator=(const Fixed&);

		// Getters
		int getRawBits(void) const;

		// Setters
		void setRawBits(int const raw);

};


#endif //FIXED_HPP

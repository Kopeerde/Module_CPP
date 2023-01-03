
#ifndef MODULE_CPP_FIXED_HPP
#define MODULE_CPP_FIXED_HPP

#define NB_VAL_MANT 8

#include <iostream>

class Fixed
{
	private:
		int exposant;
		int static const mantisse[NB_VAL_MANT];

	public:
		Fixed();
		Fixed(const Fixed &original);
		~Fixed();
		Fixed& operator=(const Fixed&);
		int getRawBits(void) const;
		void setRawBits(int const raw);

};


#endif //MODULE_CPP_FIXED_HPP

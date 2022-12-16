
#ifndef MODULE_CPP_FIXED_HPP
#define MODULE_CPP_FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int exposant;
		int mantisse[8]; // TODO : int static const selon le sujet??

	public:
		Fixed();
		Fixed(const Fixed &original);
		~Fixed();
		Fixed& operator=(const Fixed&);
		int getRawBits(void) const;
		void setRawBits(int const raw);

};


#endif //MODULE_CPP_FIXED_HPP

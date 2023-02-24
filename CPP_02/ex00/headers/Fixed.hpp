
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int exposant;
		static const int mantisse_size = 8;

	public:
		Fixed();
		Fixed(const Fixed &original);
		~Fixed();
		Fixed& operator=(const Fixed&);
		int getRawBits(void) const;
		void setRawBits(int const raw);

};


#endif //FIXED_HPP

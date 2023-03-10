
#include "../headers/Fixed.hpp"


int main()
{
	Fixed a;
	Fixed c = a;

	std::cout << "Etats initiaux : \na = " << a << "\nb = 10.1016\nc = " << c << std::endl;


	std::cout << "\nMultiply test : 5.05f * 2 (and stored to b)" << std::endl;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	// Test arithmetiques
	{
		// 5.05f * 2
		std::cout << b << "\n" << std::endl;

		// test +
		std::cout << "+ test : a + 10.05 : ~10.05" << std::endl;
		std::cout << (a + Fixed(10.05f)) << "\n" << std::endl;

		// test -
		std::cout << "- test : a - 10.05 : ~0" << std::endl;
		std::cout << (a - Fixed(10.05f)) << "\n" << std::endl;

		// test /
		std::cout << "/ test : b / 2 : ~5.05" << std::endl;
		Fixed d(b);
		std::cout << (d / Fixed(2)) << "\n" << std::endl;
	}

	// Test d'egalite ==
	{
		std::cout << "== test : c == a : true" << std::endl;
		std::cout << (a == c) << "\n" << std::endl;

		std::cout << "== test : a == b : false" << std::endl;
		std::cout << (a == b) << "\n" << std::endl;
	}

	// Test de difference !=
	{
		std::cout << "!= test : c != a : false" << std::endl;
		std::cout << (a != c) << "\n" << std::endl;

		std::cout << "!= test : a != b : true" << std::endl;
		std::cout << (a != b) << "\n" << std::endl;
	}

	// Test d'inferiorite <
	{
		std::cout << "< test : c < a : false" << std::endl;
		std::cout << (a < c) << "\n" << std::endl;

		std::cout << "< test : a < b : true" << std::endl;
		std::cout << (a < b) << "\n" << std::endl;

		std::cout << "< test : b < a : false" << std::endl;
		std::cout << (b < a) << "\n" << std::endl;
	}

	// Test inferieur ou egal <=
	{
		std::cout << "<= test : c <= a : true" << std::endl;
		std::cout << (a <= c) << "\n" << std::endl;

		std::cout << "<= test : a < b : true" << std::endl;
		std::cout << (a <= b) << "\n" << std::endl;

		std::cout << "<= test : b <= a : false" << std::endl;
		std::cout << (b <= a) << "\n" << std::endl;
	}

	// Test de superiorite
	{
		std::cout << "> test : c > a : false" << std::endl;
		std::cout << (a > c) << "\n" << std::endl;

		std::cout << "> test : a > b : false" << std::endl;
		std::cout << (a > b) << "\n" << std::endl;

		std::cout << "> test : b > a : true" << std::endl;
		std::cout << (b > a) << "\n" << std::endl;
	}

	// Test superieur ou egal
	{
		std::cout << ">= test : c >= a : true" << std::endl;
		std::cout << (a >= c) << "\n" << std::endl;

		std::cout << ">= test : a >= b : false" << std::endl;
		std::cout << (a >= b) << "\n" << std::endl;

		std::cout << ">= test : b >= a : true" << std::endl;
		std::cout << (b >= a) << "\n" << std::endl;
	}

	// Test Pre/Post incrementation/decrementation
	{
		std::cout << "Pre-Increment test" << std::endl;
		std::cout << a << std::endl;
		std::cout << ++a << "\n" << std::endl;

		std::cout << "Post-Increment test" << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << "\n" << std::endl;

		std::cout << "Pre-Decrement test" << std::endl;
		std::cout << a << std::endl;
		std::cout << --a << "\n" << std::endl;

		std::cout << "Post-Decrement test" << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << "\n" << std::endl;
	}

	// Test fonctions membres min/max
	{
		std::cout << "max() test" << std::endl;
		std::cout << "a = " << a << std::endl;
		std::cout << "b = " << b << std::endl;
		std::cout << Fixed::max(a, b) << "\n" << std::endl;


		std::cout << "min() test" << std::endl;
		std::cout << "a = " << a << std::endl;
		std::cout << "b = " << b << std::endl;
		std::cout << Fixed::min(a, b) << "\n" << std::endl;
	}
	return 0;
}
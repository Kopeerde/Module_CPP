
#include "../headers/Base.hpp"
#include "../headers/A.hpp"
#include "../headers/B.hpp"
#include "../headers/C.hpp"


int main()
{
	Base base;
	Base *rand = base.generate();
	A test_A = A();
	B test_B = B();
	C test_C = C();

	base.identify(&test_A);
	base.identify(&test_B);
	base.identify(&test_C);
	base.identify(rand);

	std::cout << std::endl;

	base.identify(test_A);
	base.identify(test_B);
	base.identify(test_C);
	base.identify(*rand);


	delete rand;


	return 0;
}
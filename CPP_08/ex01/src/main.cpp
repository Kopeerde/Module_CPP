
#include "../headers/Span.hpp"

int main()
{
	Span sp = Span(5);
	Span test_add_range = Span(105); // 105 etant le nombres de valeures finale, passer a 104 pour tester le addRange
	std::vector<int> range;

	for (int i = 0; i < 100; i++)
		range.push_back(i);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl;

	test_add_range.addNumber(1);
	test_add_range.addNumber(2);
	test_add_range.addNumber(3);
	test_add_range.addNumber(4);
	test_add_range.addNumber(5);
	test_add_range.addRange(range.begin(), range.end());



	return 0;
}

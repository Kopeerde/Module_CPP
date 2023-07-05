
#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <vector>
#include <stdlib.h>
#include <iostream>

class Span
{
	private:
		std::vector<int> vec;
		size_t max_size;

	public:
		Span();
		Span(size_t max_size);
		~Span();
		Span(const Span &original);
		Span& operator=(const Span&);

		void addNumber(int value);
		void addRange(std::vector<int>::const_iterator start, std::vector<int>::const_iterator end);

		unsigned int shortestSpan();
		unsigned int longestSpan();

};


#endif //SPAN_HPP

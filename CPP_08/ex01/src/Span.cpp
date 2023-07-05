
#include "../headers/Span.hpp"

Span::Span()
{
	this->max_size = 0;
}

Span::Span(size_t max_size)
{
	this->max_size = max_size;
	this->vec = std::vector<int>();
}

Span::Span(const Span &original)
{
	this->max_size = original.max_size;
	this->vec = original.vec;
}

Span& Span::operator=(const Span &other)
{
	if (this == &other)
		return *this;

	this->max_size = other.max_size;
	this->vec = other.vec;
	return *this;
}

Span::~Span()
{
	std::cout << "Span object destructor called." << std::endl;
}


unsigned int Span::shortestSpan()
{
	if (this->vec.size() == 0 || this->vec.size() == 1)
		throw std::length_error("Current array is empty.");
	if (this->vec.size() == 1)
		throw std::length_error("Current array contain only one element.");

	unsigned int res = this->vec[1] - this->vec[0];

	for (size_t i = 0; (i + 1) < this->vec.size(); i++)
	{
		if ((this->vec[i + 1] - this->vec[i]) < res)
			res = this->vec[i + 1] - this->vec[i];
	}

	return res;
}

unsigned int Span::longestSpan()
{
	if (this->vec.size() == 0 || this->vec.size() == 1)
		throw std::length_error("Current array is empty.");
	if (this->vec.size() == 1)
		throw std::length_error("Current array contain only one element.");

	return (this->vec.back() - this->vec.front());
}

void Span::addNumber(int value)
{
	if (this->vec.size() >= this->max_size)
		throw std::length_error("Max vector size length exceeded.");

	this->vec.push_back(value);
	std::sort(this->vec.begin(), this->vec.end());
}

void Span::addRange(std::vector<int>::const_iterator start, std::vector<int>::const_iterator end)
{
	for (std::vector<int>::iterator buffer; buffer != end; buffer++)
	{
		int index = std::distance(buffer, start);
	}
}

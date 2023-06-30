
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


Span::~Span()
{
	std::cout << "Span object destructor called." << std::endl;
}

// TODO : Surcharge opérateur = et constructeur par copie


int Span::shortestSpan()
{
	int res = this->vec[1] - this->vec[0];

	for (size_t i = 0; (i + 1) < this->vec.size(); i++)
	{
		if ((this->vec[i + 1] - this->vec[i]) < res)
			res = this->vec[i + 1] - this->vec[i];
	}

	return res;
}

int Span::longestSpan()
{
	return (this->vec.back() - this->vec.front());
}

void Span::addNumber(int value)
{
	if (this->vec.size() >= this->max_size)
		throw std::length_error("Max vector size length exceeded.");

	this->vec.push_back(value);
	std::sort(this->vec.begin(), this->vec.end());
}

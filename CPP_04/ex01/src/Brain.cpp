

#include "../headers/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain class has been created." << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain class has been destroyed." << std::endl;
}

Brain::Brain(const Brain &original)
{
	std::cout << "Brain copy constructor called." << std::endl;
	(void) original;
}

Brain &Brain::operator=(const Brain &other)
{
	if (this == &other)
		return *this;
	return *this;
}

unsigned int Brain::get_max_ideas() const
{
	return this->max_ideas;
}

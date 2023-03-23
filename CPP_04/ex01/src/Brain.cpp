

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
	std::copy(original.ideas->begin(), original.ideas->end() + 1, this->ideas);
}

Brain &Brain::operator=(const Brain &other)
{
	if (this == &other)
		return *this;
	std::copy(other.ideas->begin(), other.ideas->end() + 1, this->ideas);
	return *this;
}

unsigned int Brain::get_max_ideas() const
{
	return this->max_ideas;
}

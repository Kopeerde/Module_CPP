//
// Created by kmendes- on 2/17/23.
//

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

void Brain::set_idea(int index, std::string str)
{
	this->ideas[index] = str;
}

std::string Brain::get_idea(int index) const
{
	return this->ideas[index];
}
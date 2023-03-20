

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		static const unsigned int max_ideas = 100;

	public:
		std::string ideas[max_ideas];

		Brain();
		~Brain();
		Brain(const Brain &original);
		Brain& operator=(const Brain&);

		// Getter
		unsigned int get_max_ideas() const;
};


#endif //BRAIN_HPP

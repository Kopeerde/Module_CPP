

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string ideas[100];

	public:
		Brain();
		~Brain();
		Brain(const Brain &original);
		Brain& operator=(const Brain&);

		// Setter
		void set_idea(int index, std::string str);

		// Getter
		std::string get_idea(int index) const;

};


#endif //BRAIN_HPP

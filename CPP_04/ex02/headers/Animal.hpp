

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "./Brain.hpp"

class Animal
{
	protected:
		std::string type;

	private:


	public:
		Animal();
		virtual ~Animal() = 0;
		Animal(const Animal &original);
		Animal& operator=(const Animal&);
		
		virtual void makeSound() const;

		// Getter
		std::string getType() const;
		virtual std::string get_idea(unsigned int index) const = 0;

		// Setter
		virtual void set_idea(unsigned int index, std::string str) = 0;
};


#endif //ANIMAL_HPP



#ifndef DOG_HPP
#define DOG_HPP

#include "./Animal.hpp"
#include "./Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;

	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog &original);
		Dog& operator=(const Dog&);
		void makeSound() const;

		// Getter
		std::string get_idea(unsigned int index) const;

		// Setter
		void set_idea(unsigned int index, std::string str);
};


#endif //DOG_HPP

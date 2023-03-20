

#ifndef CAT_HPP
#define CAT_HPP

#include "./Animal.hpp"
#include "./Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;

	public:
		Cat();
		virtual ~Cat();
		Cat(const Cat &original);
		Cat& operator=(const Cat&);
		void makeSound() const;

		// Getter
		std::string get_idea(unsigned int index) const;

		// Setter
		void set_idea(unsigned int index, std::string str);
};


#endif //CAT_HPP



#ifndef CAT_HPP
#define CAT_HPP

#include "./Animal.hpp"

class Cat : public Animal
{
	private:


	public:
		Cat();
		virtual ~Cat();
		Cat(const Cat &original);
		Cat& operator=(const Cat&);

		// Fonctions membre
		void makeSound() const;
};


#endif //CAT_HPP

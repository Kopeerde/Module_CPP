//
// Created by kmendes- on 2/16/23.
//

#ifndef CAT_HPP
#define CAT_HPP

#include "./Animal.hpp"

class Cat : public Animal
{
	private:


	public:
		Cat();
		~Cat();
		Cat(const Cat &original);
		Cat& operator=(const Cat&);
		void makeSound() const;
};


#endif //CAT_HPP

//
// Created by kmendes- on 2/16/23.
//

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "./WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:


	public:
		WrongCat();
		virtual ~WrongCat();
		WrongCat(const WrongCat &original);
		WrongCat& operator=(const WrongCat&);
		void makeSound() const;

};


#endif //WRONGCAT_HPP

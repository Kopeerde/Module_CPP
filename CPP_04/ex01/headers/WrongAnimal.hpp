//
// Created by kmendes- on 2/16/23.
//

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;

	private:


	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal &original);
		WrongAnimal& operator=(const WrongAnimal&);
		virtual void makeSound() const;
		std::string getType() const;
};


#endif //WRONGANIMAL_HPP

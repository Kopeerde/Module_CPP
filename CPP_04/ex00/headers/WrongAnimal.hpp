

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

		// Getters
		std::string getType() const;

		// Fonctions membre
		void makeSound() const;
};


#endif //WRONGANIMAL_HPP

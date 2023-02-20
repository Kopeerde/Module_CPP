
#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class ICharacter;

class AMateria
{
	protected:
		std::string type;

	private:

	public:
		AMateria(std::string const & type);
		~AMateria();
		AMateria(const AMateria &original);
		AMateria& operator=(const AMateria&);

		std::string const & getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

};



#endif

#ifndef ICE_HPP
#define ICE_HPP

#include "./AMateria.hpp"

class Ice : public AMateria
{
	protected:

	private:

	public:
		Ice();
		~Ice();
		Ice(const Ice &original);
		Ice& operator=(const Ice &);
};


#endif
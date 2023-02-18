

#ifndef CURE_HPP
#define CURE_HPP

#include "./AMateria.hpp"


class Cure : public AMateria
{
	protected:
	
	private:

	public:
		Cure();
		~Cure();
		Cure(const Cure &original);
		Cure& operator=(const Cure &);
};

#endif




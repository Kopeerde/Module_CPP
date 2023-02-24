//
// Created by kmendes- on 1/26/23.
//

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "./ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:

	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap &original);
		~FragTrap();
		FragTrap& operator=(const FragTrap&);

		void highFivesGuys(void);
};


#endif //FRAGTRAP_HPP

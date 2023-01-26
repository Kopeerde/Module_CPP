//
// Created by kmendes- on 1/26/23.
//

#ifndef MODULE_CPP_FRAGTRAP_HPP
#define MODULE_CPP_FRAGTRAP_HPP

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


#endif //MODULE_CPP_FRAGTRAP_HPP

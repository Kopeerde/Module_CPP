
#ifndef MODULE_CPP_WEAPON_HPP
#define MODULE_CPP_WEAPON_HPP

#include <string>

class Weapon
{
	private:
		std::string type;

	public:
		Weapon();
		~Weapon();
		std::string const &getType();
		void setType(std::string str);
};


#endif //MODULE_CPP_WEAPON_HPP

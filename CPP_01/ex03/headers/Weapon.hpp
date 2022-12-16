
#ifndef MODULE_CPP_WEAPON_HPP
#define MODULE_CPP_WEAPON_HPP

#include <string>

class Weapon
{
	private:
		std::string type;

	public:
		Weapon(std::string str = "");
		~Weapon();
		const std::string &getType();
		void setType(std::string str);
};


#endif //MODULE_CPP_WEAPON_HPP

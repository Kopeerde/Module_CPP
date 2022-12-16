
#ifndef MODULE_CPP_HARL_HPP
#define MODULE_CPP_HARL_HPP

#include <string>
#include <iostream>

class Harl
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

	public:
		void complain(std::string level);
};


#endif //MODULE_CPP_HARL_HPP

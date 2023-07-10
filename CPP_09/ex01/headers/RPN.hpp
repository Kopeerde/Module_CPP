
#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <queue>
#include <stdlib.h>

class RPN
{
	private:
		std::queue<int> values;
		std::queue<char> signs;

	public:
		RPN();
		RPN(char* str);
		RPN(const RPN &original);
		~RPN();
		RPN& operator=(const RPN &);

		float get_result();

};


#endif //RPN_HPP


#include "../headers/RPN.hpp"

RPN::RPN()
{
	this->signs = std::queue<char>();
	this->values = std::queue<int>();
}

RPN::RPN(char* str)
{
	for (int i = 0; str[i]; i++)
	{
		if (i % 2 != 0)
			continue;
		if (str[i] >= '0' && str[i] <= '9')
			this->values.push(str[i] - '0');
		else
			this->signs.push(str[i]);
	}
	if ((this->values.size() - 1) != this->signs.size())
	{
		std::cout << "Error" << std::endl;
		exit(1);
	}
}

RPN::RPN(const RPN &original)
{
	this->values = original.values;
	this->signs = original.signs;
}

RPN::~RPN()
{

}

RPN& RPN::operator=(const RPN &other)
{
	if (this == &other)
		return *this;

	this->values = other.values;
	this->signs = other.signs;

	return *this;
}

float RPN::get_result()
{
	float res = this->values.front();
	int left;
	char sign;

	this->values.pop();

	for (;!this->values.empty();)
	{
		left = this->values.front();
		this->values.pop();
		sign = this->signs.front();
		this->signs.pop();

		if (sign == '-')
			res -= left;
		else if (sign == '+')
			res += left;
		else if (sign == '/')
			res /= left;
		else
			res *= left;
	}
	return res;
}





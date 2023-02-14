#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 1)
    	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
	{
		std::string	buffer;

		for (int i = 1; i < argc; i++)
		{
			for (int j = 0; argv[i][j]; j++)
				buffer += toupper(argv[i][j]);
		}
		std::cout << buffer << std::endl;
	}
    return 0;
}


#include <string>
#include <iostream>

int main()
{
	std::string brain = "HI THIS IS BRAIN";
	// Pointeur
	// pas necesaire d'initialiser lors de la declaration
	// Peut etre NULL
	// Besoin de dereferencer
	// Operation arithmetiques possible sur le pointeur
	// Peut etre re-assigne
	std::string *stringPTR = &brain;
	// Reference
	// Obligation d'initialiser lors de la declaration
	// Ne peut etre NULL
	// Inutile de dereferencer
	// Impossible de faire des operations arithmetique sur les references
	// Ne peut etre re-assigne
	std::string &stringREF = brain;

	std::cout << "Addresse de la variable  : " << &brain << std::endl;
	std::cout << "Addresse du pointeur     : " << stringPTR << std::endl;
	std::cout << "Addresse de la reference : " << &stringREF << std::endl;

	std::cout << "Valeure de la variable  : " << brain << std::endl;
	std::cout << "Valeure du pointeur     : " << *stringPTR << std::endl;
	std::cout << "Valeure de la reference : " << stringREF << std::endl;

	return 0;
}
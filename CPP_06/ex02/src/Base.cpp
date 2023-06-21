
#include "../headers/Base.hpp"
#include "../headers/A.hpp"
#include "../headers/B.hpp"
#include "../headers/C.hpp"

Base::~Base()
{
	std::cout << "Base class virtual destructor Base called." << std::endl;
}


Base *Base::generate()
{
	srand(time(NULL));
	if (rand() % 100 <= 33)
	{
		return (new A());
	}
	else if (33 < rand() % 100 && rand() % 100 <= 66)
	{
		return (new B());
	}
	else
	{
		return (new C());
	}
}


void Base::identify(Base* p)
{
	if (A* test = dynamic_cast<A*>(p))
	{
		std::cout << "Pointer received is of type A." << std::endl;
	}
	else if (B* test = dynamic_cast<B*>(p))
	{
		std::cout << "Pointer received is of type B." << std::endl;
	}
	else if (C* test = dynamic_cast<C*>(p))
	{
		std::cout << "Pointer received is of type C." << std::endl;
	}
}

void Base::identify(Base& p)
{
	try
	{
		A& test = dynamic_cast<A&>(p);
		(void) test;
		std::cout << "Pointer received is of type A." << std::endl;
	}
	catch(std::exception)
	{}
	try
	{
		B& test = dynamic_cast<B&>(p);
		(void) test;
		std::cout << "Pointer received is of type B." << std::endl;
	}
	catch(std::exception)
	{}
	try
	{
		C& test = dynamic_cast<C&>(p);
		(void) test;
		std::cout << "Pointer received is of type C." << std::endl;
	}
	catch(std::exception)
	{}
}





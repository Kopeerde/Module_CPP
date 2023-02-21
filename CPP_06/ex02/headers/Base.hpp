//
// Created by kmendes- on 2/21/23.
//

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base
{
	private:


	public:
	virtual ~Base();

	Base * generate(void);
	void identify(Base* p);
	void identify(Base& p);

};


#endif //BASE_HPP

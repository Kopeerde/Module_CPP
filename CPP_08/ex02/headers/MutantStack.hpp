
#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <algorithm>

template <typename T>
class MutantStack : public std::stack<T, std::deque<T> >
{
	private:

	public:
		typedef typename std::stack<T> iterator;
		iterator begin();
		iterator end();

};

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return this->begin();
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return this->end();
}


#endif //MUTANTSTACK_HPP

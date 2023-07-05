
#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <algorithm>

template <class T>
class MutantStack : public std::stack<T, std::deque<T> >
{
	private:

	public:
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack<T> &original);

		MutantStack& operator=(const MutantStack<T> &);

		Iterator begin()

};

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{

}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{

}

#endif //MUTANTSTACK_HPP

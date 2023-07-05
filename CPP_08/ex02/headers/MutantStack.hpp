
#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <algorithm>

template <typename T, class container = std::deque<T> >
class MutantStack : public std::stack<T, container>
{
	private:

	public:
		MutantStack() {};
		~MutantStack() {};
		MutantStack(MutantStack const &original);
		MutantStack<T>& operator=(MutantStack const &);

		typedef typename container::iterator iterator;
		iterator begin() { return this->c.begin(); };
		iterator end() { return this->c.end(); };

};


#endif //MUTANTSTACK_HPP

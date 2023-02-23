//
// Created by kmendes- on 2/23/23.
//

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <class T>
T max(T a, T b)
{
	// if a > b, return a, else if a < b or a == b, return b
	return a > b ? a : b;
}

template <class T>
T min(T a, T b)
{
	// if a < b, return a, else if a > b or a == b, return b
	return a < b ? a : b;
}

template <class T>
void swap(T &a, T &b)
{
	T c = a;
	a = b;
	b = c;
}



#endif //WHATEVER_HPP

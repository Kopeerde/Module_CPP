
#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstdlib>
#include <stdexcept>
#include <iostream>

template <class T>
class Array
{
	private:
		T *values;
		size_t len;
	
	public:
		Array();
		Array(unsigned int n);
		~Array();
		Array(const Array &original);
		
		Array<T>& operator=(const Array &);
		T& operator[](unsigned int index);

		int size() const;

};

template<class T>
T &Array<T>::operator[](const unsigned int index)
{
	if (index >= this->len)
		throw std::out_of_range("Out of range exception.");
	return this->values[index];
}

template<class T>
int Array<T>::size() const
{
	return this->len;
}

template<class T>
Array<T>& Array<T>::operator=(const Array &other)
{
	if (this == &other)
		return *this;

	if (this->len != other.size())
	{
		delete[] this;
		this = Array<T>(other);
	}
	else
	{
		for (unsigned int i = 0; i < this->len; i++)
			this->values[i] = other.values[i];
	}
}

template<class T>
Array<T>::Array(const Array &original)
{
	this->len = original.size();
	this->values = new T[this->len]();
	for (unsigned int i = 0; i < this->len; i++)
		this->values[i] = original.values[i];
}

template<class T>
Array<T>::Array()
{
	this->len = 0;
	this->values = new T[0];
}

template<class T>
Array<T>::Array(const unsigned int n)
{
	this->len = n;
	this->values = new T[n];
	for (unsigned int i = 0; i < n; i++)
		this->values[i] = 0;
}

template<class T>
Array<T>::~Array()
{
	delete [] this->values;
}

#endif //ARRAY_HPP

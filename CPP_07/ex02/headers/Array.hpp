
#ifndef ARRAY_HPP
#define ARRAY_HPP

template <class T>
class Array
{
	private:
		T values;
	
	public:
		Array();
		Array(const unsigned int n);
		~Array();
		Array(const Array &original);
		
		void operator=(const Array &);
		int& operator[](const int index);

		int size() const;

};

#endif //ARRAY_HPP

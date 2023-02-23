//
// Created by kmendes- on 2/23/23.
//

#ifndef SPAN_HPP
#define SPAN_HPP


class Span
{
	private:


	public:
		Span();
		~Span();
		Span(const Span &original);
		Span& operator=(const Span&);

		void addNumber();
		int shortestSpan();
		int longestSpan();

};


#endif //SPAN_HPP

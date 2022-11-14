#pragma once

#include <iostream>

class Span {

	public :

		Span(unsigned int n);
		Span(const Span & src);
		Span& operator=(const Span & rhs);
		~Span();

		void			addNumbered(unsigned int n);
		unsigned int	shortestSpan(void) const;
		unsigned int	longestSpan(void) const;

};
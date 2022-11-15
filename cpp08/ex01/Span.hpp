#pragma once

#include <iostream>
#include <vector>

class Span {

	private :

		unsigned int 				_n;
		std::vector<unsigned int>	_vector;

	public :

		Span(unsigned int n);
		Span(const Span & src);
		Span& operator=(const Span & rhs);
		~Span();

		void			addNumber(unsigned int n);
		unsigned int	shortestSpan(void) const;
		unsigned int	longestSpan(void) const;

		class TooMuchNumberException : public std::exception {

				public :
					virtual const char * what() const throw(){
						return ("No space left to add a number");
					}
		};
		
		class NoDataException : public std::exception {

				public :
					virtual const char * what() const throw(){
						return ("Not enough data to get the span");
					}
		};
};
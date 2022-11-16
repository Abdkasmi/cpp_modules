#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

class Span {

	private :

		unsigned int 				_n;
		std::vector<int>	_vector;

	public :

		Span(unsigned int n);
		Span(const Span & src);
		Span& operator=(const Span & rhs);
		~Span();

		void			addNumber(unsigned int n);
		int				shortestSpan(void) const;
		unsigned int	longestSpan(void) const;

		template <typename Iterator>
		void	superAddNumber(Iterator begin, Iterator end) {
			if (this->_vector.size() + (end - begin) > this->_n)
				throw TooMuchNumberException();
			else
				this->_vector.insert(this->_vector.end(), begin, end);
		}

		class TooMuchNumberException : public std::exception {

				public :
					virtual const char * what() const throw(){
						return ("Too much numbers");
					}
		};
		
		class NoDataException : public std::exception {

				public :
					virtual const char * what() const throw(){
						return ("Not enough data to get the span");
					}
		};
};

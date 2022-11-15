#include "Span.hpp"

Span::Span(unsigned int n): _n(n)
{
	return ;
}

Span::Span(const Span& src)
{
	*this = src;
	return ;
}

Span& Span::operator=(const Span& rhs)
{
	this->_n = rhs._n;
	this->_vector = rhs._vector;
	return *this;
}

Span::~Span(void)
{
	return ;
}

void	Span::addNumber(unsigned int number)
{
	if (this->_vector.size() >= this->_n)
		throw TooMuchNumberException();
	this->_vector.push_back(number);
}

unsigned int	Span::shortestSpan(void) const
{
	if (this->_vector.size() <= 0)
		throw NoDataException();
	return *std::min_element(this->_vector.begin(), this->_vector.end());
}

unsigned int	Span::longestSpan(void) const
{
	if (this->_vector.size() <= 0)
		throw NoDataException();
	unsigned int max = *std::max_element(this->_vector.begin(), this->_vector.end());
	unsigned int min = *std::min_element(this->_vector.begin(), this->_vector.end());
	return (max - min);
}


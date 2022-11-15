#include "Span.hpp"

Span::Span(unsigned int n): _n(n)
{
	return ;
}

Span::Span(const Span& src): _n(src._n), _vector(src._vector)
{
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
	if (this->_vector.size() <= 1)
		throw NoDataException();
	else
	{
		std::vector<unsigned int> v2 = this->_vector;
		std::sort(v2.begin(), v2.end());
		unsigned int tmp = v2.at(1) - v2.at(0);
		unsigned int size = v2.size();

		for (unsigned int i = 1; i < size; i++)
		{
			if (tmp > v2[i + 1] - v2[i])
				tmp = v2[i + 1] - v2[i];
		}
		return tmp;
	}
}

unsigned int	Span::longestSpan(void) const
{
	if (this->_vector.size() <= 1)
		throw NoDataException();
	unsigned int max = *std::max_element(this->_vector.begin(), this->_vector.end());
	unsigned int min = *std::min_element(this->_vector.begin(), this->_vector.end());
	return (max - min);
}


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
		throw Span::TooMuchNumberException();
	this->_vector.push_back(number);
}

int	Span::shortestSpan(void) const
{
	if (this->_vector.size() <= 1)
		throw Span::NoDataException();
	else
	{
		std::vector<int> v2 = this->_vector;
		std::sort(v2.begin(), v2.end());
		int tmp = v2[1] - v2[0];
		unsigned int size = v2.size();

		for (unsigned int i = 1; i < size - 1; i++)
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


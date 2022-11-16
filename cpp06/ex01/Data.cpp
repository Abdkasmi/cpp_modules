#include "Data.hpp"

Data::Data(): _string("Hey this is a default string")
{
	std::cout << "Data constructor called" << std::endl;
	return ;
}

Data::Data(std::string str): _string(str)
{
	std::cout << "Data constructor called" << std::endl;
	return ;
}

Data::Data(const Data & src)
{
	*this = src;
	std::cout << "Data copy constructor called" << std::endl;
	return ;
}

Data::~Data()
{
	std::cout << "Data destructor called" << std::endl;
	return ;
}

Data&	Data::operator=(const Data & rhs)
{
	std::cout << "Data overload operator= called" << std::endl;
	this->_string = rhs._string;
	return *this;
}

std::string	Data::getStr(void) const
{
	return this->_string;
}


uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}
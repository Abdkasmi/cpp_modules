#include "PresidentialPardonForm.hpp"
#include <cstdlib>

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("tree", 0, 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	*this = src;
	return ;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	std::cout << "PresidentialPardonForm overload operator= called" << std::endl;
	this->_target = rhs.getTarget();
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

std::string PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

void	PresidentialPardonForm::to_do(const Bureaucrat& executor) const
{
	this->AForm::execute(executor);
	std::cout << this->_target << "has been forgiven by Zaphod Beeblebrox." << std::endl;
}
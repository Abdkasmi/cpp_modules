#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("robotomy", false, 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	*this = src;
	return ;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	std::cout << "RobotomyRequestForm overload operator= called" << std::endl;
	this->_target = rhs.getTarget();
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

std::string RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void	RobotomyRequestForm::to_do(const Bureaucrat& executor) const
{
	this->AForm::execute(executor);
	std::cout << "**** Drill Sound ****" << std::endl;
	if (rand() % 3 == 1)
		std::cout << this->_target << " has been robotomized." << std::endl;
	else
		std::cout << "Robotomization failed" << std::endl;
}

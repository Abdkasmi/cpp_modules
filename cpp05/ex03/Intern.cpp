#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
	std::cout << "Intern constructor called" << std::endl;
	return ;
}

Intern::Intern(Intern const & src)
{
	std::cout << "Intern copy constructor called" << std::endl;
	(void)src;
	return ;
}

Intern& Intern::operator=(Intern const & rhs)
{
	std::cout << "Intern operator= called" << std::endl;
	(void)rhs;
	return *this;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
	return ;
}

AForm*	Intern::makeForm(std::string name, std::string target)
{
	std::string names[3] = {"robotomy", "shrubbery", "presidential"};
	int i = 0;
	while (i < 3 && names[i] != name)
		i++;
	AForm *form = NULL;
	switch(i)
	{
		case 0:
			form = new RobotomyRequestForm(target);
			break ;
		case 1:
			form = new ShrubberyCreationForm(target);
			break ;
		case 2:
			form = new PresidentialPardonForm(target);
			break ;
		default:
			throw InvalidFormatException(); 
	}
	std::cout << "Intern creates " << name << std::endl;
	return form;
}
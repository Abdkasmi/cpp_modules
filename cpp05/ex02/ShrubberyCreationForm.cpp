#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("tree", 0, 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	*this = src;
	return ;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	std::cout << "ShrubberyCreationForm overload operator= called" << std::endl;
	this->_target = rhs.getTarget();
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

std::string ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

void	ShrubberyCreationForm::to_do(Bureaucrat const & executor) const
{
	std::ofstream ofs;
	std::string	tree[] = {
		"       _-_",
		"    /~~   ~~\\",
		" /~~         ~~\\",
		"{               }",
		" \\  _-     -_  /",
		"   ~  \\ //  ~",
		"_- -   | | _- _",
		"  _ -  | |   -_",
		"      // \\"
		};
	this->AForm::execute(executor);
	ofs.open((std::string)this->_target + "_shrubbery");
	for (int i = 0; i <  9; i++)
		ofs << tree[i] << std::endl;
	ofs.close();
	return ;

}
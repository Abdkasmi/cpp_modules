#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Default"), _grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade): _name(name)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	std::cout << "Bureaucrat copy contructor called" << std::endl;
	*this = src;
	return ;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
	return ;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const & rhs)
{
	this->_grade = rhs.getGrade();
	return (*this);
}

std::ostream&	operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return (o);
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::gradeUprgrade(void)
{
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
	{
		this->_grade--;
		std::cout << this->_name << " has successfully been upgrade to grade " << this->_grade << std::endl;
	}
}

void	Bureaucrat::gradeDowngrade(void)
{
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		this->_grade++;
		std::cout << this->_name << " has successfully been downgrade to grade " << this->_grade << std::endl;
	}
}

void	Bureaucrat::signForm(AForm& form)
{
	if (form.getSign() == 1)
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	else
		std::cout << this->_name << " couldn't sign " << form.getName() << " because he hasn't the required grade" << std::endl;
}
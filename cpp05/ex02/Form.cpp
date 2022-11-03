#include "Form.hpp"

AForm::AForm(): _name("default"), _sign(0), _grade_sign(150), _grade_execute(150)
{
	std::cout << "AForm default constructor called" << std::endl;
	return ;
}

AForm::AForm(std::string name, bool sign, int grade_sign, int grade_execute): _name(name), _sign(sign), _grade_sign(grade_sign), _grade_execute(grade_execute)
{
	std::cout << "AForm default constructor called" << std::endl;
	if (grade_sign < 1)
		throw AForm::GradeTooHighException();
	else if (grade_sign > 150)
		throw AForm::GradeTooLowException();
	if (grade_execute < 1)
		throw AForm::GradeTooHighException();
	else if (grade_execute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const & src): _grade_sign(src.getGradeSign()), _grade_execute(src.getGradeExecute())
{
	std::cout << "AForm copy constructor called" << std::endl;
	*this = src;
	return ;
}

AForm&	AForm::operator=(AForm const & src)
{
	std::cout << "AForm overload operator= called" << std::endl;
	this->_sign = src.getSign();
	return (*this);
}

AForm::~AForm()
{
	std::cout << "AForm destructor called" << std::endl;
	return  ;
}

void	AForm::beSigned(Bureaucrat& b)
{
	if (b.getGrade() > this->_grade_sign)
		throw AForm::GradeTooLowException();
	else
		this->_sign = 1;
}

std::string AForm::getName(void) const
{
	return (this->_name);
}

bool AForm::getSign(void) const
{
	return (this->_sign);
}

int AForm::getGradeSign(void) const
{
	return (this->_grade_sign);
}

int AForm::getGradeExecute(void) const
{
	return (this->_grade_execute);
}

std::ostream& operator<<(std::ostream& o, AForm const & rhs)
{
	o << "name : " << rhs.getName() << "; bool sign : " << rhs.getSign() << "; GradeSign : " << rhs.getGradeSign() << "; GradeExecute : " << rhs.getGradeExecute() << std::endl;
	return o;
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if(!this->getSign())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getGradeExecute())
		throw AForm::GradeTooLowException();
}
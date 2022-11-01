#include "Form.hpp"

Form::Form(): _name("default"), _sign(0), _grade_sign(150), _grade_execute(150)
{
	std::cout << "Form default constructor called" << std::endl;
	return ;
}

Form::Form(std::string name, bool sign, int grade_sign, int grade_execute): _name(name), _sign(sign), _grade_sign(grade_sign), _grade_execute(grade_execute)
{
	std::cout << "Form default constructor called" << std::endl;
	if (grade_sign < 1)
		throw Form::GradeTooHighException();
	else if (grade_sign > 150)
		throw Form::GradeTooLowException();
	if (grade_execute < 1)
		throw Form::GradeTooHighException();
	else if (grade_execute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const & src): _grade_sign(src.getGradeSign()), _grade_execute(src.getGradeExecute())
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = src;
	return ;
}

Form&	Form::operator=(Form const & src)
{
	std::cout << "Form overload operator= called" << std::endl;
	this->_sign = src.getSign();
	return (*this);
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
	return  ;
}

void	Form::beSigned(Bureaucrat& b)
{
	if (b.getGrade() > this->_grade_sign)
		throw Form::GradeTooLowException();
	else
		this->_sign = 1;
}

std::string Form::getName(void) const
{
	return (this->_name);
}

bool Form::getSign(void) const
{
	return (this->_sign);
}

int Form::getGradeSign(void) const
{
	return (this->_grade_sign);
}

int Form::getGradeExecute(void) const
{
	return (this->_grade_execute);
}

std::ostream& operator<<(std::ostream& o, Form const & rhs)
{
	o << "name : " << rhs.getName() << "; bool sign : " << rhs.getSign() << "; GradeSign : " << rhs.getGradeSign() << "; GradeExecute : " << rhs.getGradeExecute() << std::endl;
	return o;
}
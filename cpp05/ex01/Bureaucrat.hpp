#pragma once

#include <iostream>
#include <string>
#include <exception> 
#include "Form.hpp"

class Form;

class Bureaucrat {

protected:

	std::string	const _name;
	int	_grade;

public:

	Bureaucrat();
	Bureaucrat(std::string name, unsigned int grade);
	Bureaucrat(Bureaucrat const & src);
	Bureaucrat&	operator=(Bureaucrat const & rhs);
	~Bureaucrat();

	std::string getName(void) const;
	int getGrade(void) const;

	void	gradeUprgrade(void);
	void	gradeDowngrade(void);
	void	signForm(Form& form);

	class GradeTooHighException: public std::exception {

		public:

			virtual const char* what() const throw()
			{
				return ("Grade Too High");
			}
	};
	
	class GradeTooLowException: public std::exception {

		public:

			virtual const char * what() const throw()
			{
				return ("Grade Too Low");
			}
	};

};

std::ostream&	operator<<(std::ostream & o, Bureaucrat const & rhs);
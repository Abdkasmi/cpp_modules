#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

private:

	std::string const	_name;
	bool				_sign;
	int	const			_grade_sign;
	int	const			_grade_execute;

public :

	Form();
	Form(std::string name, bool sign, int grade_sign, int grade_execute);
	Form(Form const & src);
	Form & operator=(Form const & rhs);
	~Form();

	void	beSigned(Bureaucrat& b);

	std::string getName(void) const;
	bool		getSign(void) const;
	int			getGradeSign(void) const;
	int			getGradeExecute(void) const;

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

std::ostream& operator<<(std::ostream& o, Form const & rhs);
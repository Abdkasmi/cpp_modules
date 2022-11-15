#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

private :

	std::string const	_name;
	bool				_sign;
	int	const			_grade_sign;
	int	const			_grade_execute;

public :

	AForm();
	AForm(std::string name, bool sign, int grade_sign, int grade_execute);
	AForm(AForm const & src);
	AForm & operator=(AForm const & rhs);
	virtual ~AForm();

	void	beSigned(Bureaucrat& b);
	void	execute(Bureaucrat const & executor) const;
	virtual void	to_do(const Bureaucrat& executor) const = 0;

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

	class FormNotSignedException: public std::exception {

		public :

			virtual const char * what() const throw()
			{
				return ("Grade Too Low");
			}
	};
};

std::ostream& operator<<(std::ostream& o, AForm const & rhs);
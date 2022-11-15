#pragma once

#include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm {

	private :

		std::string _target;

	public :

		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		RobotomyRequestForm& operator=(RobotomyRequestForm const & rhs);
		~RobotomyRequestForm();

		std::string getTarget(void) const;

		void	to_do(const Bureaucrat& executor) const;

};
#pragma once

#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm {

	private :

		std::string _target;

	public :

		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const & rhs);
		~ShrubberyCreationForm();

		std::string getTarget(void) const;

		void	to_do(const Bureaucrat& executor) const;

};
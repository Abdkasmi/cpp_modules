#pragma once

#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm {

	private :

		std::string _target;

	public :

		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const & src);
		PresidentialPardonForm& operator=(PresidentialPardonForm const & rhs);
		~PresidentialPardonForm();

		std::string getTarget(void) const;

		void	to_do(const Bureaucrat& executor) const;

};
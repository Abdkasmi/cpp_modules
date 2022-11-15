#pragma once

#include "Form.hpp"

class Intern {

	public :

		Intern();
		Intern(Intern const & src);
		Intern& operator=(Intern const & rhs);
		~Intern();

		class InvalidFormatException : public std::exception {
			public:
				const char *what() const throw() {
					return ("Invalid format");
				}
		};

		AForm*	makeForm(std::string name, std::string target);

};
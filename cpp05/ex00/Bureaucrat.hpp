#pragma once

#include <iostream>

class Bureaucrat {

private:

	

public:

	Bureaucrat();
	Bureaucrat(Bureaucrat const & src);
	Bureaucrat&	operator=(Bureaucrat const & rhs);
	~Bureaucrat();

};

std::ostream&	operator<<(std::ostream & o, Bureaucrat const & rhs);
#pragma once

#include <iostream>

class NoOccurenceFound : public std::exception {

	public :

		virtual const char* what() const throw() {
			return ("There is no occurence Found");
		}
};

template <typename T, int U>
void	easyfind(T container, int num) {

}

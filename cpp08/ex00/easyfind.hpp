#pragma once

#include <iostream>
#include <algorithm>

class NoOccurrenceException : public std::exception {

	public :

		virtual const char* what() const throw() {
			return ("No occurence Found");
		}
};

template <typename T>
typename T::iterator	easyfind(T container, int num) {
	typename T::iterator iter = std::find(container.begin(), container.end(), num);
	if (iter == container.end())
		throw NoOccurrenceException();
	else
		return iter;
}

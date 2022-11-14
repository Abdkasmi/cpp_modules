#pragma once

#include <iostream>
#include <algorithm>

class NoOccurrenceFound : public std::exception {

	public :

		virtual const char* what() const throw() {
			return ("There is no occurence Found");
		}
};

template <typename T>
typename T::iterator	easyfind(T container, int num) {
	typename T::iterator iter = std::find(container.begin(), container.end(), num);
	if (iter != container.end())
		return iter;
	else
		throw NoOccurrenceFound();
}

#pragma once

#include <iostream>

template <typename T, typename U>
void	iter(T * array, U const size, void (*f)(const T&)){
	for (int i = 0; i < size; i++)
		f(array[i]);
}

template <typename T>
void	add_one(T const & elem) {
	std::cout << elem + 1 << std::endl;
}


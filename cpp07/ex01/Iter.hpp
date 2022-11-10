#pragma once

#include <iostream>

template <typename T>
void	iter(T * array, T const size, void f(T & elem)){
	for (int i = 0; i < size; i++)
		f(array[i]);
}

template <typename T>
void	add_one(T & elem) {elem += 1;}
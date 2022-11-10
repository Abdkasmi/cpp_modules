#pragma once

#include <iostream>
#include <exception>

template <typename T>
class Array {

	private :

		T*	_array;
		unsigned int _size;

	public :

		Array(): _size(0) {
			this->_array = new T[0];
		}
		
		Array(unsigned int n): _size(n) {
			this->_array = new T[n];
		}
		
		Array(const Array& src): _array(new T[src._size]), _size(src._size) {
			for (unsigned int i = 0; i < _size; i++) {
				this->_array[i] = src._array[i];
			}
		}
		
		Array& operator=(const Array& rhs) {
			this->_size = rhs._size;
			this->_array = new T[rhs._size];
			for (unsigned int i = 0; i < rhs._size; i++) {
				this->_array[i] = rhs._array[i];
			}
			return *this;
		}
		
		unsigned int	size(void) const {
			return this->_size;
		}

		class NotInArrayException : public std::exception {

			public :

				virtual const char* what() const throw() {
					return ("Elemment is not in the array");
				}

		};

		T& operator[](const unsigned int index) {
			if (index >= this->_size)
				throw NotInArrayException();
			return this->_array[index];
		}
};
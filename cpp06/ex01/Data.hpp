#pragma once

#include <iostream>
#include <string>
#include <stdint.h>

class Data {

	private :

		std::string _string;

	public :
		// Constructors & Deestructor
		Data();
		Data(std::string str);
		Data(const Data & src);
		~Data();
		// Overload operator=
		Data&	operator=(const Data & rhs);

		std::string getStr(void) const;

};

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);
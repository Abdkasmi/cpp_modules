#include "Scalar.hpp"
#include <iomanip>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "use ase follow : ./convert [value to convert]" << std::endl;
		return 1;
	}
	std::cout << std::fixed << std::setprecision(1);
	Scalar value(av[1]);
	std::cout << "char : " << value.getChar() << std::endl;
	std::cout << "int : " << value.getInt() << std::endl;
	std::cout << "float : " << value.getFloat() << "f" << std::endl;
	std::cout << "double : " << value.getDouble() << std::endl;
	return 0;
}
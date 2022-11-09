#include "Data.hpp"

int main( void )
{
	Data		data("Please give 100%");
	Data *		ret;
	uintptr_t	ser;

	std::cout << "== From data ===============\n" << std::endl;
	std::cout << data.getStr() << std::endl;

	std::cout << "\n== After serialize =========\n" << std::endl;
	ser = serialize(&data);
	std::cout << ser << std::endl;

	std::cout << "\n== After deserialize =======\n" << std::endl;
	ret = deserialize(ser);
	std::cout << ret->getStr() << std::endl;
	std::cout << "\n============================" << std::endl;
	return 0;
}
#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat Manager("Bob", 3);
	Bureaucrat Junior("Jimmy", 148);

	std::cout << std::endl;

	std::cout << "-------- Test Getters --------" << std::endl;
	std::cout << "Name : " << Manager.getName() << std::endl;
	std::cout << "Grade : " << Manager.getGrade() << std::endl;

	std::cout << std::endl;

	std::cout << "-------- Test with a Grade too high < 1 --------" << std::endl;
	try
	{
		Bureaucrat John("John", 0);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "-------- Test with a Grade too low > 150 --------" << std::endl;
	try
	{
		Bureaucrat John("John", 151);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "-------- Test with an Upgrade --------" << std::endl;
	try
	{
		Manager.gradeUprgrade();
		Manager.gradeUprgrade();
		Manager.gradeUprgrade();
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "-------- Test with a Downgrade --------" << std::endl;
	try
	{
		Junior.gradeDowngrade();
		Junior.gradeDowngrade();
		Junior.gradeDowngrade();
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	return 0;
}
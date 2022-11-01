#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat	Manager("Bob", 3);
	Form		myForm("Form one", 0, 5, 3);
	Form		myForm2("Form two", 0, 2, 1);

	std::cout << std::endl;

	std::cout << "-------- Test Getters --------" << std::endl;
	std::cout << "Name : " << myForm.getName() << std::endl;
	std::cout << "Sign : " << myForm.getSign() << std::endl;
	std::cout << "GradeSign : " << myForm.getGradeSign() << std::endl;
	std::cout << "GradeExecute : " << myForm.getGradeExecute() << std::endl;

	std::cout << std::endl;

	std::cout << "-------- Test with a GradeSign too high < 1 --------" << std::endl;
	try
	{
		Form John("John", 0, 0, 0);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "-------- Test with a GradeSign too low > 150 --------" << std::endl;
	try
	{
		Form John("John", 0,151, 151);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "-------- Test valid sign --------" << std::endl;
	try
	{
		myForm.beSigned(Manager);
		Manager.signForm(myForm);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------- Test invalid sign--------" << std::endl;
	try
	{
		Manager.signForm(myForm2);
		myForm2.beSigned(Manager);
		Manager.signForm(myForm2);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	return 0;
}
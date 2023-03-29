#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat bur("mehdi", 100);
		Form form("Form", 10, 10);
		bur.signForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
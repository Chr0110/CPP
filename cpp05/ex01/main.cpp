#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat bur("Mehdi", 123);
	Form form("Form", 10, 10);
	bur.signForm(form);
	return (0);
}
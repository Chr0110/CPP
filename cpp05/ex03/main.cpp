#include "Intern.hpp"
#include "Bureaucrat.hpp"
int main ()
{
	Intern someIntern;
	AForm* form;
	form = someIntern.makeForm("robotomy request", "Bender");
	return 0;
}

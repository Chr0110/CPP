#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name("Mehdi"), grade(1)
{
	std::cout << "Default Bureaucrat constructor\n";
	return ;
}

Bureaucrat::Bureaucrat(const std::string name, int grade):name(name), grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Paramitrazed Bureaucrat constructor\n";
	return;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	std::cout << "Copy construcot is called\n";
	*this = src;
}

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	std::cout << "Assignation opertaor called\n";
	if ( this != &rhs )
		this->grade = rhs.grade;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const &i )
{
	o << i.getName() << " bureaucrat grade "<< i.getGrade() << "." << std::endl;
	return o;
}

void Bureaucrat::increment_grade()
{
	if (getGrade() <= 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade -= 1;
}

void Bureaucrat::decrement_grade()
{
	if (getGrade() >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade += 1;
}

std::string const Bureaucrat::getName() const{

	return this->name;
}

int  Bureaucrat::getGrade() const{

	return this->grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade so high!!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade so Low!!";
}

int Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << getName() << " signed " << form.get_form_Name() << std::endl;
		return 1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << getName() << " couldn't sign the "<< form.get_form_Name() << " bcs his grade dosen't fit the standars\n";
	}
	return 0;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat distructor\n";
}

void Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
#include "Form.hpp"

Form::Form():name("Form"), signe(false), grade_to_sign(10), grade_to_exec(10) 
{
}

Form::Form(std::string const str, int const grade_sign, int const grade_exec):name(str), signe(false), grade_to_sign(grade_sign), grade_to_exec(grade_exec)
{
	if (this->grade_to_sign < 1 || this->grade_to_exec < 1)
		throw Form::GradeTooHighException();
	if (this->grade_to_sign > 150 || this->grade_to_exec > 150)
		throw Form::GradeTooLowException();
}

Form::Form( Form const & src ): name(src.name), signe(src.signe), grade_to_sign(src.grade_to_sign), grade_to_exec(src.grade_to_exec)
{}

Form::~Form()
{
	std::cout << "Distructor called\n";
}

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		this->signe = rhs.signe;
	}
	return *this;
}
std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "Name:" << i.get_form_Name() << ", grade to sign " << i.get_sign_grade() << ", grade to execute " << i.get_exec_grade() << " ."<< std::endl; 
	return o;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "!";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "!";
}

void Form::beSigned(Bureaucrat & br)
{
	if (br.getGrade() > get_sign_grade())
		throw Form::GradeTooLowException();
	else
		this->signe = true;
}
int Form::get_sign_grade() const
{
	return this->grade_to_sign;
}
int Form::get_exec_grade() const
{
	return this->grade_to_exec;
}

std::string const Form::get_form_Name() const
{
	return this->name;
}


bool Form::getSigne() const
{
	return this->signe;
}

#include "AForm.hpp"

AForm::AForm():name("AForm"), signe(false), grade_to_sign(10), grade_to_exec(10) 
{
	std::cout << "Defaul constructor called\n";
}

AForm::AForm(std::string const str, int const grade_sign, int const grade_exec):name(str), signe(false), grade_to_sign(grade_sign), grade_to_exec(grade_exec)
{
	if (this->grade_to_sign < 1 || this->grade_to_exec < 1)
		throw AForm::GradeTooHighException();
	if (this->grade_to_sign > 150 || this->grade_to_exec > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm( AForm const & src ): name(src.name), signe(src.signe), grade_to_sign(src.grade_to_sign), grade_to_exec(src.grade_to_exec)
{}

AForm::~AForm()
{
	std::cout << "Distructor called\n";
}

AForm &				AForm::operator=( AForm const & rhs )
{
	if ( this != &rhs )
	{
		this->signe = rhs.signe;
	}
	return *this;
}
std::ostream &			operator<<( std::ostream & o, AForm const & i )
{
	o << "Name:" << i.get_form_Name() << ", grade to sign " << i.get_sign_grade() << ", grade to execute " << i.get_exec_grade() << " ."<< std::endl; 
	return o;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "!";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "Grade too low ";
}

const char *AForm::FormNotSigned::what() const throw()
{
    return "Form not signed ";
}

void AForm::beSigned(Bureaucrat & br)
{
	if (br.getGrade() > get_sign_grade())
		throw AForm::GradeTooLowException();
	else
		this->signe = true;
}

int AForm::get_sign_grade() const
{
	return this->grade_to_sign;
}
int AForm::get_exec_grade() const
{
	return this->grade_to_exec;
}

std::string const AForm::get_form_Name() const
{
	return this->name;
}


bool AForm::getSigne() const
{
	return this->signe;
}


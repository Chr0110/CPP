#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
# include <iostream>
# include <string>

class Bureaucrat;

class AForm
{
	private:
		std::string const	name;
		bool				signe;
		int const			grade_to_sign;
		int const			grade_to_exec;

	public:

		class GradeTooHighException : public std::exception
		{
			public :
				const char * what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public :
				const char * what() const throw();
		};
		class FormNotSigned : public std::exception
		{
			public:
				const char* what() const throw();
		};
		AForm();
		AForm(std::string const name, int const gradeSigne, int const gradeExecute);
		AForm( AForm const & src );
		~AForm();

		AForm &		operator=( AForm const & rhs );

		std::string const get_form_Name() const;
		bool getSigne() const ;
		virtual int get_sign_grade() const;
		virtual int get_exec_grade() const;

		void	beSigned(Bureaucrat &obj);
		virtual void execute(Bureaucrat const & executor)  const = 0;

};


std::ostream &			operator<<( std::ostream & o, AForm const & i );
#endif

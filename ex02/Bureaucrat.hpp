#ifndef BUREAUCRAT_HPP

# define BUREAUCRAT_HPP

# include <iostream>
class Form;
# include "Form.hpp"

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;
	public:
		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat(void);
		~Bureaucrat();
		const std::string &	getName(void) const;
		int					getGrade(void) const;
		void				incrementGrade(void);
		void				decrementGrade(void);
		void				signForm(Form &form);
		void				executeForm(Form const &form);
		Bureaucrat	&operator=(const Bureaucrat &right);
};

std::ostream		&operator<<(std::ostream &os, const Bureaucrat &i);

#endif // [BUREAUCRAT_HPP]

#ifndef FORM_HPP

# define FORM_HPP

# include <iostream>
class Bureaucrat;
# include "Bureaucrat.hpp"

class Form
{
	private:
		std::string const	_name;
		int					_gradeToSign;
		int					_gradeToExecute;
		bool				_signed;
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
	class FormNotSignedException : public std::exception
	{
		public:
			const char *what() const throw();
	};
					Form(const std::string name, int gradeToSign, int gradeToExecute);
					Form(const Form &src);
					Form(void);
					~Form();
		bool	isSigned(void) const;
		void	beSigned(const Bureaucrat &b);
		const std::string	&getName(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExecute(void) const;
		void		canExecute(Bureaucrat const & executor) const;
		virtual void execute (Bureaucrat const & executor) const = 0;
		Form	&operator=(const Form &right);
};

std::ostream		&operator<<(std::ostream &os, const Form &i);

#endif // [FORM_HPP]

#ifndef INTERN_HPP

# define INTERN_HPP

# include <iostream>
# include "Form.hpp"

class Intern
{
	private:
		static const std::string	_forms[3];
		static Form* (*_formCreators[3])(std::string const &target);
		static Form *newPresidentialPardonForm(std::string const &target);
		static Form *newShrubberyCreationForm(std::string const &target);
		static Form *newRobotomyRequestForm(std::string const &target);

	public:
					Intern(const Intern &src);
					Intern(void);
					~Intern();
		Form		*makeForm(std::string name, std::string target);
		Intern	&operator=(const Intern &right);
};

#endif // [INTERN_HPP]

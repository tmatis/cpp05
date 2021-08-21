#ifndef SHRUBBERYCREATIONFORM_HPP

# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string	_target;
	public:
					ShrubberyCreationForm(const std::string target);
					ShrubberyCreationForm(const ShrubberyCreationForm &src);
					ShrubberyCreationForm(void);
					~ShrubberyCreationForm();
		void		execute(Bureaucrat const &executor) const;
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &right);
};

#endif // [SHRUBBERYCREATIONFORM_HPP]

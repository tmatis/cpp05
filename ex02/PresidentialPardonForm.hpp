#ifndef PRESIDENTIALPARDONFORM_HPP

# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string		_target;
	public:
					PresidentialPardonForm(const std::string target);
					PresidentialPardonForm(const PresidentialPardonForm &src);
					PresidentialPardonForm(void);
					~PresidentialPardonForm();
		void		execute(Bureaucrat const &executor) const;
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &right);
};

#endif // [PRESIDENTIALPARDONFORM_HPP]

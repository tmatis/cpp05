#ifndef ROBOTOMYREQUESTFORM_HPP

# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string	_target;
	public:
					RobotomyRequestForm(std::string const target);
					RobotomyRequestForm(const RobotomyRequestForm &src);
					RobotomyRequestForm(void);
					~RobotomyRequestForm();
		void		execute(Bureaucrat const &executor) const;
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &right);
};

#endif // [ROBOTOMYREQUESTFORM_HPP]

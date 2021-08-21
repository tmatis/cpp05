/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:25:50 by tmatis            #+#    #+#             */
/*   Updated: 2021/08/21 17:47:13 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <stdlib.h>

int main(void)
{
	Intern intern;
	Form *form;
	Bureaucrat bob("Bob", 1);

	form = intern.makeForm("robotomy request", "Bender");
	bob.signForm(*form);
	bob.executeForm(*form);
	delete form;
	form = intern.makeForm("presidential pardon", "Benala");
	bob.signForm(*form);
	bob.executeForm(*form);
	delete form;
	form = intern.makeForm("shrubbery creation", "House");
	bob.signForm(*form);
	bob.executeForm(*form);
	delete form;
}

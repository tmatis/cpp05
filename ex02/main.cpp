/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:25:50 by tmatis            #+#    #+#             */
/*   Updated: 2021/08/21 17:12:37 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <stdlib.h>

int main(void)
{
	srand(time(NULL));
	{
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "|                                      |" << std::endl;
		std::cout << "|          Presidential Pardon         |" << std::endl;
		std::cout << "|                                      |" << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		PresidentialPardonForm ppf("Benala");
		Bureaucrat b("Bob", 1);
		Bureaucrat a("Alice", 150);
		b.executeForm(ppf);
		a.signForm(ppf);
		b.signForm(ppf);
		a.executeForm(ppf);
		b.executeForm(ppf);
	}
	{
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "|                                      |" << std::endl;
		std::cout << "|          Robotomy Request            |" << std::endl;
		std::cout << "|                                      |" << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		RobotomyRequestForm rrf("Blender");
		Bureaucrat b("Bob", 1);
		Bureaucrat a("Alice", 150);
		b.executeForm(rrf);
		a.signForm(rrf);
		b.signForm(rrf);
		a.executeForm(rrf);
		b.executeForm(rrf);
		b.executeForm(rrf);
		b.executeForm(rrf);
		b.executeForm(rrf);
	}
	{
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "|                                      |" << std::endl;
		std::cout << "|          Shrubbery Creation          |" << std::endl;
		std::cout << "|                                      |" << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		ShrubberyCreationForm scf("House");
		Bureaucrat b("Bob", 1);
		Bureaucrat a("Alice", 150);
		b.executeForm(scf);
		a.signForm(scf);
		b.signForm(scf);
		a.executeForm(scf);
		b.executeForm(scf);
	}
}

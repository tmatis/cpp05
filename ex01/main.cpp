/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:25:50 by tmatis            #+#    #+#             */
/*   Updated: 2021/08/21 15:34:26 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main(void)
{
	{
		Form form("Form", 1, 1);
		Bureaucrat b("Bureaucrat", 1);
		std::cout << b;
		std::cout << form;
		b.signForm(form);
		std::cout << form;
	}
	{
		Form form("Form", 100, 100);
		Bureaucrat b("Bureaucrat", 120);
		std::cout << b;
		std::cout << form;
		b.signForm(form);
	}
	{
		try
		{
			Form form("Form", 0, 0);
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		
	}
}

#include "ShrubberyCreationForm.hpp"
#include <fstream>

/* ************************************************************************** */
/*                                OUTTER FONCTIONS                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                     DATA INIT                              */
/* ************************************************************************** */

/* ************************************************************************** */
/*                           CONSTRUCTOR - DESTRUCTOR                         */
/* ************************************************************************** */

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form("ShrubberyCreationForm", 145, 137), _target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(void)
	: Form("ShrubberyCreationForm", 145, 137), _target("default")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
{
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{

}

/* ************************************************************************** */
/*                              OVERLOAD FONCTIONS                            */
/* ************************************************************************** */

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &right)
{
	this->_target = right._target;
	Form::operator=(right);
	return (*this);
}

/* ************************************************************************** */
/*                                 ACCES FONCTIONS                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                MEMBER FONCTIONS                            */
/* ************************************************************************** */

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	this->canExecute(executor);
	std::ofstream	file;
	file.open(("./" + this->_target + "_shrubbery").c_str());
	for (int i = 0; i < 10; i++)
	{
		file << "      /\\      " << std::endl;
		file << "     /  \\     " << std::endl;
		file << "    /    \\    " << std::endl;
		file << "   /      \\   " << std::endl;
		file << "  /        \\  " << std::endl;
		file << "  ----------   " << std::endl;
		file << "      | |      " << std::endl;
		file << "      | |      " << std::endl;
		file << "      ---      " << std::endl;  
		file << std::endl;  
	}
	file.close();
}

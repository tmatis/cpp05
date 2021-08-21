#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

/* ************************************************************************** */
/*                                OUTTER FONCTIONS                            */
/* ************************************************************************** */

static int getIndex(std::string const &formName, std::string const *formNames, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (formName == formNames[i])
			return i;
	}
	return -1;
}

Form *Intern::newPresidentialPardonForm(std::string const &target)
{
	return new PresidentialPardonForm(target);
}

Form *Intern::newShrubberyCreationForm(std::string const &target)
{
	return new ShrubberyCreationForm(target);
}

Form *Intern::newRobotomyRequestForm(std::string const &target)
{
	return new RobotomyRequestForm(target);
}

/* ************************************************************************** */
/*                                     DATA INIT                              */
/* ************************************************************************** */

const std::string Intern::_forms[3] = {
	"robotomy request",
	"shrubbery creation",
	"presidential pardon"
};

Form* (*Intern::_formCreators[3])(std::string const &target) = {
	newRobotomyRequestForm,
	newShrubberyCreationForm,
	newPresidentialPardonForm
};

/* ************************************************************************** */
/*                           CONSTRUCTOR - DESTRUCTOR                         */
/* ************************************************************************** */

Intern::Intern(void)
{
}

Intern::Intern(const Intern &src)
{
	*this = src;
}

Intern::~Intern(void)
{

}

/* ************************************************************************** */
/*                              OVERLOAD FONCTIONS                            */
/* ************************************************************************** */

Intern	&Intern::operator=(const Intern &right)
{
	(void)right;
	return (*this);
}

/* ************************************************************************** */
/*                                 ACCES FONCTIONS                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                MEMBER FONCTIONS                            */
/* ************************************************************************** */

Form	*Intern::makeForm(std::string form, std::string target)
{
	int index = getIndex(form, Intern::_forms, 3);
	if (index == -1)
	{
		std::cout << "Intern: Form not found" << std::endl;
		return NULL;
	}
	else
	{
		std::cout << "Intern creates " << Intern::_forms[index] << " for " << target << std::endl;
		return Intern::_formCreators[index](target);
	}
}

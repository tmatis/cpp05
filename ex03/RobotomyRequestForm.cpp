#include "RobotomyRequestForm.hpp"
#include <stdlib.h>

/* ************************************************************************** */
/*                                OUTTER FONCTIONS                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                     DATA INIT                              */
/* ************************************************************************** */

/* ************************************************************************** */
/*                           CONSTRUCTOR - DESTRUCTOR                         */
/* ************************************************************************** */

RobotomyRequestForm::RobotomyRequestForm(std::string const target)
	:Form("RobotomyRequestForm", 72, 45),  _target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(void)
	: Form("RobotomyRequestForm", 72, 45), _target("default")
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
{
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{

}

/* ************************************************************************** */
/*                              OVERLOAD FONCTIONS                            */
/* ************************************************************************** */

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &right)
{
	Form::operator=(right);
	this->_target = right._target;
	return (*this);
}

/* ************************************************************************** */
/*                                 ACCES FONCTIONS                            */
/* ************************************************************************** */


/* ************************************************************************** */
/*                                MEMBER FONCTIONS                            */
/* ************************************************************************** */

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	this->canExecute(executor);
	std::cout << "BZZZZ BZZZZZZ ";
	//random 1/2
	int		random = rand() % 2;
	if (random == 0)
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->_target << " has been robotomized unsuccessfully" << std::endl;
}

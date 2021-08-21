#include "Form.hpp"

/* ************************************************************************** */
/*                                OUTTER FONCTIONS                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                     DATA INIT                              */
/* ************************************************************************** */

/* ************************************************************************** */
/*                           CONSTRUCTOR - DESTRUCTOR                         */
/* ************************************************************************** */

Form::Form(const std::string name, int gradeToSign, int gradeToExecute)
	: _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(void) : _name("Default"), _gradeToSign(1), _gradeToExecute(1), _signed(false)
{

}

Form::Form(const Form &src) : _name(src._name)
{
	*this = src;
}

Form::~Form(void)
{

}

/* ************************************************************************** */
/*                              OVERLOAD FONCTIONS                            */
/* ************************************************************************** */

Form	&Form::operator=(const Form &right)
{
	this->_gradeToExecute = right._gradeToExecute;
	this->_gradeToSign = right._gradeToSign;
	this->_signed = right._signed;
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, const Form &i)
{
	os << "Form name: " << i.getName() << std::endl;
	os << "Grade to sign: " << i.getGradeToSign() << std::endl;
	os << "Grade to execute: " << i.getGradeToExecute() << std::endl;
	os << "Form signed: " << i.isSigned() << std::endl;
	return (os);
}

/* ************************************************************************** */
/*                                 ACCES FONCTIONS                            */
/* ************************************************************************** */

const std::string&	Form::getName(void) const
{
	return (this->_name);
}

int		Form::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

int		Form::getGradeToExecute(void) const
{
	return (this->_gradeToExecute);
}

bool	Form::isSigned(void) const
{
	return (this->_signed);
}

/* ************************************************************************** */
/*                                MEMBER FONCTIONS                            */
/* ************************************************************************** */

char const *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

char const *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

void	Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

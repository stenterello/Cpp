/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:12:52 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/09 17:01:38 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("no_name"), _signed(false), _minGradeToSign(150), _minGradeToExecute(150)
{
	std::cout << "Default constructor called on Form" << std::endl;
	if (this->_minGradeToSign > 150 || this->_minGradeToExecute > 150)
		throw (Form::GradeTooLowException());
	if (this->_minGradeToSign < 1 || this->_minGradeToSign < 1)
		throw (Form::GradeTooHighException());
}

Form::Form(std::string name, int minGradeToSign, int minGradeToExecute)
	: _name(name), _signed(false), _minGradeToSign(minGradeToSign), _minGradeToExecute(minGradeToExecute)
{
	std::cout << "Constructor called on Form" << std::endl;
	if (this->_minGradeToSign > 150 || this->_minGradeToExecute > 150)
		throw (Form::GradeTooLowException());
	if (this->_minGradeToSign < 1 || this->_minGradeToSign < 1)
		throw (Form::GradeTooHighException());
}

Form::Form(Form const & src) : _name(src.getName()), _signed(false), _minGradeToSign(src.getMinGradeToSign()), _minGradeToExecute(src.getMinGradeToExecute())
{
	std::cout << "Copy constructor called on Form" << std::endl;
	if (this->_minGradeToSign > 150 || this->_minGradeToExecute > 150)
		throw (Form::GradeTooLowException());
	if (this->_minGradeToSign < 1 || this->_minGradeToSign < 1)
		throw (Form::GradeTooHighException());
}

Form&	Form::operator=(Form const & rhs)
{
	std::cout << "Copy assignment operator called on Form" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_signed = false;
	if (this->_minGradeToSign > 150 || this->_minGradeToExecute > 150)
		throw (Form::GradeTooLowException());
	if (this->_minGradeToSign < 1 || this->_minGradeToSign < 1)
		throw (Form::GradeTooHighException());
	return (*this);
}

Form::~Form()
{
	std::cout << "Destructor called on Form" << std::endl;
}

std::string	Form::getName() const
{
	return (this->_name);
}

bool	Form::getStatus() const
{
	return (this->_signed);
}

int	Form::getMinGradeToSign() const
{
	return (this->_minGradeToSign);
}

int	Form::getMinGradeToExecute() const
{
	return (this->_minGradeToExecute);
}

void	Form::beSigned(Bureaucrat const & b)
{
	if (this->_signed == true)
		throw (Form::AlreadySignedException());
	else if (b.getGrade() <= this->_minGradeToSign)
		this->_signed = true;
	else
		throw (Form::GradeTooLowException());
}

std::ostream&	operator<<(std::ostream & os, Form const & f)
{
	os << "form_name: " << f.getName() << std::endl \
	<< "form_status: " << f.getStatus() << std::endl \
	<< "form_min_grade_to_sign: " << f.getMinGradeToSign() << std::endl \
	<< "form_min_grade_to_execute: " << f.getMinGradeToExecute() << std::endl;
	return (os);
}

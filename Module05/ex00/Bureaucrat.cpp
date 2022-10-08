/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:58:29 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/08 19:33:07 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default_name"), _grade(150)
{
	std::cout << "Default constructor called on Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const & name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Constructor called on Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src.getName()), _grade(src.getGrade())
{
	std::cout << "Copy constructor called on Bureaucrat" << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const & rhs)
{
	std::cout << "Copy assignment operator called on Bureaucrat" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_grade = rhs.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called on Bureaucrat" << std::endl;
}

std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

int			Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void		Bureaucrat::incrementGrade(int amount)
{
	try
	{
		for (int i = 0; i < amount; i++)
		{
			this->_grade--;
			if (this->_grade < 1)
				throw (this->_grade);
		}
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

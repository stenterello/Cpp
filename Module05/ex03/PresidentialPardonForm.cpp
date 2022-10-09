/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 21:10:52 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/09 21:23:13 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("no target")
{
	std::cout << "Default constructor called on PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "Constructor called on PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm("PresidentialPardonForm", 25, 5), _target(src.getTarget())
{
	std::cout << "Copy constructor called on PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	std::cout << "Copy assignment operator called on PresidentialPardonForm" << std::endl;
	if (this == &rhs)
		return (*this);
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor called on PresidentialPardonForm" << std::endl;
}

std::string PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getStatus())
		throw (AForm::NotSignedYet());
	if (executor.getGrade() > this->getMinGradeToExecute())
		throw (AForm::GradeTooLowException());
	std::cout << this->getTarget() << " has been pardoned by His Majesty Zaphod Beeblebrox!" << std::endl;
}

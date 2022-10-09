/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:18:00 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/09 20:51:51 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

std::string const	ShrubberyCreationForm::_trees[3] = 
{
	"                  **                  	\n" \
	"                 ****                 	\n" \
	"                ******                	\n" \
	"               ********               	\n" \
	"              **********              	\n" \
	"                  |||                 	\n" \
	"                  |||                 	\n" \
	"                                      	\n",
	"              ##########              	\n" \
	"              #        #              	\n" \
	"              #        #              	\n" \
	"              ##########              	\n" \
	"                  !!!                 	\n" \
	"                  !!!                 	\n" \
	"                                      	\n",
	"            °  _/     °  _/          \n" \
	"          ° \\/ \\    \\  /        °    \n" \
	"          \\__|    °    \\/    __/     \n" \
	"             |    \\     \\   /  \\    \n" \
	"              \\____|_   |___/   °   \n" \
	"                     |  |              \n" \
	"                      ||               \n" \
	"                      ||               \n" \
	"                                      	\n"
};

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 150, 150), _target("no target")
{
	std::cout << "Default constructor called on ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "Constructor called on ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm("ShrubberyCreationForm", src.getMinGradeToSign(), src.getMinGradeToExecute())
{
	std::cout << "Copy constructor called in ShrubberyCreationForm" << std::endl;	
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	std::cout << "Copy assignment operator called on ShrubberyCreationForm" << std::endl;
	if (this == &rhs)
		return (*this);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor called on ShrubberyCreationForm" << std::endl;
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getMinGradeToExecute())
		throw (AForm::GradeTooLowException());
	if (!this->getStatus())
		throw (AForm::NotSignedYet());
	std::string const	filename = this->_target + "_shrubbery";
	std::ofstream		output;
	output.open(filename.c_str(), std::ios_base::out);
	if (!output.is_open() || output.bad())
		throw ShrubberyCreationForm::OpenFileError();
	for (int i = 0; i < 3; i++)
	{
		output << ShrubberyCreationForm::_trees[i];
	}
	output.close();	
}

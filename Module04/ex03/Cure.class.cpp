/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:37:47 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/08 18:36:13 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.class.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Default constructor called on Cure" << std::endl;
}

Cure::Cure(std::string const & type) : AMateria(type)
{
	std::cout << "Constructor called on Cure" << std::endl;
}

Cure::Cure(Cure const & src) : AMateria(src.getType())
{
	std::cout << "Copy constructor called on Cure" << std::endl;
}

Cure&	Cure::operator=(Cure const & rhs)
{
	std::cout << "Copy assignment operator called on Cure" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_type = rhs.getType();
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Destructor called on Cure" << std::endl;
}

void	Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

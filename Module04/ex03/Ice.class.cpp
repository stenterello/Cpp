/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:37:54 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/08 18:35:38 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.class.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Default constructor called on Ice" << std::endl;
}

Ice::Ice(std::string const & type) : AMateria(type)
{
	std::cout << "Constructor called on Ice" << std::endl;
}

Ice::Ice(Ice const & src) : AMateria(src.getType())
{
	std::cout << "Copy constructor called on Ice" << std::endl;
}

Ice&	Ice::operator=(Ice const & rhs)
{
	std::cout << "Copy assignment operator called on Ice" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_type = rhs.getType();
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Destructor called on Ice" << std::endl;
}

void	Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

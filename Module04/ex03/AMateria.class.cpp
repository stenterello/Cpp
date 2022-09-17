/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:19:58 by ddelladi          #+#    #+#             */
/*   Updated: 2022/09/17 17:48:53 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.class.hpp"

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "Constructor called upon AMateria class" << std::endl;
}

AMateria::AMateria(AMateria const & src)
{
	std::cout << "Copy constructor called upon AMateria class" << std::endl;
	this->_type = src.getType();
}

AMateria::~AMateria()
{
	std::cout << "Destructor called upon AMateria class" << std::endl;
}

AMateria&	AMateria::operator=(AMateria const & rhs)
{
	std::cout << "Copy assignment operator called upon AMateria class" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_type = rhs.getType();
	return (*this);
}

std::string const &	AMateria::getType() const
{
	return (this->_type);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:36:24 by ddelladi          #+#    #+#             */
/*   Updated: 2022/09/17 16:06:04 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.class.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Constructor called on WrongAnimal class" << std::endl;
	this->setType("WrongAnimal");
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	std::cout << "Copy constructor called on WrongAnimal class" << std::endl;
	this->setType(src.getType());
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor called on WrongAnimal" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const & rhs)
{
	std::cout << "Copy assignment operator called on WrongAnimal class" << std::endl;
	if (this == &rhs)
		return (*this);
	this->setType(rhs.getType());
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}

void	WrongAnimal::setType(std::string type)
{
	this->_type = type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "I am not an animal: I'm a human" << std::endl;
}
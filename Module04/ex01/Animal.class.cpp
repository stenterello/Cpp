/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 13:54:08 by ddelladi          #+#    #+#             */
/*   Updated: 2022/09/17 14:49:44 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"

Animal::Animal(void): _type("no_type")
{
	std::cout << "Animal constructor with no_type has been called" << std::endl;
}

Animal::Animal(std::string type): _type(type)
{
	std::cout << "Animal with type " << this->getType() << " has been called" << std::endl;
}

Animal::Animal(Animal const & src)
{
	this->setType(src.getType());
}

Animal::~Animal()
{
	std::cout << "Animal destructor has been called" << std::endl;
}

Animal&	Animal::operator=(Animal const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->setType(rhs.getType());
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::setType(std::string type)
{
	this->_type = type;
}

void	Animal::makeSound(void) const
{
	if (!this->getType().compare("Cat"))
		std::cout << "Meow" << std::endl;
	else if (!this->getType().compare("Dog"))
		std::cout << "Woof" << std::endl;
	else
		std::cout << "No animal type matching in my universe" << std::endl;
}

std::ostream&	operator<<(std::ostream& os, Animal const & an)
{
	os << an.getType() << std::endl;
	return (os);
}
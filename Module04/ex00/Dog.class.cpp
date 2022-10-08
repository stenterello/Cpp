/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:27:46 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/08 17:19:04 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor has been called" << std::endl;
	this->setType("Dog");
}

Dog::Dog(Dog const & src) : Animal()
{
	std::cout << "Copy constructor has been called on Dog class" << std::endl;
	this->setType(src.getType());
}

Dog::~Dog()
{
	std::cout << "Dog destructor has been called" << std::endl;
}

Dog&	Dog::operator=(Dog const & rhs)
{
	std::cout << "Copy assignment operator has been called on Dog class" << std::endl;
	if (this == &rhs)
		return (*this);
	this->setType(rhs.getType());
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof woof" << std::endl;
}

std::ostream&	operator<<(std::ostream& os, Dog const & d)
{
	os << d.getType() << std::endl;
	return (os);
}

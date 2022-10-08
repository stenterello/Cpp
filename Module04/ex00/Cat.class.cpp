/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:15:17 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/08 17:18:46 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor has been called" << std::endl;
	this->setType("Cat");
}

Cat::Cat(Cat const & src) : Animal()
{
	std::cout << "Copy constructor called" << std::endl;
	this->setType(src.getType());
}

Cat::~Cat()
{
	std::cout << "Cat destructor has been called" << std::endl;
}

Cat&	Cat::operator=(Cat const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->setType(rhs.getType());
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow meow" << std::endl;
}

std::ostream&	operator<<(std::ostream& os, Cat const & c)
{
	os << c.getType() << std::endl;
	return (os);
}

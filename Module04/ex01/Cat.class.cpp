/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:15:17 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/08 17:42:30 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"

Cat::Cat() : _brain(new Brain())
{
	std::cout << "Cat constructor has been called" << std::endl;
	this->setType("Cat");
}

Cat::Cat(Cat const & src) : Animal(), _brain(new Brain())
{
	std::cout << "Copy constructor called" << std::endl;
	this->setType(src.getType());
	this->copyBrain(src.getBrain());
}

Cat::~Cat()
{
	std::cout << "Cat destructor has been called" << std::endl;
	delete this->_brain;
}

Cat&	Cat::operator=(Cat const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->setType(rhs.getType());
	this->_brain = new Brain();
	this->copyBrain(rhs.getBrain());
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Woof woof" << std::endl;
}

void	Cat::printBrain(void) const
{
	int	i;

	i = -1;
	while (++i < 100)
		std::cout << i << " = " << this->_brain->getIdea(i) << std::endl;
}

Brain*	Cat::getBrain() const
{
	return (this->_brain);
}

void	Cat::copyBrain(Brain* b)
{
	int	i;

	i = -1;
	while (++i < 100)
		this->_brain->setIdea(b->getIdea(i), i);
}

std::ostream&	operator<<(std::ostream& os, Cat const & c)
{
	os << c.getType() << std::endl;
	return (os);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:27:46 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/08 17:29:51 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"

Dog::Dog() : _brain(new Brain())
{
	std::cout << "Dog constructor has been called" << std::endl;
	this->setType("Dog");
}

Dog::Dog(Dog const & src) : Animal(), _brain(new Brain())
{
	std::cout << "Copy constructor has been called on Dog class" << std::endl;
	this->setType(src.getType());
	this->copyBrain(src.getBrain());
}

Dog::~Dog()
{
	std::cout << "Dog destructor has been called" << std::endl;
	delete this->_brain;
}

Dog&	Dog::operator=(Dog const & rhs)
{
	std::cout << "Copy assignment operator has been called on Dog class" << std::endl;
	if (this == &rhs)
		return (*this);
	this->setType(rhs.getType());
	this->_brain = new Brain();
	this->copyBrain(rhs.getBrain());
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof woof" << std::endl;
}

void	Dog::printBrain(void) const
{
	int	i;

	i = -1;
	while (++i < 100)
		std::cout << i << " = " << this->_brain->getIdea(i) << std::endl;
}

Brain*	Dog::getBrain() const
{
	return (this->_brain);
}

void	Dog::copyBrain(Brain* b)
{
	int	i;

	i = -1;
	while (++i < 100)
		this->_brain->setIdea(b->getIdea(i), i);
}

std::ostream&	operator<<(std::ostream& os, Dog const & d)
{
	os << d.getType() << std::endl;
	return (os);
}

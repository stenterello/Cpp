/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:15:17 by ddelladi          #+#    #+#             */
/*   Updated: 2022/09/17 17:12:48 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor has been called" << std::endl;
	this->setType("Cat");
	this->_brain = new Brain();
}

Cat::Cat(Cat const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	this->setType(src.getType());
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
	return (*this);
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

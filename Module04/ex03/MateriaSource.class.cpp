/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.class.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:42:29 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/08 22:07:28 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.class.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "Constructor called on MateriaSource" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inv[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	std::cout << "Copy constructor called on MateriaSource" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inv[i] = src._inv[i];
}

MateriaSource&	MateriaSource::operator=(MateriaSource const & rhs)
{
	std::cout << "Copy assignment operator called on MateriaSource" << std::endl;
	if (this == &rhs)
		return (*this);
	for (int i = 0; i < 4; i++)
		this->_inv[i] = rhs._inv[i];
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "Destructor called on MateriaSource" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->_inv[i];
}

void	MateriaSource::learnMateria(AMateria* m)
{
	int	i;

	i = 0;
	for (; i < 4; i++)
	{
		if (!this->_inv[i])
			break ;
	}
	if (i < 4)
		this->_inv[i] = m->clone();
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inv[i]->getType().compare(type))
			return (this->_inv[i]->clone());
	}
	return (0);
}

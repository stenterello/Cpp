/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:26:39 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/08 16:58:19 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap " << this->getName() << " constructor has been called!" << std::endl;
}

FragTrap::FragTrap(std::string const name)
{
	this->setName(name);
	this->setHealth(100);
	this->setEnergy(100);
	this->setAttackDamage(30);
	std::cout << "Fragtrap " << this->getName() << " constructor has been called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap()
{
	*this = src;
	std::cout << "FragTrap " << this->getName() << " copy constructor has been called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->getName() << " destructor has been called" << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->setName(rhs.getName());
	this->setHealth(rhs.getHealth());
	this->setEnergy(rhs.getEnergy());
	this->setAttackDamage(rhs.getAttackDamage());
	std::cout << "FragTrap " << this->getName() << " assignment copy operator called" << std::endl;
	return (*this);
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "I, " << this->getName() << " FragTrap, am asking you for a friendly and positive high five. Not so much in the mood, btw" << std::endl;
}

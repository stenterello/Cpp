/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:06:54 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/08 16:59:42 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->setName("no name");
	this->setHealth(100);
	this->setEnergy(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap " << this->getName() << " has been constructed!" << std::endl;
}

ScavTrap::ScavTrap(std::string const name)
{
	this->setName(name);
	this->setHealth(100);
	this->setEnergy(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap " << this->getName() << " has been constructed!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap()
{
	*this = src;
	std::cout << "ScavTrap " << this->getName() << " has been constructed with copy constructor!" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->getName() << " has been destroyed!" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->setName(rhs.getName());
	this->setAttackDamage(rhs.getAttackDamage());
	this->setEnergy(rhs.getEnergy());
	this->setHealth(rhs.getHealth());
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	this->setEnergy(this->getEnergy() - 1);
}

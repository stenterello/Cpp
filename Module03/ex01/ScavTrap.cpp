/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:06:54 by ddelladi          #+#    #+#             */
/*   Updated: 2022/08/24 14:24:18 by ddelladi         ###   ########.fr       */
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

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
}

ScavTrap::~ScavTrap(void)
{}

ScavTrap&	ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "Assignment operator called" << std::endl;
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

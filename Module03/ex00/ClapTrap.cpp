#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "ClapTrap " << name << " has been constructed!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & rhs)
{
	std::cout << "ClapTrap " << this->getName() << " has been constructed!" << std::endl;
	*this = rhs;	
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->getName() << " has been destroyed!" << std::endl;
}

std::string const	ClapTrap::getName(void)
{
	return (this->_name);
}

int	ClapTrap::getHealth(void)
{
	return (this->_health);
}

int	ClapTrap::getEnergy(void)
{
	return (this->_energy);
}

int	ClapTrap::getAttackDamage(void)
{
	return (this->_attack_dmg);
}

void	ClapTrap::setHealth(unsigned int amount)
{
	this->_health = amount;
}

void	ClapTrap::setEnergy(unsigned int amount)
{
	this->_energy = amount;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const & rhs)
{
	if (this == &rhs)
		return (*this);
	// copiare
	std::cout << "ClapTrap " << this->getName() << " has been destroyed!" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	
	// come trovare l'istanza con il nome target corrispettivo?
	std::cout << "ClapTrap " << this->getName() << " attacks" << target << ", causing " << this->getAttackDamage() << "points of damage!" << std::endl;
	this->setEnergy(this->getEnergy() - 1);
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->getName() << " takes " << amount << " points of damage!" << std::endl;
	this->setHealth(this->getHealth() - amount);
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->getName() << " gets one point of healt, loses one point of energy." << std::endl;
	this->setHealth(this->getHealth() + amount);
	this->setEnergy(this->getEnergy() - 1);
}

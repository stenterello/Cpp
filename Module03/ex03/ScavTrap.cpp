#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->_name = "no name";
	this->_health = 100;
	this->_energy = 50;
	this->_attack_dmg = 20;
	std::cout << "ScavTrap with " << this->getName() << " has been constructed!" << std::endl;
}

ScavTrap::ScavTrap(std::string const name)
{
	this->_name = name;
	this->_health = 100;
	this->_energy = 50;
	this->_attack_dmg = 20;
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

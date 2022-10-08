#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : _name("no_name")
{
	this->FragTrap::setHealth(FragTrap::getHealth());
	this->ScavTrap::setEnergy(ScavTrap::getEnergy());
	this->FragTrap::setAttackDamage(FragTrap::getAttackDamage());
	ClapTrap::setName(_name + "_clap_name");
	std::cout << "Default DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const name) : _name(name)
{
	this->setHealth(FragTrap::getHealth());
	this->setEnergy(ScavTrap::getEnergy());
	this->setAttackDamage(FragTrap::getAttackDamage());
	ClapTrap::setName(_name + "_clap_name");
	std::cout << "DiamondTrap " << name << " constructor with name parameter called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) : ClapTrap(), FragTrap(), ScavTrap()
{
	*this = src;
	std::cout << "Copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Diamond destructor called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->setName(rhs.ClapTrap::getName());
	this->setHealth(rhs.FragTrap::getHealth());
	this->setEnergy(rhs.ScavTrap::getEnergy());
	this->setAttackDamage(rhs.FragTrap::getAttackDamage());
	return (*this);
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My DiamondTrap name is: " << this->_name << ", and my ClapTrap name is: " << ClapTrap::getName() << std::endl;
}

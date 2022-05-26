#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap with " << this->getName() << " constructor has been called!" << std::endl;
}

FragTrap::FragTrap(std::string const name)
{
	this->_name = name;
	this->_health = 100;
	this->_energy = 50;
	this->_attack_dmg = 20;
	std::cout << "Fragtrap " << this->getName() << " has been called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
}

FragTrap&	FragTrap::operator=(FragTrap const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->setName(rhs._name);
	this->setHealth(rhs._health);
	this->setEnergy(rhs._energy);
	this->setAttackDamage(rhs._attack_dmg);
	std::cout << "Assignment copy operator called" << std::endl;
	return (*this);
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "I, " << this->getName() << " FragTrap, am asking you for a friendly and positive high five. Not so much in the mood, btw";
}

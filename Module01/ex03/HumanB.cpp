#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weap(NULL)
{
}

HumanB::HumanB(std::string name, Weapon& weap) : _weap(&weap), _name(name)
{
}

HumanB::~HumanB(void)
{

}

void	HumanB::attack(void) const
{
	if (this->_weap)
		std::cout << this->_name << " attacks with their " << this->_weap->getType() << std::endl;
	else
		std::cout << this->_name << " attacks with their bare hands" << std::endl;
}

void	HumanB::setWeapon(Weapon& weap)
{
	this->_weap = &weap;
}

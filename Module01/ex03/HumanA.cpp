#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon& weap)
{
	this->_weap = &weap;
	this->_name = name;
}

HumanA::~HumanA(void)
{

}

void	HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with their " << this->_weap->getType() << std::endl;
}

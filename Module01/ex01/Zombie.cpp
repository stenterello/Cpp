#include "Zombie.hpp"

Zombie::Zombie(std::string s)
{
	this->_name = s;
}

Zombie::Zombie(void)
{
	this->_name = "A zombie without a name";
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " has been destroyed." << std::endl;
}

std::string	Zombie::getName(void) const
{
	return (this->_name);
}

void	Zombie::announce(void) const
{
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

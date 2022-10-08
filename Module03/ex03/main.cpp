#include "DiamondTrap.hpp"

int	main(void)
{
	{
		ClapTrap	*ptr = new DiamondTrap("new");
		DiamondTrap diamTrap("diamTrap");
		diamTrap.attack("Handsome Jack");
		diamTrap.takeDamage(6);
		diamTrap.beRepaired(4);
		diamTrap.takeDamage(3);
		diamTrap.guardGate();
		diamTrap.beRepaired(8);
		diamTrap.takeDamage(17);
		diamTrap.whoAmI();
		ptr->attack("eheheh");
		delete ptr;
	}
}

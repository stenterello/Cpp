#include "ClapTrap.hpp"

int	main(int argc, char **argv)
{
	ClapTrap	first("first");
	ClapTrap	second("second");

	first.attack(second.getName());
	second.takeDamage(first.getAttackDamage());
	second.attack(first.getName());
	first.beRepaired(10);
	return (0);
}

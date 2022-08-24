/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:59:49 by ddelladi          #+#    #+#             */
/*   Updated: 2022/08/24 13:25:46 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(int argc, char **argv)
{
	ClapTrap	first("first");
	ClapTrap	second("second");

	std::cout << std::endl << "These ClapTraps earn one attack damage point each time they attack a target" << std::endl << std::endl;
	first.attack(second.getName());
	second.takeDamage(first.getAttackDamage());
	std::cout << "Now ClapTrap second has " << second.getHealth() << " points of health and " << second.getEnergy() << " points of energy" << std::endl;
	second.attack(first.getName());
	first.takeDamage(second.getAttackDamage());
	std::cout << "Now ClapTrap first has " << first.getHealth() << " points of health and " << first.getEnergy() << " points of energy" << std::endl;
	first.beRepaired(10);
	std::cout << "Now ClapTrap first has " << first.getHealth() << " points of health and " << first.getEnergy() << " points of energy" << std::endl;
	first.attack(second.getName());
	second.takeDamage(first.getAttackDamage());
	std::cout << "Now ClapTrap second has " << second.getHealth() << " points of health and " << second.getEnergy() << " points of energy" << std::endl;
	second.beRepaired(5);
	std::cout << "Now ClapTrap second has " << second.getHealth() << " points of health and " << second.getEnergy() << " points of energy" << std::endl;
	return (0);
}

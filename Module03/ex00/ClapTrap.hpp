/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:59:46 by ddelladi          #+#    #+#             */
/*   Updated: 2022/09/17 13:30:05 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>
# include <iostream>

class ClapTrap
{
	private:
		std::string	_name;
		int			_health;
		int			_energy;
		int			_attack_dmg;
	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & rhs);
		~ClapTrap();
		ClapTrap&	operator=(ClapTrap const & rhs);
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		std::string	getName() const;
		int			getHealth() const;
		int			getEnergy() const;
		int			getAttackDamage() const;
		void		setName(std::string name);
		void		setHealth(unsigned int amount);
		void		setEnergy(unsigned int amount);
		void		setAttackDamage(unsigned int amount);
};

#endif

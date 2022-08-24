/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:07:06 by ddelladi          #+#    #+#             */
/*   Updated: 2022/08/24 15:53:46 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string const name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap();
		ScavTrap&	operator=(ScavTrap const & rhs);
		void		attack(std::string const & target);
		void		guardGate();
};

std::ostream&	operator<<(std::ostream os, ScavTrap& src);

#endif

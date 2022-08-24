/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:07:06 by ddelladi          #+#    #+#             */
/*   Updated: 2022/08/24 14:20:40 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string const name);
		ScavTrap(ScavTrap const & src);
		virtual ~ScavTrap();
		ScavTrap&	operator=(ScavTrap const & rhs);
		void		attack(std::string const & target);
		void		guardGate();
};

std::ostream&	operator<<(std::ostream os, ScavTrap& src);

#endif

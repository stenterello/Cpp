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
		ClapTrap&			operator=(ClapTrap const & rhs);
		void				attack(const std::string& target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
		std::string const	getName();
		int					getHealth();
		int					getEnergy();
		int					getAttackDamage();
		void				setHealth(unsigned int amount);
		void				setEnergy(unsigned int amount);
};

#endif

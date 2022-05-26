#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>
# include <iostream>

class ClapTrap
{
	protected:
		std::string	_name;
		int			_health;
		int			_energy;
		int			_attack_dmg;
	public:
		ClapTrap();
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

std::ostream&	operator<<(std::ostream& os, ClapTrap& src);

#endif

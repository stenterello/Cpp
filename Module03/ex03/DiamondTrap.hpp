#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string	_name;
	public:
		DiamondTrap();
		DiamondTrap(std::string const name);
		DiamondTrap(DiamondTrap const & src);
		~DiamondTrap();
		DiamondTrap&	operator=(DiamondTrap const & rhs);
		void			attack(std::string const &target);
		void			whoAmI();
};

std::ostream&	operator<<(std::ostream& os, DiamondTrap& src);

#endif

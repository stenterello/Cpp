#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string const name);
		FragTrap(FragTrap const & src);
		FragTrap&	operator=(FragTrap const & rhs);
		void		highFiveGuys(void);
};

std::ostream&	operator<<(std::ostream& os, FragTrap& src);

#endif

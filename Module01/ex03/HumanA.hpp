#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
# include <iostream>

class HumanA
{
	public:
		HumanA(std::string name, Weapon& weap);
		~HumanA();
		void	attack() const;
	private:
		Weapon*		_weap;
		std::string	_name;
};

#endif

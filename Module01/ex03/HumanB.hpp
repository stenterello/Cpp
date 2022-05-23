#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
# include <iostream>

class HumanB
{
	public:
		HumanB(std::string name, Weapon& weap);
		HumanB(std::string name);
		~HumanB();
		void	attack() const;
		void	setWeapon(Weapon& weap);
	private:
		Weapon*		_weap;
		std::string	_name;
};

#endif

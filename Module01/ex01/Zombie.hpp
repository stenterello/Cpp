#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
	public:
		Zombie(std::string s);
		Zombie();
		~Zombie();
		void				announce(void) const;
		std::string			getName(void) const;
		static Zombie*		zombieHorde(int N, std::string name);
	private:
		std::string	_name;
};


#endif

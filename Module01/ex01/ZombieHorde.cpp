#include "Zombie.hpp"

Zombie*	Zombie::zombieHorde(int N, std::string name)
{
	return (new Zombie[N]);
}

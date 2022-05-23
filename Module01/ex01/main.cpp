#include "Zombie.hpp"
#include <climits>

int	main(int argc, char **argv)
{
	Zombie*	horde;
	char	*string = NULL;
	int		i;

	if (argc < 2 || argc > 2)
	{
		std::cout << "Insert a number of zombies to create. \n\n\tMoar brainz! [number of zombie]" << std::endl;
		return (1);
	}
	Zombie	first = Zombie("first");
	if (strtol(argv[1], &string, 0) < INT32_MAX)
		horde = Zombie::zombieHorde(atoi(argv[1]), "nope");
	else
	{
		std::cout << "Too many zombies" << std::endl;
		return (1);
	}
	i = 0;
	while (i < atoi(argv[1]))
		horde[i++].announce();
	delete [] horde;
	return (0);
}

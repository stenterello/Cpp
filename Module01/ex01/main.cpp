#include "Zombie.hpp"
#include <climits>

int	main(int argc, char **argv)
{
	Zombie	*horde;
	char	*string = NULL;
	int		i;

	if (argc < 2 || argc > 3)
	{
		std::cout << "Insert a number of zombies to create. \n\n\tMoar brainz! [number of zombie] [optional: name]" << std::endl;
		return (1);
	}
	if (strtol(argv[1], &string, 0) < INT32_MAX && argc == 3)
		horde = zombieHorde(atoi(argv[1]), argv[2]);
	else if (strtol(argv[1], &string, 0) < INT32_MAX)
		horde = zombieHorde(atoi(argv[1]), "noname");
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

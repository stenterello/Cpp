#include "Harl.hpp"

int	usage(void)
{
	std::cerr << "Usage\n\t./harlFilter [complaint]\n\n";
	return (-1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (usage());
	Harl	complainer;

	try
	{
		complainer.complain(argv[1]);
	}
	catch(char const *e)
	{
		std::cerr << e << '\n';
	}
	return (0);
}

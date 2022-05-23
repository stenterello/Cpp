#include "Sed.hpp"

int	usage(void)
{
	std::cerr << "Usage:\n\tSed is for losers [filename] [s1] [s2]" << std::endl << std::endl;
	std::cerr << "All occurences of s1 will be replaced with s2" << std::endl;
	return (-1);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (usage());
	Sed	sed(argv[1], argv[2], argv[3]);
	try
	{
		sed.openStreams(argv[1], argv[2], argv[3]);
	}
	catch(char const *e)
	{
		std::cerr << e << '\n';
		return (-1);
	}
	return (0);
}

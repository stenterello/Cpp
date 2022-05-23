#include "Karen.hpp"

int main()
{
	Karen	complainer;

	try
	{
		complainer.complain("DEBUG");
		complainer.complain("INFO");
		complainer.complain("WARNING");
		complainer.complain("ERROR");
		complainer.complain("lol");
	}
	catch(char const *e)
	{
		std::cerr << e << std::endl;
		return (-1);
	}
	return (0);
}

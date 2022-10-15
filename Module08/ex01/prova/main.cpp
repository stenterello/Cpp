#include <iostream>
#include <vector>

int	main()
{
	std::vector<int>	n;

	n.reserve(5);
	std::vector<int>::iterator	iter;

	iter = n.begin();
	n.push_back(0);
	n.push_back(1);
	while (iter != n.end())
	{
		std::cout << *iter << std::endl;
		iter++;
	}
	std::cout << std::endl << n.size() << std::endl;
	std::cout << std::endl << static_cast<int*>(&(*n.begin())) << " " << static_cast<int*>(&(*n.end())) << std::endl;
	std::cout << std::endl << *n.begin() << " " << *n.end() << std::endl;
	return (0);
}
#include "Zombie.hpp"

int	main(void)
{
	std::cout << "Now, I'm just calling a Zombie" << std::endl;
	Zombie	z1("first");

	std::cout << std::endl << "Now, I'm calling a Zombie allocated on the heap" << std::endl;
	Zombie	*z2 = newZombie("HeapZombie");

	std::cout << std::endl << "Now, I'm calling the same zombie from the main file" << std::endl;
	z2->announce();

	std::cout << std::endl << "Now, I'm calling a Zombie on the stack, so he will die immediately" << std::endl;
	randomChump("StackZombie");

	std::cout << std::endl << "Bye bye" << std::endl;
	std::cout << std::endl << "Oops.. I was leaving a leak! Goodbye HeapZombie" << std::endl;
	delete z2;

	return (0);
}
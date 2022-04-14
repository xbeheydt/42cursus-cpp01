#include "Zombie.h"
#include <iostream>

int	main(void)
{
	std::cout << "Using newZombie() :" << std::endl;
	Zombie	*z = newZombie("Zombie1");
	if (z != NULL)
	{
		z->announce();
		std::cout << "Delete Zombie from newZombie() :" << std::endl;
		delete z;
	}
	std::cout << "Using randomChump() :" << std::endl;
	randomChump("Zombie2");
	return (0);
}

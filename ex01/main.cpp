#include "Zombie.h"
#include "Zombie.hpp"
#include <iostream>

#define NB_ZOMBIE	10

int	main(void)
{
	std::cout << "Create " << NB_ZOMBIE << " zombies !" << std::endl;
	Zombie	*horde = zombieHorde(NB_ZOMBIE, "Zombie de la horde");
	if (horde != NULL)
	{
		for (int i = 0; i < NB_ZOMBIE; i++)
			horde[i].announce();
		delete [] horde;
	}
	return (0);
}

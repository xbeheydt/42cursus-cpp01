#include "Zombie.h"
#include "Zombie.hpp"


Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*horde = new Zombie[N];
	for (int i = 0; horde != NULL && i < N; i++)
		horde[i] = Zombie(name);
	return (horde);
}

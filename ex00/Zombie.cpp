#include "Zombie.hpp"
#include <string>
#include <iostream>


/* Constructor(s) & Destructor */

Zombie::Zombie(void)
{ return; }

Zombie::Zombie(std::string name) :
	__name(name)
{ return; }

Zombie::~Zombie(void)
{
	std::cout << this->__name << " was destroyed." << std::endl;
	return;
}


/* Public Methods */

void	Zombie::announce(void) const
{
	std::cout << this->__name	<< ": " <<
		" BraiiiiiiinnnzzzZ..."	<< std::endl;
	return;
}

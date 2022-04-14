#include "HumanB.hpp"
#include <iostream>
# include "Weapon.h"


/* Constructors & Destructor */
HumanB::HumanB(std::string name) :
	__name(name)
{ return; }

HumanB::~HumanB(void)
{ return; }


/* Public Methods */

void	HumanB::attack(void) const
{
	std::cout << this->__weapon->getType() << std::endl;
	return;
}

/* Accessors */
void	HumanB::setWeapon(Weapon &weapon)
{
	this->__weapon = &weapon;
}

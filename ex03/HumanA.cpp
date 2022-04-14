#include "HumanA.hpp"
#include <iostream>

# include "Weapon.h"


/* Constructors & Destructor */
HumanA::HumanA(std::string name, Weapon &weapon) :
	__name(name),
	__weapon(weapon)
{ return; }

HumanA::~HumanA(void)
{ return; }


/* Public Methods */

void	HumanA::attack(void) const
{
	std::cout << this->__weapon.getType() << std::endl;
	return;
}

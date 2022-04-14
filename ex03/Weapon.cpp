#include "Weapon.hpp"


/* Constructors & Destructor */
Weapon::Weapon(void)
{ return; }

Weapon::Weapon(std::string type) :
	__type(type)
{ return; }

Weapon::~Weapon(void)
{ return; }


/* Accessors */
void	Weapon::setType(std::string type)
{
	this->__type = type;
	return;
}

std::string	Weapon::getType(void) const
{
	return (this->__type);
}

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include "Weapon.h"


class HumanB
{
	public:
		/* Constructors & Destructor */
		HumanB(std::string name);
		~HumanB(void);

		/* Public Methods */
		void	attack(void) const;

		/* Accessors */
		void	setWeapon(Weapon &weapon);

	private:
		/* Private attributes */
		std::string	__name;
		Weapon		*__weapon;
};

#endif /* HUMANB_HPP */

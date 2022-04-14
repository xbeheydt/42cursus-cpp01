#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include "Weapon.h"


class HumanA
{
	public:
		/* Constructors & Destructor */
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);

		/* Public Methods */
		void	attack(void) const;

	private:
		/* Private attributes */
		std::string	__name;
		Weapon		&__weapon;
};

#endif /* HUMANA_HPP */

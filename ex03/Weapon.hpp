#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>


class Weapon
{
	public:
		/* Constructors & Destructor */
		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);

		/* Accessors */
		void		setType(std::string type);
		std::string	getType(void) const;

	private:
		/* Private attributes */
		std::string	__type;
};

#endif /* WEAPON_HPP */

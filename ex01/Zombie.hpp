#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
	public:
		/* Constructor(s) & Destructor */
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

		/* Public Methods */
		void		announce(void) const;

	private:
		/* Private attributes */
		std::string	__name;
};

#endif /* ZOMBIE_HPP */

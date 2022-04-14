#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <fstream>
# include <string>


class Sed
{
	public:
		/* Constructors & Destructor */
		Sed(
			std::string const path,
			std::string const s1,
			std::string const s2);
		~Sed(void);

		/* Public non-member functions */
		static std::string	strReplace(
				std::string const str,
				std::string const s1,
				std::string const s2);

	private:
		/* Private Attributes */
		std::fstream	__file_src;
		std::fstream	__file_dst;
		std::string		__s1;
		std::string		__s2;

		/* Private Methods */
		void			__sedFile(void);
};

#endif /* SED_HPP */

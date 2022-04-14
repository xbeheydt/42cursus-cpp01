#include "Sed.hpp"
#include <iostream>


int	main(int argc, char const *argv[])
{
	if (argc == 4)
	{
		std::string	path(argv[1]);
		std::string	s1(argv[2]);
		std::string	s2(argv[3]);
		try
		{
			Sed file(path, s1, s2);
		}
		catch (std::string file)
		{
			std::cerr << "File \"" <<  file << "\" not exists !" << std::endl;
			return (1);
		}
	}
	else
		std::cerr << "Missing parameters !" << std::endl;
	return (0);
}

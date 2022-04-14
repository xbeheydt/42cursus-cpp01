#include <iostream>
#include <string>

int	main(void)
{
	std::string	stringVAR("HI THIS IS BRAIN");
	std::string *stringPTR = &stringVAR;
	std::string &stringREF = stringVAR;

	std::cout << "string VAR address : "	<< &stringVAR	<< std::endl;
	std::cout << "string PTR address : "	<<  stringPTR	<< std::endl;
	std::cout << "string REF address : "	<< &stringREF	<< std::endl;
	std::cout << "string VAR value   : "	<<  stringVAR	<< std::endl;
	std::cout << "string PTR value   : "	<< *stringPTR	<< std::endl;
	std::cout << "string REF value   : "	<<  stringREF	<< std::endl;
	return (0);
}

#include "Sed.hpp"
#include <iostream>
#include <fstream>
#include <string>


/* Constructors & Destructor */
Sed::Sed(
		std::string const path,
		std::string const s1,
		std::string const s2) :
	__file_src(path),
	__s1(s1),
	__s2(s2)
{
	if (!this->__file_src)
		throw path;
	this->__file_dst.open(path + ".replace", std::fstream::out);
	this->__sedFile();
	return;
}

Sed::~Sed(void)
{
	this->__file_src.close();
	this->__file_dst.close();
	return;
}

/* Public non-member functions */
std::string	Sed::strReplace(std::string str, std::string s1, std::string s2)
{
	size_t		pos;

	pos = 0;
	while ((pos = str.find(s1)) != std::string::npos)
		str = str.substr(0, pos) + s2 + str.substr(pos + s1.length());
	return (str);
}

/* Private Methods */

void	Sed::__sedFile(void)
{
	std::string	line;

	while (std::getline(this->__file_src, line))
	{
		this->__file_dst
			<< Sed::strReplace(line, this->__s1, this->__s2) << std::endl;
	}
	return;
}

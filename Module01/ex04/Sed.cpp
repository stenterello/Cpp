#include "Sed.hpp"

Sed::Sed(std::string file, std::string s1, std::string s2)
{}

Sed::~Sed(void)
{}

void	Sed::openStreams(std::string file, std::string s1, std::string s2)
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		suffix = ".replace";
	std::string		line;

	ifs.open(file);
	if (!ifs.is_open())
		throw "Error while opening input file";
	ofs.open(file + suffix, std::ios::trunc);
	if (!ofs.is_open())
		throw "Error while opening output file";
	while (std::getline(ifs, line))
	{
		ofs << Sed::replaceAndReturn(line, s1, s2);
		if (!ofs.eof())
			ofs << std::endl;
	}
	ifs.close();
	ofs.close();
}

std::string	Sed::replaceAndReturn(std::string line, std::string search, std::string replace)
{
	std::stringstream	s;
	int					i;
	int					j;
	int					search_len;

	i = 0;
	search_len = search.length();
	while (line[i])
	{
		j = 0;
		while (line[i + j] == search[j] && j < search_len)
			j++;
		if (j == search_len)
		{
			s << replace;
			i += j - 1;
		}
		else
			s << line[i];
		i++;
	}
	return (s.str());
}

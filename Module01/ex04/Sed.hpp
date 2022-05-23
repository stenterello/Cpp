#ifndef SED_HPP
# define SED_HPP
# include <string>
# include <fstream>
# include <iostream>
# include <sstream>

class Sed
{
	public:
		Sed(std::string file, std::string s1, std::string s2);
		~Sed();
		void	openStreams(std::string file, std::string s1, std::string s2);
	private:
		std::string	replaceAndReturn(std::string line, std::string search, std::string replace);
};

#endif

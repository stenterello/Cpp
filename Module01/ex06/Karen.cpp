#include "Karen.hpp"

Karen::Karen(void)
{}

Karen::~Karen(void)
{}

void	Karen::complain(std::string level)
{
	int		index;
	void	(Karen::*ptr[4])() = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};

	index = (level == "DEBUG" ? 0 :
		level == "INFO" ? 1 :
		level == "WARNING" ? 2:
		level == "ERROR" ? 3 :
		throw "[ Probably complaining about insignificant problems ]");
	switch (index)
	{
		case 0:
		{
			while (index < 4)
				(this->*ptr[index++])();
		}
		case 1:
		{
			while (index < 4)
				(this->*ptr[index++])();
		}
		case 2:
		{
			while (index < 4)
				(this->*ptr[index++])();
		}
		case 3:
		{
			while (index < 4)
				(this->*ptr[index++])();
		}
	}
}

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

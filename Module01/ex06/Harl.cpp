#include "Harl.hpp"

Harl::Harl(void)
{}

Harl::~Harl(void)
{}

void	Harl::complain(std::string level)
{
	int		index;
	void	(Harl::*ptr[4])() = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
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

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!" << std::endl << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

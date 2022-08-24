/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:12:35 by ddelladi          #+#    #+#             */
/*   Updated: 2022/08/23 14:55:52 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <iostream>

Contact::Contact(void)
{
	int	i;

	i = FirstName;
	while (i <= DrkstSecret)
		this->_info[i++] = std::string();
}

Contact::~Contact()
{}

std::string	Contact::_field_name[5] = {
	"First Name",
	"Last Name",
	"Nick Name",
	"Phone Number",
	"Darkest Secret"
};

void	Contact::clean(int index)
{
	int	i;
	int	j;

	i = 0;
	while (i < 5)
	{
		j = 0;
		while (this->_info[i][j])
			this->_info[i][j++] = ' ';
		i++;
	}
		
}

bool	Contact::insertInfo(int index)
{
	int	i;

	i = FirstName;
	this->_index = index;
	while (i <= DrkstSecret)
	{
		std::cout << "\t# " << Contact::_field_name[i] << ": ";
		std::getline(std::cin, this->_info[i]);
		if (this->_info[i].length() == 0)
		{
			this->clean(i);
			std::cout << "No empty fields permitted. Aborting\n";
			return (false);
		}
		else if (i == PhoneNumber && !isNumber(this->_info[i]))
		{
			this->clean(i);
			std::cout << "Error: Phone Number is not numeric. Aborting\n";
			return (false);
		}
		i++;
	}
	std::cout << "Contact added in phonebook.\n";
	return (true);
}

std::string	Contact::getPortion(int i)
{
	std::string	portion;
	int			spaces;

	spaces = 0;
	if (this->_info[i].length() > 10)
	{
		portion = this->_info[i].substr(0, 9);
		portion += ".";
	}
	else
	{
		while (portion.length() + this->_info[i].length() < 10)
			portion += " ";
		portion += this->_info[i];
	}
	return (portion);
}

int	Contact::getIndex(void)
{
	return (this->_index + 1);
}


static bool	empty(std::string s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i++] != ' ')
			return (false);
	}
	return (true);
}

bool	Contact::exists(void)
{
	if (this->_info[0].length() > 0 && !empty(this->_info[0]))
		return (true);
	return (false);
}

bool	isNumber(std::string s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (!isdigit(s[i++]))
			return (false);
	}
	return (true);
}
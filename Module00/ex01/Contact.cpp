/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:12:35 by ddelladi          #+#    #+#             */
/*   Updated: 2022/05/15 16:12:36 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
	int	i;

	i = FirstName;
	while (i <= DrkstSecret)
		this->info[i++] = std::string();
}

Contact::~Contact()
{}

std::string	Contact::field_name[5] = {
	"First Name",
	"Last Name",
	"Nick Name",
	"Phone Number",
	"Darkest Secret"
};

void	Contact::insert_info(void)
{
	int	i;

	i = FirstName;
	while (i <= DrkstSecret)
	{
		std::cout << "\t# " << Contact::field_name[i] << ": ";
		std::getline(std::cin, this->info[i]);
		if (this->info[i].length() == 0)
		{
			std::cout << "No empty fields permitted. Aborting\n";
			return ;
		}
		i++;
	}
	std::cout << "Contact added in phonebook.\n";
	return ;
}

std::string	Contact::get_portion(int i)
{
	std::string	portion;

	if (this->info[i].length() > 10)
	{
		portion = this->info[i].substr(0, 9);
		portion += ".";
	}
	else
	{
		portion = this->info[i];
		while (portion.length() < 10)
			portion += " ";
	}
	return (portion);
}

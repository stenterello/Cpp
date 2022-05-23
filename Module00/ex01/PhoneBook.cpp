/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:12:49 by ddelladi          #+#    #+#             */
/*   Updated: 2022/05/15 16:12:50 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->older = 0;
}

PhoneBook::~PhoneBook()
{}

void	PhoneBook::add_contact(void)
{
	contacts[this->older].insert_info();
	this->older = (this->older + 1) % 8;
}

void	PhoneBook::display(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 5)
			std::cout << contacts[i].get_portion(j++) << " | ";
		std::cout << "\n";
		i++;
	}
}

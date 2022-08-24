/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:12:49 by ddelladi          #+#    #+#             */
/*   Updated: 2022/08/23 14:42:07 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook() : _older(0)
{}

PhoneBook::~PhoneBook()
{}

void	PhoneBook::add_contact(void)
{
	if (_contacts[this->_older].insertInfo(_older))
		this->_older = (this->_older + 1) % 8;
}

void	PhoneBook::display(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 8)
	{
		j = -1;
		while (j < 3)
		{
			if (j == -1 && _contacts[i].exists())
				std::cout << _contacts[i].getIndex() << " | ";
			else if (j == -1 && !_contacts[i].exists())
				std::cout << "  | ";
			else
				std::cout << _contacts[i].getPortion(j) << " | ";
			j++;
		}
		std::cout << "\n";
		i++;
	}
}

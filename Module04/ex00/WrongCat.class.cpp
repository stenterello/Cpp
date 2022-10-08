/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:36:28 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/08 17:11:21 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.class.hpp"

WrongCat::WrongCat()
{
	std::cout << "Constructor called on WrongCat" << std::endl;
	this->setType("WrongCat");
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal()
{
	std::cout << "Copy constructor called on WrongCat" << std::endl;
	this->setType(src.getType());
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor called on WrongCat" << std::endl;
}

WrongCat&	WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << "Copy assignment operator called on WrongCat" << std::endl;
	if (this == &rhs)
		return (*this);
	this->setType(rhs.getType());
	return (*this);
}

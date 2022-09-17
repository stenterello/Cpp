/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:08:54 by ddelladi          #+#    #+#             */
/*   Updated: 2022/09/17 17:06:43 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.class.hpp"

Brain::Brain()
{
	std::cout << "Constructor called upon Brain class" << std::endl;
}

Brain::Brain(Brain const & src)
{
	int	i;

	std::cout << "Copy assignment constructor called upon Brain class" << std::endl;
	i = -1;
	while (++i < 100)
		this->_ideas[i] = src.getIdea(i);
}

Brain::~Brain()
{
	std::cout << "Destructor called upon Brain class" << std::endl;
}

Brain&	Brain::operator=(Brain const & rhs)
{
	int	i;

	std::cout << "Copy assignment operator called upon Brain class" << std::endl;
	if (this == &rhs)
		return (*this);
	i = -1;
	while (++i < 100)
		this->_ideas[i] = rhs.getIdea(i);
	return (*this);
}

std::string	Brain::getIdea(int i) const
{
	return (this->_ideas[i]);
}

void	Brain::setIdea(std::string s, int i)
{
	this->_ideas[i] = s;
}
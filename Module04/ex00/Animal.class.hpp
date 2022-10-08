/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 13:47:55 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/08 17:16:52 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP
# include <iostream>

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal();
		Animal(std::string type);
		Animal(Animal const & src);
		virtual ~Animal();
		Animal&	operator=(Animal const & rhs);
		std::string		getType() const;
		void			setType(std::string type);
		virtual void	makeSound(void) const;
};

std::ostream&	operator<<(std::ostream& os, Animal const & an);

#endif

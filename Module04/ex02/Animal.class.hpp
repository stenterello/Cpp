/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 13:47:55 by ddelladi          #+#    #+#             */
/*   Updated: 2022/09/17 17:16:19 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP
# include "Brain.class.hpp"

class Animal
{
	protected:
		std::string	_type;
		Animal();
		Animal(std::string type);
		Animal(Animal const & src);
		virtual 	~Animal();
		Animal&		operator=(Animal const & rhs);
	public:
		std::string	getType() const;
		void		setType(std::string type);
		void		makeSound(void) const;
};

#endif
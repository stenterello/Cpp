/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 13:47:55 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/08 17:50:20 by ddelladi         ###   ########.fr       */
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
		std::string		getType() const;
		void			setType(std::string type);
		virtual void	makeSound(void) const;
};

#endif

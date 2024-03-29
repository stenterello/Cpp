/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 13:53:51 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/08 17:23:57 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP
# include "Animal.class.hpp"

class Dog : public Animal
{
	private:
		Brain*	_brain;
	public:
		Dog();
		Dog(Dog const & src);
		virtual ~Dog();
		Dog&	operator=(Dog const & rhs);
		void	makeSound(void) const;
		void	printBrain(void) const;
		Brain*	getBrain() const;
		void	copyBrain(Brain* b);
};

std::ostream&	operator<<(std::ostream& os, Dog const & d);

#endif

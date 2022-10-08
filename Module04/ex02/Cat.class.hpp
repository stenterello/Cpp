/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 13:53:26 by ddelladi          #+#    #+#             */
/*   Updated: 2022/10/08 17:32:04 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP
# include "Animal.class.hpp"

class Cat : public Animal
{
	private:
		Brain*	_brain;
	public:
		Cat();
		Cat(Cat const & src);
		virtual ~Cat();
		Cat&	operator=(Cat const & rhs);
		void	printBrain(void) const;
		Brain*	getBrain() const;
		void	copyBrain(Brain* b);
		void	makeSound(void) const;
};

#endif

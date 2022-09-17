/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelladi <ddelladi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:31:44 by ddelladi          #+#    #+#             */
/*   Updated: 2022/09/17 16:05:33 by ddelladi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"
#include "Cat.class.hpp"
#include "WrongCat.class.hpp"

int	main()
{
	const	Animal* meta = new Animal();
	const	Animal* j = new Dog();
	const	Animal* i = new Cat();
	const	WrongAnimal* a = new WrongCat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << a->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	a->makeSound();
	std::cout << "I am i, I am a " << i->getType() << " and my makeSound says: ";
	i->makeSound();
	std::cout << "I am j, I am a " << j->getType() << " and my makeSound says: ";
	j->makeSound();
	std::cout << "I am a, I am a " << a->getType() << " and my makeSound says: ";
	a->makeSound();
	delete meta;
	delete j;
	delete i;
	delete a;
	return (0);
}
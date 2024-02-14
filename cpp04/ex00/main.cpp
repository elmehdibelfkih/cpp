/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:36:49 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/14 07:03:10 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
// #include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

delete meta;
delete i;
delete j;

// const WrongAnimal* wrongmeta = new WrongAnimal();
// const WrongAnimal* wrongi = new WrongCat();
// std::cout << wrongi->getType() << " " << std::endl;
// wrongi->makeSound(); //will output the cat sound!
// wrongmeta->makeSound();

// delete wrongmeta;
// delete wrongi;

return 0;
}

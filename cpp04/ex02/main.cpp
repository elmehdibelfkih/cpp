/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:36:49 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/14 07:00:34 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // Animal *animals[10];
    
    // for (int i = 0; i < 10; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         animals[i] = new Cat();
            
    //     }
    //     else
    //         animals[i] = new Dog();
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     animals[i]->makeSound();
    // }
    // for (int i = 0; i < 10; i++)
    //     delete animals[i];
    
    
    // const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound(); //will output the cat sound!
    // j->makeSound();
    // meta->makeSound();

    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    // const AAnimal  *animal = new AAnimal();
    delete j;//should not create a leak
    delete i;

return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:38:27 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/13 14:52:01 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() // default constructor
{
    std::cout << "Animal : default constructor called " << std::endl;
}

Animal::Animal(Animal& obj) // copy constructor
{
    std::cout << "Animal : copy constructor called " << std::endl;
    if (this != &obj)
        this->type = obj.type;
}

Animal& Animal::operator=(const Animal& obj) // Copy assignment operator
{
    std::cout << "Animal : Copy assignment operator called " << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return *this;
}

Animal::~Animal() // destructor
{
    std::cout << "Animal : default destructor called " << std::endl;
    
}

void Animal::makeSound() const
{
    std::cout << "no Sound to make" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}


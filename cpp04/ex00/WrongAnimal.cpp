/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 21:04:39 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/13 14:50:10 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() // default constructor
{
    std::cout << "WrongAnimal : default constructor called " << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal& obj) // copy constructor
{
    std::cout << "WrongAnimal : copy constructor called " << std::endl;
    if (this != &obj)
        this->type = obj.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj) // Copy assignment operator
{
    std::cout << "WrongAnimal : Copy assignment operator called " << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return *this;
}

WrongAnimal::~WrongAnimal() // destructor
{
    std::cout << "WrongAnimal : default destructor called " << std::endl;
    
}

void WrongAnimal::makeSound() const
{
    std::cout << "no Sound to make" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

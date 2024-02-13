/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:38:27 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/13 15:54:27 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() // default constructor
{
    std::cout << "AAnimal : default constructor called " << std::endl;
}

AAnimal::AAnimal(AAnimal& obj) // copy constructor
{
    std::cout << "AAnimal : copy constructor called " << std::endl;
    if (this != &obj)
        this->type = obj.type;
}

AAnimal& AAnimal::operator=(const AAnimal& obj) // Copy assignment operator
{
    std::cout << "AAnimal : Copy assignment operator called " << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return *this;
}

AAnimal::~AAnimal() // destructor
{
    std::cout << "AAnimal : default destructor called " << std::endl;
    
}

std::string AAnimal::getType() const
{
    return (this->type);
}


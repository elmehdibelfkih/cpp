/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 22:00:47 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/12 20:49:09 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog()
{
    std::cout << "Dog : default constructor called" << std::endl;
    this->type = "Dog";
    
}

Dog::Dog(const Dog& obj)
{
    std::cout << "Dog : copy constructor called" << std::endl;
    *this = obj;
    
}

Dog& Dog::operator=(const Dog& obj)
{
    std::cout << "Dog : copy assignment operator called" << std::endl;
    if(this != &obj)
        this->type = obj.type;
    return *this;
    
}

Dog::~Dog()
{
    std::cout << "Dog : destructor called" << std::endl;
    
}

void Dog::makeSound() const
{
    std::cout << "hawhaw" << std::endl;
}
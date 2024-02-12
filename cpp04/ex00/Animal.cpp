/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:38:27 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/11 22:00:08 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal : default constructor called " << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal : default destructor called " << std::endl;
    
}

Animal::Animal(Animal& obj)
{
    std::cout << "Animal : copy constructor called " << std::endl;
    if (this != &obj)
        this->type = obj.type;
}

Animal& Animal::operator=(const Animal& obj)
{
    std::cout << "Animal : Copy assignment operator called " << std::endl;
    if (this != &obj)
        this->type = obj.type;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:29:47 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/13 20:47:12 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter()
{
    std::cout << "ICharacter : default constructor called" << std::endl;
    this->slot = new AMateria[4];
    
}

ICharacter::ICharacter(ICharacter& obj)
{
    std::cout << "copy constructor called" << std::endl;
    if (this != &obj)
        *this = obj;
}

ICharacter& ICharacter::operator=(const ICharacter& obj)
{
    std::cout << "copy assignment opertor" << std::endl;
    if (this != &obj)
    {
        for (int i = 0; i < 4; i++)
            this->slot[i] = this->slot[i];
        this->name = obj.name;
    }
    return *this;
}

ICharacter::~ICharacter()
{
    std::cout << "constructor called" << std::endl;
    delete [] this->slot;
}

ICharacter::ICharacter(std::string name)
{
    std::cout << "constructor called"<< std::endl;
    this->name = name;
}


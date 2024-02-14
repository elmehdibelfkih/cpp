/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:47:07 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/14 08:17:29 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") // default constructor
{
}

Ice::Ice(Ice& obj) // copy constructor
{
    if (this != &obj)
        *this = obj;
}

Ice&   Ice::operator=(const Ice& obj) // copy assignment operator
{
    if (this != &obj)
        this->type = obj.type;
    return *this;
}

Ice::~Ice() // destructor
{
    
}

AMateria* Ice::clone() const
{
    AMateria* ret = new Ice;
    
    return ret;
}

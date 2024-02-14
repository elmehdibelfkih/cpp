/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:47:44 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/14 08:16:13 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") // default constructor
{
}

Cure::Cure(Cure& obj) // copy constructor
{
    if (this != &obj)
        *this = obj;
}

Cure&   Cure::operator=(const Cure& obj) // copy assignment operator
{
    if (this != &obj)
        this->type = obj.type;
    return *this;
}

Cure::~Cure() // destructor
{
}

AMateria* Cure::clone() const
{
    AMateria* ret = new Cure;
    
    return ret;
}

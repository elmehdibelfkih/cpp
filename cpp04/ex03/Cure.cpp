/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:47:44 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/13 19:28:35 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure : default consructor called" << std::endl;
}

Cure::Cure(Cure& obj)
{
    std::cout << "Cure : copy consructor called" << std::endl;
    if (this != &obj)
        *this = obj;
}

Cure&   Cure::operator=(const Cure& obj)
{
    std::cout << "Cure : copy assignment operator called" << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return *this;
}

Cure::~Cure()
{
    std::cout << "Cure : destructor called" << std::endl;
    
}

virtual AMateria* Cure::clone() const
{
    AMateria* ret = new Cure;
    
    return ret;
}

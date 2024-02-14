/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:13:19 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/14 08:10:14 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"



AMateria::AMateria() // default constructor
{
    this->type = "";
    
}

AMateria::AMateria(AMateria &obj) // copy constructor
{
    if (this != &obj)
        *this = obj;
}

AMateria& AMateria::operator=(const AMateria& obj) // coppy assignment operator 
{
    if (this != &obj)
    {
        this->type = obj.type;
    }
    return *this;
}

AMateria::~AMateria() // destructor
{
}


AMateria::AMateria(std::string const & type) // constructor
{
    this->type = type;
}


std::string const & AMateria::getType() const
{
    return (this->type);
}


void AMateria::use(ICharacter& target)
{
    if (this->getType() == "ice")
        std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    else if (this->getType() == "cure")
        std::cout << "* heals  " << target.getName() << "\'s wounds *" << std::endl;
}

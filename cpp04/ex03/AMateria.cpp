/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:13:19 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/13 19:04:40 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria : default constructor called "<<std::endl;
    this->type = "";
    
}

AMateria::AMateria(AMateria &obj)
{
    std::cout << "AMateria : copy constructor called "<<std::endl;
    if (this != &obj)
        *this = obj;
}

AMateria& AMateria::operator=(const AMateria& obj)
{
    std::cout << "AMateria : copy assignement opertor called "<<std::endl;
    if (this != &obj)
    {
        this->type = obj.type;
    }
    return *this;
}

AMateria::~AMateria()
{
    std::cout << "AMateria : destructor called "<<std::endl;
    
}


AMateria::AMateria(std::string const & type)
{
    std::cout << "AMateria : constructor called "<<std::endl;
    this->type = type;
    
}


std::string const & AMateria::getType() const
{
    return (this->type);
}


// virtual void AMateria::use(ICharacter& target)
// {
    
// }

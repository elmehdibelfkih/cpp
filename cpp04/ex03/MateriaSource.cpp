/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:30:32 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/14 08:21:36 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() // default constructor
{
    for (int i = 0; i < 4; i++)
        this->slot[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& obj) // copy constructor
{
    *this = obj;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& obj) // copy assignment operator
{
    if(this != &obj)
    {
        for(int i = 0; i < 4; i++)
            *this->slot[i] = *obj.slot[i];
    }
    return *this;
}

MateriaSource::~MateriaSource() // destructor
{
    for (int i = 0; i< 4; i++)
        if (this->slot[i])
            delete this->slot[i];
}


void MateriaSource::learnMateria(AMateria* materia)
{
    if (!materia)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (!(this->slot[i]))
        {
            this->slot[i] = materia;
            return ;
        }
    }
    delete materia;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
   
    for(int i = 0; i < 4; i++)
    {
        if(this->slot[i] && this->slot[i]->getType() == type)
        {  
            return this->slot[i]->clone();
        }
    }
    return 0;
}

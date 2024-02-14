/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 01:10:48 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/14 08:14:44 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() // default constructor 
{
    this->name = "";
    for (int i = 0; i < 4; i++)
        this->slot[i] = NULL;

}

Character::Character(Character& obj) // copy constructor
{
    *this = obj;
}
Character& Character::operator=(const Character& obj) // copy assignment operator
{
    if(this != &obj)
    {
        this->name = obj.name;
        for(int i = 0; i < 4; i++)
            *this->slot[i] = *obj.slot[i];
    }
    return *this;
}
Character::~Character() // destructor
{
    for (int i = 0; i< 4; i++)
        if (this->slot[i])
            delete this->slot[i];
    
}
Character::Character(std::string name) // constructor
{
     this->name = name;
     
}

std::string const & Character::getName() const
{
    return this->name;   
}

void Character::equip(AMateria* m)
{
    if (!m)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (!(this->slot[i]))
        {
            this->slot[i] = m->clone();
            if (this->tmp[i])
            {
                delete this->tmp[i];
                this->tmp[i] = NULL;
            }
            return ;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 4 && idx >= 0 && this->slot[idx])
    {
        this->tmp[idx] = this->slot[idx];
        this->slot[idx] = NULL;   
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 4 && idx >= 0 && this->getSlot(idx))
        this->getSlot(idx)->use(target);
}

AMateria *  Character::getSlot(int index)
{
   
   return this->slot[index];
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:05:00 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/01/10 12:57:03 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name, Weapon my_weapon)
{
    this->name = name;
    this->my_weapon = my_weapon;
}

HumanB::HumanB(std::string name)
{
    this->name = name;
}

HumanB::~HumanB()
{
    
}

void HumanB::setWeapon(Weapon my_weapon)
{
    this->my_weapon = my_weapon;
}

void HumanB::attack()
{
    // if (this->my_weapon)
        std::cout << this->name << "attacks with their "<< this->my_weapon.getType() << std::endl;
}
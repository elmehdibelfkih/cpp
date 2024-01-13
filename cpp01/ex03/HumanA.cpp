/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:04:27 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/01/13 10:25:13 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& w) : weapon(w)
{
    this->name = name;
}

HumanA::~HumanA()
{
    
}

// void HumanA::setWeapon(Weapon &my_weapon)
// {
//     this->my_weapon = my_weapon;
// }

void HumanA::attack()
{
    std::cout << this->name << "attacks with their " << this->weapon.getType() << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:04:47 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/01/13 10:26:03 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
public:
    void attack();
    void setWeapon(Weapon my_weapon);
    HumanB(std::string name, Weapon my_weapon);
    HumanB(std::string name);
    ~HumanB();
private:
    std::string name;
    Weapon *my_weapon;
    
};
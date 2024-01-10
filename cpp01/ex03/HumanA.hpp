/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:04:11 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/01/10 12:34:25 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"
class HumanA
{
public:
    void attack();
    void setWeapon(Weapon my_weapon);
    HumanA(std::string name, Weapon my_weapon);
    ~HumanA();
private:
    std::string name;
    Weapon my_weapon;
    
};

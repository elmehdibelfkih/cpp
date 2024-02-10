/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 13:12:54 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/10 17:28:49 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
private:
    std::string name;
    int HitPoints; // 10
    int EnergyPoints; // 10
    int AttackDamage; // 0
public:
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& obj);
    ~ClapTrap();
    ClapTrap& operator=(const ClapTrap& obj);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 17:52:06 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/10 19:04:33 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap constructor called" << std::endl;
    this->name = name;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap constructor called" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if (this->EnergyPoints > 0 && this->HitPoints > 0)
    {
        this->EnergyPoints--;
        std::cout << this->name << " attack " << target << std::endl;
    }
}


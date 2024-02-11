/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 17:52:06 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/11 14:42:31 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
    this->name = "";
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap constructor called" << std::endl;
    this->name = name;
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->EnergyPoints > 0 && this->HitPoints > 0)
    {
        this->EnergyPoints--;
        std::cout << "ScavTrap "<< this->name << " attack " << target << std::endl;
    }
    else 
        std::cout << this->name << " cannot attack " << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "Scavtrap " << this->name << " is now in Gate keeper mode" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj.name)
{
    this->HitPoints = obj.HitPoints;
    this->EnergyPoints = obj.EnergyPoints;
    this->AttackDamage = obj.AttackDamage;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
    if (this != &obj)
    {
        this->HitPoints = obj.HitPoints;
        this->EnergyPoints = obj.EnergyPoints;
        this->name = obj.name;
        this->AttackDamage = obj.AttackDamage;
    }
}
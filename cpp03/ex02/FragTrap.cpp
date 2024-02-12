/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 01:10:59 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/12 18:32:24 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
    this->name = "";
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor called" << std::endl;
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (this->EnergyPoints > 0 && this->HitPoints > 0)
    {
        this->EnergyPoints--;
        std::cout << "FragTrap "<< this->name << " attack " << target << std::endl;
    }
    else 
        std::cout << this->name << " cannot attack " << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj.name)
{
    if (this != &obj)
    {
        this->HitPoints = obj.HitPoints;
        this->EnergyPoints = obj.EnergyPoints;
        this->AttackDamage = obj.AttackDamage;
    }
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
    if (this != &obj)
    {
        this->HitPoints = obj.HitPoints;
        this->EnergyPoints = obj.EnergyPoints;
        this->name = obj.name;
        this->AttackDamage = obj.AttackDamage;
    }
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->name << "positive high fives request" << std::endl;
}


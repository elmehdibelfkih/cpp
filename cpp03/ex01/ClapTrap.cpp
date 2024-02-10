/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 13:12:50 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/10 17:47:47 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "constructor called" << std::endl;
    this->name = name;
    this->HitPoints = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->EnergyPoints > 0 && this->HitPoints > 0)
    {
        this->EnergyPoints--;
        std::cout << this->name << " attack " << target << std::endl;
    }
    
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->HitPoints -= amount;
    std::cout << this->name << " take Damage :-" << amount << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->EnergyPoints > 0 && this->HitPoints > 0)
    {
        this->HitPoints += amount;
        this->EnergyPoints--;
        std::cout << this->name << " be Repaired : +" << amount << std::endl;
    }
}


ClapTrap::ClapTrap(const ClapTrap& obj)
{
    this->HitPoints = obj.HitPoints;
    this->EnergyPoints = obj.EnergyPoints;
    this->name = obj.name;
    this->AttackDamage = obj.AttackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
    if (this != &obj)
    {
        this->HitPoints = obj.HitPoints;
    this->EnergyPoints = obj.EnergyPoints;
    this->name = obj.name;
    this->AttackDamage = obj.AttackDamage;
    }
    return *this;
}

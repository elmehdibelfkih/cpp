/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:29:56 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/13 20:39:02 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

class ICharacter
{
private:
    std::string name;
    AMateria *slot[4];
public:
    ICharacter();
    ICharacter(ICharacter& obj);
    ICharacter& operator=(const ICharacter& obj);
    virtual ~ICharacter();

    ICharacter(std::string name);
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};

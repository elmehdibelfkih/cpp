/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 01:04:44 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/14 08:11:48 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"


class Character : public ICharacter
{
private:
    std::string name;
    AMateria *slot[4];
    AMateria *tmp[4];
public:
    Character();
    Character(Character& obj);
    Character& operator=(const Character& obj);
    virtual ~Character();

    Character(std::string name);
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    AMateria * getSlot(int index);
    void use(int idx, ICharacter& target);
};
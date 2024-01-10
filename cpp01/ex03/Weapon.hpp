/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:03:30 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/01/10 12:31:55 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
class Weapon
{
    
public:
    Weapon(std::string type);
    ~Weapon();
    const std::string& getType();
    void setType(std::string new_type);
private:
    std::string type;
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:38:18 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/12 21:48:34 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(Animal& obj);
    Animal& operator=(const Animal& obj);
    virtual ~Animal();
    std::string getType() const;    
    virtual void makeSound() const;
};

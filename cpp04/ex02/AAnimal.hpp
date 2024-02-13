/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:38:18 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/13 15:56:45 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class AAnimal
{
protected:
    std::string type;
public:
    AAnimal();
    AAnimal(AAnimal& obj);
    AAnimal& operator=(const AAnimal& obj);
    virtual ~AAnimal();
    std::string getType() const;    
    virtual void makeSound() const = 0;
};

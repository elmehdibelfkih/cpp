/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 22:00:57 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/12 20:49:04 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#pragma once 
#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog(const Dog& obj);
    Dog& operator=(const Dog& obj);
    ~Dog();

    void makeSound() const;
};


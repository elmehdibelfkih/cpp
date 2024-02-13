/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 22:01:11 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/12 20:49:29 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once 
#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(const Cat& obj);
    Cat& operator=(const Cat& obj);
    ~Cat();

    void makeSound() const;
};

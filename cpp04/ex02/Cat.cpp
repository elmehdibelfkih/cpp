/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 22:01:24 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/12 22:14:12 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat()
{
    std::cout << "Cat : default constructor called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
    
}

Cat::Cat(const Cat& obj)
{
    std::cout << "Cat : copy constructor called" << std::endl;
    this->brain = new Brain();
    *this = obj;
    
}

Cat& Cat::operator=(const Cat& obj)
{
    std::cout << "Cat : copy assignment operator called" << std::endl;
    if(this != &obj)
    {
        this->type = obj.type;
        *this->brain = *obj.brain;
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat : destructor called" << std::endl;
    delete this->brain;
    
}

void Cat::makeSound() const
{
    std::cout << "meow meow" << std::endl;
}

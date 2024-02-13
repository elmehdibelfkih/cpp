/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 21:07:10 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/12 21:08:06 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"


WrongCat::WrongCat()
{
    std::cout << "WrongCat : default constructor called" << std::endl;
    this->type = "WrongCat";
    
}

WrongCat::WrongCat(const WrongCat& obj)
{
    std::cout << "WrongCat : copy constructor called" << std::endl;
    *this = obj;
    
}

WrongCat& WrongCat::operator=(const WrongCat& obj)
{
    std::cout << "WrongCat : copy assignment operator called" << std::endl;
    if(this != &obj)
        this->type = obj.type;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat : destructor called" << std::endl;
    
}

void WrongCat::makeSound() const
{
    std::cout << "meow meow" << std::endl;
}

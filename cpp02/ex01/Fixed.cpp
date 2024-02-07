/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:38:35 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/07 11:44:10 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Fixed::N_fractional_bits = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixedPoint = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl; 
}

int Fixed::getRawBits( void ) const
{
    std::cout<< "getRawBits member function called" << std::endl;
    return (this->fixedPoint);
}

void Fixed::setRawBits( int const raw )
{
    std::cout<< "setRawBits member function called" << std::endl;
    this->fixedPoint = raw;
}

Fixed::Fixed(const Fixed& obj)
{
    std::cout<< "Default constructor called" << std::endl;
    this->fixedPoint = obj.fixedPoint;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
    std::cout<< "Copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        this->fixedPoint = obj.fixedPoint;   
    }
    return *this;
}
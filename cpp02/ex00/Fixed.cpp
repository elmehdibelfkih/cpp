/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 03:26:36 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/01/28 11:03:59 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Fixed::N_fractional_bits = 8;

Fixed::Fixed()
{
    this->fixedPoint = 0;
}

Fixed::~Fixed()
{
    
}

int Fixed::getRawBits( void ) const
{
    return (this->fixedPoint);
}

void Fixed::setRawBits( int const raw )
{
    this->fixedPoint = raw;
}

Fixed::Fixed(const Fixed& obj)
{
    this->fixedPoint = obj.fixedPoint;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
    if (this != &obj)
    {
        this->fixedPoint = obj.fixedPoint;   
    }
    return *this;
}
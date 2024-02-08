/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:38:35 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/08 20:41:42 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Fixed::N_fractional_bits = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixedPoint = 0;
}
Fixed::Fixed(const int val)
{
    std::cout << "Default constructor called" << std::endl;
    this->fixedPoint = val << this->N_fractional_bits;
}
Fixed::Fixed(const float val)
{
    std::cout << "Default constructor called" << std::endl;
    this->fixedPoint = (int)((val * (1 << this->N_fractional_bits)));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl; 
}

float Fixed::toFloat( void ) const
{
    return (float)(this->fixedPoint) / (1 << 8);
}

int Fixed::toInt( void ) const
{
    return this->fixedPoint >> 8;
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
    std::cout<< "cpy constructor called" << std::endl;
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

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();
    return os;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:38:35 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/09 13:52:08 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Fixed::N_fractional_bits = 8;

Fixed::Fixed()
{
    this->fixedPoint = 0;
}

Fixed::Fixed(const int val)
{
    this->fixedPoint = val << this->N_fractional_bits;
}

Fixed::Fixed(const float val)
{
    this->fixedPoint = (int)((val * (1 << this->N_fractional_bits)));
}

Fixed::~Fixed()
{

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

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();
    return os;
}

bool Fixed::operator<(const Fixed& obj)
{
    if (this->fixedPoint < obj.fixedPoint)
        return true;
    return false;
}

bool Fixed::operator>(const Fixed& obj)
{
    if (this->fixedPoint > obj.fixedPoint)
        return true;
    return false;
}

bool Fixed::operator<=(const Fixed& obj)
{
    if (this->fixedPoint <= obj.fixedPoint)
        return true;
    return false;
}

bool Fixed::operator>=(const Fixed& obj)
{
    if (this->fixedPoint >= obj.fixedPoint)
        return true;
    return false;
}

bool Fixed::operator==(const Fixed& obj)
{
    if (this->fixedPoint == obj.fixedPoint)
        return true;
    return false;
}

bool Fixed::operator!=(const Fixed& obj)
{
    if (this->fixedPoint != obj.fixedPoint)
        return true;
    return false;
}

Fixed& Fixed::operator+(const Fixed& obj)
{
    Fixed *ret = new Fixed;

    (*ret).fixedPoint = this->fixedPoint + obj.fixedPoint;
    return *ret;
}

Fixed& Fixed::operator-(const Fixed& obj)
{
    Fixed *ret = new Fixed;

    (*ret).fixedPoint  = this->fixedPoint - obj.fixedPoint;
    return *ret;
}

Fixed& Fixed::operator*(const Fixed& obj)
{
    Fixed *ret = new Fixed;

    (*ret).fixedPoint  = this->fixedPoint * obj.fixedPoint;
    return *ret;
}

Fixed& Fixed::operator/(const Fixed& obj)
{
    Fixed *ret = new Fixed;

    (*ret).fixedPoint = this->fixedPoint / obj.fixedPoint;
    return *ret;
}

Fixed& Fixed::min(Fixed& obj1, Fixed &obj2)
{
    if (obj1.fixedPoint > obj2.fixedPoint)
        return obj2;
    return obj1;
}

Fixed& Fixed::max(Fixed& obj1, Fixed &obj2)
{
    if (obj1.fixedPoint < obj2.fixedPoint)
        return obj2;
    return obj1;
}

// Fixed& Fixed::min(const Fixed& obj1, const Fixed &obj2)
// {
//     if (obj1.fixedPoint > obj2.fixedPoint)
//         return obj2;
//     return obj1;  
// }

// Fixed& Fixed::max(const Fixed& obj1, const Fixed &obj2)
// {
//     if (obj1.fixedPoint < obj2.fixedPoint)
//         return obj2;
//     return obj1 
// }

Fixed& Fixed::operator++()
{
    ++(this->fixedPoint);
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;

    this->fixedPoint++;
    return tmp;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:38:35 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/10 12:50:12 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed()
{
    this->fixedPoint = 0;
}

Fixed::Fixed(const int val)
{
    this->fixedPoint = val << this->NFractionalBits;
}

Fixed::Fixed(const float val)
{
    this->fixedPoint = static_cast<int>((roundf(val * (1 << this->NFractionalBits))));
}

Fixed::~Fixed()
{

}

float Fixed::toFloat( void ) const
{
    return (float)(this->fixedPoint) / (1 << this->NFractionalBits);
}

int Fixed::toInt( void ) const
{
    return this->fixedPoint >> this->NFractionalBits;
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
    return (this->fixedPoint < obj.fixedPoint);
}

bool Fixed::operator>(const Fixed& obj)
{
    return (this->fixedPoint > obj.fixedPoint);
}

bool Fixed::operator<=(const Fixed& obj)
{
    return (this->fixedPoint <= obj.fixedPoint);
}

bool Fixed::operator>=(const Fixed& obj)
{
    return (this->fixedPoint >= obj.fixedPoint);
}

bool Fixed::operator==(const Fixed& obj)
{
    return (this->fixedPoint == obj.fixedPoint);
}

bool Fixed::operator!=(const Fixed& obj)
{
    return (this->fixedPoint != obj.fixedPoint);
}

Fixed Fixed::operator+(const Fixed& obj)
{
    return (Fixed(this->toFloat() + obj.toFloat()));
}

Fixed Fixed::operator-(const Fixed& obj)
{
    return (Fixed(this->toFloat() - obj.toFloat()));
}

Fixed Fixed::operator*(const Fixed& obj)
{
    return (Fixed(this->toFloat() * obj.toFloat()));
}

Fixed Fixed::operator/(const Fixed& obj)
{
    return (Fixed(this->toFloat() / obj.toFloat()));
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

Fixed& Fixed::min(const Fixed& obj1, const Fixed &obj2)
{
    if (obj1.fixedPoint > obj2.fixedPoint)
        return (Fixed&)(obj2);
    return (Fixed&)obj1;
}

Fixed& Fixed::max(const Fixed& obj1, const Fixed &obj2)
{
    if (obj1.fixedPoint < obj2.fixedPoint)
        return (Fixed& )obj2;
    return (Fixed&)obj1;
}

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

Fixed& Fixed::operator--()
{
    ++(this->fixedPoint);
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;

    this->fixedPoint--;
    return tmp;
}

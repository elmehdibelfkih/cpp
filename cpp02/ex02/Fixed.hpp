/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:38:46 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/09 16:03:08 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int fixedPoint;
    static const int N_fractional_bits = 8;

public:
    Fixed();
    Fixed(const int val);
    Fixed(const float val);
    float toFloat( void ) const;
    int toInt( void ) const;
    Fixed(const Fixed& obj);
    ~Fixed();
    Fixed& operator=(const Fixed& obj);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    bool operator<(const Fixed& obj);
    bool operator>(const Fixed& obj);
    bool operator<=(const Fixed& obj);
    bool operator>=(const Fixed& obj);
    bool operator==(const Fixed& obj);
    bool operator!=(const Fixed& obj);
    Fixed operator+(const Fixed& obj);
    Fixed operator-(const Fixed& obj);
    Fixed operator*(const Fixed& obj);
    Fixed operator/(const Fixed& obj);
    static Fixed& min(Fixed& obj1, Fixed &obj2);
    static Fixed& max(Fixed& obj1, Fixed &obj2);
    static Fixed& min(const Fixed& obj1, const Fixed &obj2);  // to do
    static Fixed& max(const Fixed& obj1, const Fixed &obj2); // to do
    Fixed operator++(int);
    Fixed& operator++();
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);
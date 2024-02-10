/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:38:46 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/10 12:41:51 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int fixedPoint;
    static const int NFractionalBits = 8;

public:
    Fixed();
    Fixed(const int val); // to do
    Fixed(const float val); // to do
    float toFloat( void ) const; // to do
    int toInt( void ) const; // to do
    Fixed(const Fixed& obj);
    ~Fixed();
    Fixed& operator=(const Fixed& obj);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);
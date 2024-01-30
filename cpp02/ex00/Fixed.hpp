/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 03:26:46 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/01/28 11:01:34 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
private:
    int fixedPoint;
    static const int N_fractional_bits = 8;

public:
    Fixed();
    Fixed(const Fixed& obj);
    ~Fixed();
    Fixed& operator=(const Fixed& obj);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

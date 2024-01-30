/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 03:23:58 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/01/28 11:06:12 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;
    Fixed b( a );
    Fixed c;
    
    c = b;
    
    std::cout << a.getRawBits() <<  std::endl;
    std::cout << b.getRawBits() <<  std::endl;
    std::cout << c.getRawBits() <<  std::endl;
    
    return 0;
}

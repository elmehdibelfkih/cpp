/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 09:49:10 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/01/12 13:45:06 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Harl
{
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );

public:

    void complain( std::string level );
    Harl();
    ~Harl();
    

};
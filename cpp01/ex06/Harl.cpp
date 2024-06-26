/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:43:47 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/01/12 13:44:45 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" <<std::endl;
}

void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" <<std::endl;
}

void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." <<std::endl;
}

void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." <<std::endl;
}

void Harl::complain( std::string level )
{
    void (Harl::*pointer[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string tmp[4] = {"debug", "info", "warning", "error"};
    for (int i = 0; i < 4; i++)
    {
        if (tmp[i] == level)
        {
            (this->*pointer[i])();
            return ;   
        }
    }
    std::cout << "level not found!" << std::endl;
}

Harl::Harl()
{
    
}

Harl::~Harl()
{
    
}

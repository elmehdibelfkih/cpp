/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:49:18 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/01/09 17:25:44 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *MyZombie;
    
    MyZombie = new Zombie[N];
    for (int i = 0; i < N; i++)
        MyZombie[i].get_name(name);
        
    return MyZombie;
}
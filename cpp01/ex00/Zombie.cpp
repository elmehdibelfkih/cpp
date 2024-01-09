/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Zombie.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 06:54:09 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/01/09 11:15:38 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout<< name << ": destroyed !!"<< std::endl;
}

void Zombie::announce( void )
{
    std::cout << this->name<< ": BraiiiiiiinnnzzzZ..."<<std::endl;
}
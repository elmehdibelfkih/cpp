/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:49:05 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/01/09 17:10:43 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    
}

Zombie::~Zombie()
{
    std::cout<< name << ": destroyed !!"<< std::endl;
}

void Zombie::get_name(std::string name)
{
    this->name = name;
}

void Zombie::announce( void )
{
    std::cout << this->name<< ": BraiiiiiiinnnzzzZ..."<<std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 13:12:14 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/11 00:37:35 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap clap("mehdi");
    ClapTrap clap2("ayman");

    clap.attack("ayman");
    clap2.takeDamage(4);

    clap2.beRepaired(10);
}
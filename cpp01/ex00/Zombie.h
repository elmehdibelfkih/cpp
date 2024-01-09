/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 08:41:49 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/01/09 08:46:30 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "Zombie.hpp"

#ifndef ZOMBIE_H
#define ZOMBIE_H

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:46:50 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/14 04:36:12 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>
#include "AMateria.hpp"

class AMateria;
class Ice : public AMateria
{
public:
    Ice();
    Ice(Ice& obj);
    Ice&   operator=(const Ice& obj);
    ~Ice();
    AMateria* clone() const ;
};

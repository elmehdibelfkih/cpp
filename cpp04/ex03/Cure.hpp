/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:47:31 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/14 08:05:48 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>
#include "AMateria.hpp"

class AMateria;
class Cure : public AMateria
{
public:
    Cure();
    Cure(Cure& obj);
    Cure&   operator=(const Cure& obj);
    ~Cure();
    
    AMateria* clone() const ;
};

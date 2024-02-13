/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 21:55:00 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/12 22:03:52 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
   std::cout << "Brain: default constructor called"<< std::endl;
}
Brain::Brain(Brain& obj)
{
   std::cout << "Brain: copy constructor constructor called"<< std::endl;
   *this = obj;
    
}
Brain& Brain::operator=(const Brain& obj)
{
   std::cout << "Brain: copy assignement operator called"<< std::endl;
   if(this != &obj)
   {
    for(int i = 0; i < 100; i++)
    {
        this->ideas[i] = obj.ideas[i];
    } 
   }
   return (*this);
     
}
Brain::~Brain()
{
   std::cout << "Brain: destructor called"<< std::endl;
    
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:41:48 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/01/06 06:46:35 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    PhoneBook::set_contact()
{
    if (this->count >= 7)
        this->count = 0;
    else    
        this->count++;
    this->contact[this->count].set_data(this->count);
}

void    PhoneBook::search()
{
    std::string tmp;
    int index;
    
    std::cout << "|^^^^^^^^^^|^^^^^^^^^^|^^^^^^^^^^|^^^^^^^^^^|"<< std::endl;
    std::cout << "|   index  |   first  |   last   |  number  |"<< std::endl;
    std::cout << "|          |   name   |   name   |          |"<< std::endl;
    std::cout << "|^^^^^^^^^^|^^^^^^^^^^|^^^^^^^^^^|^^^^^^^^^^|"<< std::endl;
    for(int i = 0; i < 8; i++)
        this->contact[i].get_all_data();
    std::cout << "|__________|__________|__________|__________|"<< std::endl;
    std::cout << std::endl << "enter the index : ";
    std::cin >> tmp;
    std::istringstream iss(tmp);
    while (tmp.size() != 1 && iss >> index)
    {
        std::cout << std::endl << "enter the index : ";
        std::cin >> tmp;
        std::istringstream iss(tmp);
    }
    // this->contact[index]->get_contact(index);
    this->contact[index].get_contact(index);
}

PhoneBook::PhoneBook()
{
    // for(int i = 1; i <= 8; i++)
    //     this->contact[i].set_index(i);
    this->count = 0;
}

PhoneBook::~PhoneBook()
{
    
}

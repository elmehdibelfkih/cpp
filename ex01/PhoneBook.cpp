/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:41:48 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/01/08 14:41:46 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int PhoneBook::count = 0;

PhoneBook::PhoneBook()
{

}

PhoneBook::~PhoneBook()
{
    
}

void    PhoneBook::set_contact()
{
    if (this->count >= 8)
        this->count = 0;
    this->contact[this->count].set_data(this->count);    
    this->count++;
}

void    PhoneBook::search()
{
    bool Valid = false;
    std::string tmp;
    int index = -1;

    std::cout << "|^^^^^^^^^^|^^^^^^^^^^|^^^^^^^^^^|^^^^^^^^^^|^^^^^^^^^^|^^^^^^^^^^|"<< std::endl;
    std::cout << "|   index  |   first  |   last   |   nick   |  number  |  darkest |"<< std::endl;
    std::cout << "|          |   name   |   name   |   name   |          |  secret  |"<< std::endl;
    std::cout << "|^^^^^^^^^^|^^^^^^^^^^|^^^^^^^^^^|^^^^^^^^^^|^^^^^^^^^^|^^^^^^^^^^|"<< std::endl;
    for(int i = 0; i < 8; i++)
        this->contact[i].get_all_data();
    std::cout << "|__________|__________|__________|__________|__________|__________|"<< std::endl;
    while (!Valid && !std::cin.eof())
    {
        std::cout << std::endl << "enter the index : ";
        std::getline(std::cin, tmp);
        if (tmp.size() != 1 || !isdigit(tmp[0]))
        {
            std::cout << "invalid index, try again" << std::endl;
            continue;
        }
        index = tmp[0] - '0';
        if (index > 7)
        {
            std::cout << "invalid index, try again" << std::endl;
            continue;
        }
        Valid = true;
    }
    if (index != -1)
        this->contact[index].get_contact(index);
}

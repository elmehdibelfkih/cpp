/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:41:48 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/01/07 11:46:20 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int PhoneBook::count = 0;

PhoneBook::PhoneBook()
{
    // this.//ma3raft mal din mo
    // this->contact
}

PhoneBook::~PhoneBook()
{
    
}

void    PhoneBook::set_contact()
{
    if (this->count >= 7)
        this->count = 0;
    this->contact[this->count].set_data(this->count);    
    this->count++;
}

void    PhoneBook::search()
{
    std::string tmp;
    int index;
    
    std::cout << "Hello search" << std::endl;

    
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
    this->contact[index].get_contact(index);
}

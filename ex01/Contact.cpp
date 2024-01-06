/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 05:07:59 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/01/06 06:40:51 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{
    
}

void    Contact::set_data(int index)
{
    this->index = index;
    std::string tmp;
    
    std::cout << "enter the first name : " <<std::endl;
    std::getline(std::cin, tmp);
    this->first_name = tmp;
    
    std::cout << "enter the last name : " <<std::endl;
    std::getline(std::cin, tmp);
    this->last_name = tmp;
    
    std::cout << "enter the nickname : " <<std::endl;
    std::getline(std::cin, tmp);
    this->nickname = tmp;
    
    std::cout << "enter the phonenumber : " <<std::endl;
    std::getline(std::cin, tmp);
    this->phone_number = 10;
    // this->phone_number = std::atoi(tmp);
}

void    Contact::get_all_data()
{
    std::cout<<"| "<< this->index << "       |";
    if (this->last_name.size() > 10)
        std::cout << last_name.substr(0, 9) << ".|";
    else
    {
        std::cout << this->last_name;
        for (int i = 10 - this->last_name.size(); i >= 0; i--)
            std::cout << ' ';
    }
    
    if (this->first_name.size() > 10)
        std::cout << first_name.substr(0, 9) << ".|";
    else
    {
        std::cout << this->first_name;
        for (int i = 10 - this->first_name.size(); i >= 0; i--)
            std::cout << ' ';
    }
    
    if (this->last_name.size() > 10)
        std::cout << last_name.substr(0, 9) << ".|";
    else
    {
        std::cout << this->last_name;
        for (int i = 10 - this->last_name.size(); i >= 0; i--)
            std::cout << ' ';
    }
    
    if (this->nickname.size() > 10)
        std::cout << nickname.substr(0, 9) << ".|";
    else
    {
        std::cout << this->nickname;
        for (int i = 10 - this->nickname.size(); i >= 0; i--)
            std::cout << ' ';
    }
    std::cout << std::endl;
}

void    Contact::get_contact(int index)
{
    if (index == this->index)
    {
        std::cout << "first name : " << this->first_name << std::endl;
        std::cout << "last name : " << this->last_name << std::endl;
        std::cout << "nickname : " << this->nickname << std::endl;
        std::cout << "first name : " << this->first_name << std::endl;
        std::cout << "phone number : " << this->phone_number << std::endl;
    }
    return ;
}
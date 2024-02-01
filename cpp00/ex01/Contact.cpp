/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 05:07:59 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/02/01 03:24:46 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    this->index = 0;
}

Contact::~Contact()
{
    
}

std::string    Contact::pars_string(std::string data)
{
    std::string tmp;

    while (!std::cin.eof())
    {
        std::cout << data;
        std::getline(std::cin, tmp);
        if (!tmp.empty())
            return (tmp);
    }
    return (tmp);
}

std::string Contact::pars_phone(const std::string data)
{
    std::string tmp;
    bool Valid = false;

    while (!Valid  && !std::cin.eof())
    {
        std::cout << data;
        std::getline(std::cin, tmp);

        if (tmp.empty())
        {
            std::cout << "Please enter a non-empty phone number." << std::endl;
            continue;
        }

        Valid = true;
        for (size_t i = 0; i < tmp.size(); i++)
        {
            if (!isdigit(tmp[i]) && tmp[i] != ' ' && tmp[i] != '+' && tmp[i] != '-') {
                Valid = false;
                break;
            }
        }

        if (!Valid) {
            std::cout << "Invalid characters in the phone number. Please enter a valid phone number." << std::endl;
        }
    }
    return tmp;
}


void    Contact::set_data(int index)
{
    this->index = index;
    this->first_name = pars_string("enter the first name : ");
    this->last_name = pars_string("enter the last name : ");
    this->nickname = pars_string("enter the nickname : ");
    this->phone_number = pars_phone("enter the phone_number : ");
    this->darkest_secret = pars_string("enter his darkest secret : ");

}

void    Contact::get_all_data()
{
    if (this->first_name.empty())
        return ;
    std::cout << "|" << std::setw(10) << this->index << "|";

    if (this->first_name.size() > 10)
        std::cout << first_name.substr(0, 9) << ".|";
    else
        std::cout  << std::setw(10) << this->first_name << '|';

    if (this->last_name.size() > 10)
        std::cout << last_name.substr(0, 9) << ".|";
    else
        std::cout << std::setw(10) << this->last_name << '|';

    if (this->nickname.size() > 10)
        std::cout << nickname.substr(0, 9) << ".|";
    else
        std::cout << std::setw(10)<< this->nickname << '|';

    if (this->phone_number.size() > 10)
        std::cout << phone_number.substr(0, 9) << ".|";
    else
        std::cout << std::setw(10) << this->phone_number  << '|';

    if (this->darkest_secret.size() > 10)
        std::cout << darkest_secret.substr(0, 9) << ".|";
    else
        std::cout << std::setw(10) << this->darkest_secret  << '|';
    std::cout << std::endl;
}

void    Contact::get_contact(int index)
{
    if (index == this->index)
    {
        std::cout << std::endl << "### first name : " << this->first_name << std::endl;
        std::cout << "### last name : " << this->last_name << std::endl;
        std::cout << "### nickname : " << this->nickname << std::endl;
        std::cout << "### phone number : " << this->phone_number << std::endl;
        std::cout << "### darkest secret : " << this->darkest_secret << std::endl << std::endl;
    }
    return ;
}
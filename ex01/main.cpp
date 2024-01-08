/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 04:11:01 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/01/08 14:16:25 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
    PhoneBook   phone_book;
    std::string cmd;


    while (cmd != "EXIT" && !std::cin.eof())
    {
        std::cout << "Enter a command > ";
        std::getline(std::cin, cmd);
        if (cmd == "ADD")
            phone_book.set_contact();
        else if ("SEARCH" == cmd)
            phone_book.search();
        else if (!std::cin.eof())
            std::cout << "please enter ADD, SEARCH or EXIT !!" << std::endl;
    }
    return (0);
}

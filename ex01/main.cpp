/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 04:11:01 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/01/06 06:44:58 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook   phone_book;
    std::string tmp;
    std::string cmd;

    while (true)
    {
        
        std::cin >> cmd;
        if (cmd.compare("ADD"))
            phone_book.set_contact();
        else if (cmd.compare("EXIT"))
            exit(EXIT_SUCCESS);
        else if (cmd.compare("SEARCH"))
            phone_book.search();
        else
            std::cout << "please enter ADD, SEARCH or EXIT !!" << std::endl;
    }
    return (0);
}

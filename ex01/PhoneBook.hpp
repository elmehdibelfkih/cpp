/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 05:08:11 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/01/06 06:47:01 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
#include <sstream>

class PhoneBook
{
private:
    Contact contact[8];
    static int count;
public:
    PhoneBook();
    ~PhoneBook();
    void    set_contact();
    void    search();
    // void    search(std::string first_name);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 05:08:11 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/01/08 10:20:54 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>

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
};

#endif
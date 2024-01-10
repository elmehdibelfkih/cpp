/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 05:08:11 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/01/10 09:12:35 by ebelfkih         ###   ########.fr       */
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
public:
    PhoneBook();
    ~PhoneBook();
    void    set_contact();
    void    search();
private:
    Contact contact[8];
    static int count;
};

#endif
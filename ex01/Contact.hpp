/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 05:07:54 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/01/07 11:28:35 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

class Contact
{
private:
    int index;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    int phone_number;
public:
    Contact();
    ~Contact();
    void    set_data(int index);
    void    get_all_data();
    void    get_contact(int index);
};

#endif
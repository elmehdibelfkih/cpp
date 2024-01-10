/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 05:07:54 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/01/10 09:12:25 by ebelfkih         ###   ########.fr       */
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
public:
    Contact();
    ~Contact();
    void            set_data(int index);
    void            get_all_data();
    void            get_contact(int index);
    std::string     pars_string(std::string data);
    std::string     pars_phone(std::string data);
private:
    int index;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
};

#endif
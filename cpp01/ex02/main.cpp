/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:32:40 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/01/09 17:42:37 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (void)
{
    std::string test = "HI THIS IS BRAIN";
    std::string *stringPTR = &test;
    std::string &stringREF = test;

    std::cout << "The memory address of the string variable : "<< &test << std::endl;
    std::cout << "The memory address held by stringPTR : "<< stringPTR << std::endl;
    std::cout << "The memory address of the string variable : "<< &stringREF << std::endl;

    std::cout << "The value of the string variable : "<< test << std::endl;
    std::cout << "The value pointed to by stringPTR : "<< *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF : "<< stringREF << std::endl;

}
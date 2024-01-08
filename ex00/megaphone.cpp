/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:22:50 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/01/08 13:04:06 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    if (ac <= 1)
        return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl, 0);
    for (int i = 1; av[i]; i++)
    {
        std::string tmp = av[i];
        for (size_t j = 0; j < tmp.size(); j++)
            std::cout<<(char)std::toupper(tmp[j]);
    }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:05:40 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/01/10 19:56:51 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"



int main(int ac, char **av)
{
    if (ac != 3)
        return (std::cerr << "enter the file name, S1 and S2 !!"<< std::endl, 1);

    std::string FileName(av[0]);
    std::string S1(av[1]);
    std::string S2(av[2]);

    if (FileName.length() > FILENAME_MAX)
        return (std::cerr << "invalid file name !!" << std::endl, 1);
    
    std::string data = get_data(FileName);
    while (true)
    {
        size_t pos = data.find(S1);
        if (pos != std::string::npos)
        {
            data.erase(pos, S2.length());
            data.insert(pos, S2);
        }
        else
            break;
    }
    std::cout << data << std::endl;
    data.clear();
    
}
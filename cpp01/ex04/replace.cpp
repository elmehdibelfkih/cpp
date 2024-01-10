/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:08:35 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/01/10 20:08:11 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string get_data(const std::string file_name)
{
    std::fstream MainFile;
    MainFile.open((file_name.c_str()));
    if (!MainFile.is_open())
        return(std::cerr << "unable to open the file !!" << std::endl, "");
    MainFile.seekg(0, std::ios::end);
    std::streampos fileSize = MainFile.tellg();
    MainFile.seekg(0, std::ios::beg);
    char *buff = new char[fileSize + 1];
    MainFile.read(buff, fileSize);
    MainFile.close();
    buff[fileSize] = 0;
    std::string(buff);
    return (buff);
}

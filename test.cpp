/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:28:08 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/01/12 09:45:29 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include <iostream>

class MyClass 
{
public:

    MyClass(std::string mehdi);
    void PrintName();

private:

    std::string name;
};


MyClass::MyClass(std::string name)
{
    this->name = name;
}

void MyClass::PrintName()
{
    std::cout<<this->name<<std::endl;
}

int main() {

    // MyClass kaka("mehdi");
    MyClass kaka();

    kaka.PrintName();

}

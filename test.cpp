/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:28:08 by ebelfkih          #+#    #+#             */
/*   Updated: 2024/01/10 18:28:36 by ebelfkih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include <iostream>

class MyClass {
public:
    // Static member variable
    static int staticVariable;

    // Constructor
    MyClass(int val) : nonStaticVariable(val) {}

    // Member function to access static and non-static variables
    void printVariables() {
        std::cout << "Static Variable: " << staticVariable << std::endl;
        std::cout << "Non-Static Variable: " << nonStaticVariable << std::endl;
    }

private:
    int nonStaticVariable;
};

// Definition of the static member variable
int MyClass::staticVariable = 0;

int main() {
    // Accessing static member variable without an instance
    std::cout << "Initial Static Variable: " << MyClass::staticVariable << std::endl;

    // Creating instances of the class
    MyClass obj1(42);
    MyClass obj2(99);

    // Modifying the static variable using an instance
    obj1.staticVariable = 10;

    // Accessing static and non-static variables through instances
    obj1.printVariables();
    obj2.printVariables();

    return 0;
}

#include <iostream>

class Human
{
    private:
        std::string name;
        int age;
    public:
        static int n;
        Human();
        Human(std::string n, int a);
        ~Human();
        void eat()
        {
            std::cout << "eating" << std::endl;
        }
};

int Human::n = 0;

class Hoe : public Human
{
    private:
        int n3ssa;
    public:
        Hoe()
        {
            std::cout << "Hoe Constructor called" << std::endl;//
            this->n3ssa = 1000;
        };
        ~Hoe()
        {
            std::cout << "Hoe Destructor called" << std::endl;//
        };
};

Human::Human() : name("Uknown"), age(0)
{
    std::cout << "Default constructor called" << std::endl;
    n++;
}

Human::Human(std::string name, int age)
{
    std::cout << "Param constructor called" << std::endl;
    this->name = name;
    this->age = age;
}

Human::~Human()
{
    std::cout << "Destructor called" << std::endl;
    // delete a;
}

namespace mehdi
{
    void fun()
    {
        std::cout << "From mehdi namespcae" << std::endl;
    }
} // namespace mehdi

namespace ziad
{
    void fun()
    {
        std::cout << "From ziad namespcae" << std::endl;
    }
} // namespace mehdi



int main(int argc, char const *argv[])
{
    // {
    //     Hoe h;
    //     // h.eat();
    // }

    // // {
    // //     Human h;
    // //     h.eat();
    // // }

    Human h1;
    std::cout << h1.n << std::endl;
    Human h2;
    std::cout << h2.n << std::endl;
    Human h3;
    std::cout << h3.n << std::endl;
    Human h4;
    std::cout << h4.n << std::endl;





    return 0;
}

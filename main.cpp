#include <iostream>

// const parameter - makes read-only code; more secure and conveys intent
// useful for references and pointers

void printInfo(const std::string &name, const int &age);

int main()
{
    std::string name = "Bro";
    int age = 21;

    printInfo(name, age);
}

void printInfo(const std::string &name, const int &age)
{

    std::cout << name << '\n';
    std::cout << age << '\n';
}

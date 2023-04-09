#include <iostream>

int main()
{
    // Memory address : a location in memory where data is stored
    //"&" : address of operator

    std::string name = "Bro";
    int age = 21;
    bool isStudent = true;

    std::cout << &name << '\n'; // result comes out as hexadeximal and changes everytime
    std::cout << &age << '\n';
    std::cout << &isStudent << '\n';

    // integers take up 4 bytes of memory
    // booleans take up 1 byte of memory
}
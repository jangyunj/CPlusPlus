#include <iostream>

int main()
{
    // POINTERS
    //& address-of operator
    //* dereference operator

    std::string name = "Bro";
    std::string *pName = &name;

    std::cout << *pName << ' '; // to access the VALUE at this memory location, use *

    int age = 11;
    int *pAge = &age;
    std::cout << *pAge << ' ';
}
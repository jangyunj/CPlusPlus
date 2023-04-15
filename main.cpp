#include <iostream>

int main()
{
    std::string food = "pizza";
    // std::cout << food;  //outputs the "value" of food variable
    // std::cout << &food; //outputs the MEMORY ADDRESS of food variable

    std::string *pFood = &food;
    std::cout << *pFood; // use the dereference operator to access the VALUE at this address
}
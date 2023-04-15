#include <iostream>

int main()
{
    // Pointers: a variable that stores a memory address of another variable

    //     std::string food = "pizza";
    //     // std::cout << food;  //outputs the "value" of food variable
    //     // std::cout << &food; //outputs the MEMORY ADDRESS of food variable

    //     std::string *pFood = &food;
    //     std::cout << *pFood; // use the dereference operator to access the VALUE at this address

    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};
    std::string *pFreePizzas = freePizzas; // Array already gives the ADDRESS

    std::cout << *pFreePizzas; // outputs FIRST element in the array
}
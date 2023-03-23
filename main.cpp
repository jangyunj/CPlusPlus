#include <iostream>

int main()
{
    // Arrays should be the same datatypes
    std::string cars[] = {"Corvette", "Mustang", "Camry"};
    // or you can declare first by its size
    // std::cout << cars[3];

    cars[0] = "Ford";

    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';
}

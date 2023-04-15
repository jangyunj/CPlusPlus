#include <iostream>

int main()
{
    // Nullptr = keyword that represents a null pointer literal
    // Nullptr : helpful when determining if an address was successfully assigned to a pointer

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if (pointer == nullptr)
    {
        std::cout << "address was not assigned\n";
    }
    else
    {
        std::cout << "address was assigned\n";
        std::cout << *pointer;
    }
}
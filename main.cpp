#include <iostream>

void walk(int steps);

int main()
{
    walk(100);
}

// void walk(int steps)
// {
//     for (int i = 0; i < steps; i++)    //Iterative approach
//     {
//         std::cout << "You take a step";
//     }
// }

void walk(int steps)
{
    if (steps > 0)
    {
        std::cout << "You take a step\n";
        walk(steps - 1); // Recursive - invoke the function WITHIN itself
                         //           - uses more memory and takes longer to process
    }
}
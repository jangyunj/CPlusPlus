#include <iostream>

int factorial(int num);

int main()
{
    std::cout << factorial(10);
}

int factorial(int num)
{
    // int result = 1;                 //Iterative approach
    // for (int i = 1; i <= num; i++)
    // {
    //     result *= i;
    // }
    // return result;

    if (num > 1)
    {
        return num * factorial(num - 1); // Recursion approach - function inside of a function
                                         //                    - invokes itself
    }
    else
    {
        return 1;
    }
}

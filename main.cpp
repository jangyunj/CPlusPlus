#include <iostream>

double getTotal(double prices[], int size);

int main()
{
    double prices[] = {49.99, 15.05, 75, 9.99};
    int size = sizeof(prices) / sizeof(prices[0]); // explicitly calculate the size of the array
    double total = getTotal(prices, size);

    std::cout << "$" << total;
}

double getTotal(double prices[], int size) // when iterating over an array, you need second var that informs the size of an array
{
    double total = 0; // local variable - it can be same name as long as it's in a different function

    for (int i = 0; i < size; i++)
    {
        total += prices[i];
    }
    return total;
}
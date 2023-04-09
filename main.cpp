#include <iostream>

void swap(int &a, int &b);

int main()
{
    int a = 90;
    int b = 21;
    int temp;

    swap(a, b);

    std::cout << a << '\n';
    std::cout << b << '\n';
}

// when you invoke this function, you are creating copies of the original values
// so you need to switch the original values - so pass by REFERENCE (memory address)
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
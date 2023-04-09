#include <iostream>

int main()
{
    std::string x = "Kool-aid";
    std::string y = "Water";
    std::string temp;

    temp = x;
    x = y;
    y = temp;

    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';

    int a = 90;
    int b = 91;
    int t;

    t = a;
    a = b;
    b = t;

    std::cout << a << '\n';
    std::cout << b << '\n';
}
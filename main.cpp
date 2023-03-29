#include <iostream>

int main()
{ //---FILL 50 WITH PIZZA & 50 WITH BURGER---
    const int size = 100;
    std::string foods[size];

    fill(foods, foods + (size / 2), "pizza");
    fill(foods + (size / 2), foods + size, "hamburger");

    for (std::string food : foods)
    {
        std::cout << food << '\n';
    }

    //---FILL ALL 100 WITH PIZZA---
    // std::string foods[100];

    // fill(foods, foods + 100, "pizza");

    // for (std::string food : foods)
    // {
    //     std::cout << food << '\n';
    // }
}
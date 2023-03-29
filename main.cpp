#include <iostream>

int main()
{
    //---FILL 1/3 WITH PIZZA, BURGER, HOTDOG-------------------
    const int size = 99;
    std::string foods[size];

    fill(foods, foods + (size / 3), "pizza");
    fill(foods + (size / 3), foods + (size / 3) * 2, "burger");
    fill(foods + (size / 3) * 2, foods + size, "hotdog");

    for (std::string food : foods)
    {
        std::cout << food << '\n';
    }
}

// { //---FILL 50 WITH PIZZA & 50 WITH BURGER---
//     const int size = 100;
//     std::string foods[size];

//     fill(foods, foods + (size / 2), "pizza");
//     fill(foods + (size / 2), foods + size, "hamburger");

//     for (std::string food : foods)
//     {
//         std::cout << food << '\n';
//     }

//---FILL ALL 100 WITH PIZZA---
// std::string foods[100];

// fill(foods, foods + 100, "pizza");

// for (std::string food : foods)
// {
//     std::cout << food << '\n';
// }

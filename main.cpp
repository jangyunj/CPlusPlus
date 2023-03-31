#include <iostream>

int main()
{
    //-----------------FILL 1/4 WITH 1, 2, 3, 4 WITH INTEGERS--------------------
    const int size = 100;
    int numbers[size];

    std::fill(numbers, numbers + 25, 1);
    std::fill(numbers + 25, numbers + 50, 2);
    std::fill(numbers + 50, numbers + 75, 3);
    std::fill(numbers + 75, numbers + 100, 4);

    for (int number : numbers)
    {
        std::cout << number << '\n';
    }
}

// {
//     //---FILL 1/3 WITH PIZZA, BURGER, HOTDOG-------------------
//     const int size = 99;
//     std::string foods[size];

//     fill(foods, foods + (size / 3), "pizza");
//     fill(foods + (size / 3), foods + (size / 3) * 2, "burger");
//     fill(foods + (size / 3) * 2, foods + size, "hotdog");

//     for (std::string food : foods)
//     {
//         std::cout << food << '\n';
//     }
// }

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

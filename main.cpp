#include <iostream>

int main()
{
    // Foreach loop - Goes through the entire loop until the end
    std::string students[] = {"Spongebob", "Patrick", "Sandy", "Squidward"};
    for (std::string student : students)
    {
        std::cout << student << '\n';
    }

    int numbers[] = {1, 2, 3, 4, 5};
    for (int number : numbers)
    {
        std::cout << number << '\n';
    }

    int grades[] = {90, 85, 100, 75, 100};
    for (int grade : grades)
    {
        std::cout << grade << '\n';
    }
}
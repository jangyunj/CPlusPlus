#include <iostream>
int searchArray(int numbers[], int size, int myNum);

int main()
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers) / sizeof(int);
    int index;
    int myNum;

    std::cout << "Enter element to search: " << '\n';
    std::cin >> myNum;

    index = searchArray(numbers, size, myNum);
    if (index != -1)
    {
        std::cout << myNum << " is at index " << index;
    }
    else
    {
        std::cout << myNum << " is not in the array";
    }
}

int searchArray(int numbers[], int size, int myNum)
{
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] == myNum)
        {
            return i;
        }
    }
    return -1;
}

/*dynamic memory - memory that is allocated after the program is already compiled and running
                 - use 'new' operator to allocate memory in the HEAP
                 - useful when we don't know how much memory we'll need; more flexible */

#include <iostream>

int main()
{
    int *pNum = NULL;
    pNum = new int;
    *pNum = 21;
    std::cout << "address: " << pNum << '\n';
    std::cout << "value: " << *pNum << '\n';

    delete pNum; // freeing up the memory at this location; otherwise, it may cause memory leak
                 //  when using 'new' operator, try to use 'delete' operator too
}
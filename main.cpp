#include <iostream>

int main()
{
    double gpa = 2.5;
    char grade = 'C';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::string students[] = {"Spongebob", " Patrick", "Sandy"};

    std::cout << sizeof(gpa) << " bytes\n"; // Size of double (datatype) allocated to my gpa variable
    std::cout << sizeof(grade) << " bytes\n";
    std::cout << sizeof(student);
    std::cout << sizeof(grades);
    std::cout << sizeof(students) / sizeof(std::string) << " elements";
}
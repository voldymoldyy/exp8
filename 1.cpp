#include <iostream>

int main()
{
    struct
    {
        int rollno;
        std::string name;
        char k[100];
        std::string branch;
        int percentage;
    } student;

    std::cout << "enter roll no: ";
    std::cin >> student.rollno;
    std::cout << "enter your name: ";
    std::cin >> student.name;
    std::cout << "enter address: ";
    std::cin >> student.k;
    std::cout << "enter your branch: ";
    std::cin >> student.branch;
    std::cout << "enter percentage: ";
    std::cin >> student.percentage;

    std::cout << student.rollno;
    std::cout << "\n";
    std::cout << student.name;
    std::cout << "\n";
    std::cout << student.k;
    std::cout << "\n";
    std::cout << student.branch;
    std::cout << "\n";
    std::cout << student.percentage;
}
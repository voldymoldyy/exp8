#include <iostream>

int main()
{
    struct
    {
        std::string name;
        std::string country;
        int matches;
        float avg;
    } s1[10];

    for (int i = 1; i <= 10; i++)
    {
        std::cout << "enter name: ";
        std::cin >> s1[i].name;
        std::cout << "enter country: ";
        std::cin >> s1[i].country;
        std::cout << "enter matches: ";
        std::cin >> s1[i].matches;
        std::cout << "enter avg: ";
        std::cin >> s1[i].avg;
    }
    for (int i = 1; i <= 10; i++)
    {
        if (s1[i].avg > 50.00)
        {
            std::cout << s1[i].name;
            std::cout << s1[i].country;
            std::cout << s1[i].matches;
            std::cout << s1[i].avg;
        }
    }
}
#include <iostream>

int main()
{
    struct
    {
        std::string cpu;
        float size;
    } c[50];

    for (int i = 0; i < 5; i++)
    {
        std::cout << "enter cpu: ";
        std::cin >> c[i].cpu;
        std::cout << "enter size: ";
        std::cin >> c[i].size;
    }
    for (int i = 0; i < 5; i++)
    {
        if (c[i].size > 8)
        {
            std::cout << c[i].cpu;
            std::cout << c[i].size;
        }
    }
}
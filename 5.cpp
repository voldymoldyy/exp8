#include <iostream>
#include <cstring>
int main()
{
    char s[15];
    std::cout << "enter characters: ";
    std::cin >> s;

    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        std::cout << s[i];
    }
}
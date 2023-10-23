#include <iostream>
#include <cstring>

int main()
{
    char c[15];
    std::cout << "enter character: ";
    std::cin >> c;

    char cpy[15];
    char *ptr = c;
    char *ptr1 = cpy;

    for (int i = 0; i < strlen(c); i++)
    {
        *(cpy + i) = *(ptr + i);
        std::cout << *(cpy + i);
    }
}
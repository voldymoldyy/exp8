#include <iostream>
#include <cstring>

int main()
{
    char a[10];
    std::cout << "enter char: ";
    std::cin >> a;

    int count = 0;
    char *ptr = a;

    for (int i = 0; i < strlen(a); i++)
    {
        if (*(ptr + i) == 'a' || *(ptr + i) == 'e' || *(ptr + i) == 'i' || *(ptr + i) == 'o' || *(ptr + i) == 'u')
        {
            count++;
        }
    }
    std::cout << count;
}
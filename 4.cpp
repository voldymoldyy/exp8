#include <iostream>

int main()
{
    int n;
    std::cout << "enter n: ";
    std::cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    int *ptr = &arr[0];

    for (int i = 0; i < n; i++)
    {
        std::cout << *(arr + i);
    }
}
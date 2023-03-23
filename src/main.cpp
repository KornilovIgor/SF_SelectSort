#include "SelectSort.h"

#include <iostream>

int main()
{
    int n = 6;

    int* arr = new int[n] {80, 2000, 1, 451, 211, 71};

    for (size_t i = 0; i < n; ++i)
        std::cout << arr[i] << ' ';
    std::cout << std::endl;

    selectSort(arr, n);

    for (size_t i = 0; i < n; ++i)
        std::cout << arr[i] << ' ';
    std::cout << std::endl;

    return 0;
}
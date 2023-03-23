#include "SelectSort.h"

void swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

void selectSort(int* arr, int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        int min = i;

        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        if (min != i)
        {
            swap (&arr[i], &arr[min]);
        }
    }
}
#include <stdio.h>

void print_rev(int *arr, int n)
{
    int i = 0;
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
}

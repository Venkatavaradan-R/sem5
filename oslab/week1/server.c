#include <stdio.h>

int main()
{
    int n = 0, i;
    printf("Enter the amount of chars you wanna enter");
    scanf("%d", &n);
    printf("Enter the stuff");
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    print_rev(arr, n);
}
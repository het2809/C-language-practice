#include <stdio.h>

int main()
{
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        printf("element - %d", i);
        scanf("%d", &arr[i]);
    }
    printf("Elements in array are:");
    for (int i = 0; i < 10; i++)
    {
        printf("%d", arr[i]);
    }
}
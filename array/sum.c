#include <stdio.h>

int main()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        printf("elements-%d:", i);
        scanf("%d", &arr[i]);
    }
    printf("sum of all is %d", arr[0] + arr[1] + arr[2]);
}
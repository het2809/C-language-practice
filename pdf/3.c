#include <stdio.h>

int main()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("sum of all is %d\n", arr[0] + arr[1] + arr[2]);
    printf("avg of all is %d\n", (arr[0] + arr[1] + arr[2])/3);
}
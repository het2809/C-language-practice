#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3};
    int i, n;

    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);

    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    if (arr[0] > arr[1] && arr[2])
    {
        printf("maximum number is %d", arr[0]);
    }
    else if (arr[0] && arr[1] > arr[2])
    {
        printf("minimum number is %d", arr[2]);
    }
    else if (arr[0] && arr[2] < arr[1])
    {
        printf("maximum number is %d", arr[1]);
    }
    else
    {
        printf("minimum number is %d", arr[1]);
    }
}
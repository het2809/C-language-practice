#include <stdio.h>

void main()
{
    int arr1[100], arr2[100];
    int i, n;

    printf("\n\nCopy the elements one array into another array :\n");
    printf("----------------------------------------------------\n");

    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);

    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }
    printf("\nThe elements stored in the first array are :");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", arr1[i]);
    }
    printf("\nThe elements copied into the second array are :");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", arr1[i]);
    }
}
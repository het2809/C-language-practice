#include <stdio.h>

int main()
{
    int arr[5];
    int i, n, temp;
    printf("Input the number of elements to be stored in the array :\n");
    scanf("%d", &n);
    printf("Input %d elements in the array :\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nascending order");
    for (int i = 0; i < n; i++)
    {
        printf("\n%d\t", arr[i]);
    }
}

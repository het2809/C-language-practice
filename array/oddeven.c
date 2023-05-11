#include <stdio.h>
int main()
{
    int arr[20];
    int i, n;

    printf("Input the number of elements to be stored in the array :\n");
    scanf("%d", &n);

    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
        {
            printf("number is even %d\n", arr[i]);
        }
        else if (arr[i] % 2 != 0)
        {
            printf("number is odd %d\n", arr[i]);
        }
    }
}
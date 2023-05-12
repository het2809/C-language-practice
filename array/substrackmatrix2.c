#include <stdio.h>
int main()
{
    int n, j, i;
    int arr[50][50];
    int brr[50][50];
    int crr[50][50];
    printf("Input the size of the square matrix (less than 5):");
    scanf("%d", &n);
    printf("Input elements in the first matrix :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("element - [0],[0] :", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Input elements in the second matrix :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("element - [0],[0] :", i, j);
            scanf("%d", &brr[i][j]);
        }
    }
    printf("The First matrix is :");
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
        }
    }
    printf("\nThe Second matrix is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", brr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)

        for (int j = 0; j < n; j++)

            crr[i][j] = arr[i][j] - brr[i][j];
    printf("\nThe Subtraction of two matrix is : \n");
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < n; j++)

            printf("%d\t", crr[i][j]);
    }

    printf("\n\n");
}
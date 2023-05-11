#include <stdio.h>
void reverse(int arr[], int n);
void printarr(int arr[], int n);
void main()
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
    reverse(arr, i);
    printarr(arr, i);
}
void reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int FirstValue = arr[i];
        int SecondValue = arr[n - i - 1];
        arr[i] = SecondValue;
        arr[n - i - 1] = FirstValue;
    }
}
void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}
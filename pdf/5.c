#include <stdio.h>

void findSecondLargestAndSmallest(int arr[], int size)
{
    int largest = arr[0];
    int secondLargest = arr[0];
    int smallest = arr[0];
    int secondSmallest = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }

        if (arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondSmallest && arr[i] != smallest)
        {
            secondSmallest = arr[i];
        }
    }

    printf("Second largest element: %d\n", secondLargest);
    printf("Second smallest element: %d\n", secondSmallest);
}

int main()
{
    int arr[] = {5, 10, 2, 8, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    findSecondLargestAndSmallest(arr, size);

    return 0;
}
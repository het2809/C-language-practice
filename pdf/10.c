#include<stdio.h>
int reverse(int arr[],int n);
int printarr(int arr[],int n);
int main()
{
    int arr[]={1,2,3,4,5};
    reverse(arr,5);
    printarr(arr,5);
}
int reverse(int arr[],int n)
{
    for (int i = 0; i < n/2; i++)
    {
        int Firstvalue=arr[i];
        int Secondvalue=arr[n-i-1];
        arr[i]=Secondvalue;
        arr[n-i-1]=Firstvalue;
    }
    
}
int printarr(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    
}
#include<stdio.h>

int main()
{   
    int arr[100];
    int size,pos,item;
    printf("enter size of array");
    scanf("%d",&size);
    printf("enter your elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter your position you want to insert");
    scanf("%d",&pos);
    printf("enter item that you want to insert");
    scanf("%d",&item);
    for (int i = size; i >=pos ; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=item;
    size++;
    printf("Your Array Elements is\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    
}
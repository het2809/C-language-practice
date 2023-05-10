#include<stdio.h>

int main()
{
    int i;
    int n;
    printf("enter number");
    scanf("%d",&i);
    printf("enter number");
    scanf("%d",&n);
    if (i<n)
    {
        printf("%d is the maximum number.",n);
    }
    else 
    {
        printf("%d is the maximum number",i);
    }
    
}
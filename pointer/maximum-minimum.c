#include <stdio.h>

int main()
{
    int i;
    int n;
    printf("enter number");
    scanf("%f", &i);
    printf("enter number");
    scanf("%f", &n);
    if (i < n)
    {
        printf("%f is the maximum number.", n);
    }
    else
    {
        printf("%f is the maximum number", i);
    }
}
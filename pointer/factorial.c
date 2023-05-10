#include <stdio.h>
int factorial(int a);
int main()
{
     int a;
    printf("enter number");
    scanf("%d", &a);

    printf("the factorial of %d is %d", a, factorial(a));
}
int factorial(int a)
{
    if (a==0||a==1)
    {
        return 1;
    }
    else
    {
        return a*factorial(a-1);
        
    }
    
    
}
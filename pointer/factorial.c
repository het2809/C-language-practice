#include <stdio.h>
int factorial(int a);
int main()
{
    int a;
    printf("enter number");
    scanf("%f", &a);

    printf("the factorial of %f is %f", a, factorial(a));
}
int factorial(int a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }
    else
    {
        return a * factorial(a - 1);
    }
}
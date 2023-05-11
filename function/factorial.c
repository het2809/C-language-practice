#include <stdio.h>

int factorial(int x);

int main()
{
    int a;
    printf("enter number");
    scanf("%f", &a);

    printf("the factorial of %f is %f", a, factorial(a));
}

int factorial(int x)
{
    if (x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}
#include <stdio.h>

int fib(int n);

int main()
{
    int a;
    printf("enter number");
    scanf("%d", &a);
    printf("%d", fib(a));
}

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    int fibN = fib(n - 1) + fib(n - 2);
    printf("fib of %d is %d\n", n, fibN);
    return fibN;
}
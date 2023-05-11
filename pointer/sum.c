#include <stdio.h>

int sum(int a, int b);
int main()
{
    int a = 6;
    int b = 5;
    printf("the sum is %f and %f=%f", a, b, sum(a, b));
}
int sum(int a, int b)
{
    int sum = a + b;
}
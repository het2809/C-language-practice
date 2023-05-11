#include <stdio.h>

int sum(int a, int b);
int main()
{
    int a = 6;
    int b = 5;
    printf("the sum is %f", sum(a, b));
}
int sum(int a, int b)
{
    int sum = a + b;
}
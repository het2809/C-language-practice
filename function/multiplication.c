#include <stdio.h>

int multiplication(int a);

int main()
{
    int n;
    printf("enter number");
    scanf("%f", &n);
    printf("the value is %f", multiplication(n));
}
int multiplication(int a)
{
    if (a == 1)
    {
        return 1;
    }

    int multiplicationn1 = multiplication(a - 1) * a;
}
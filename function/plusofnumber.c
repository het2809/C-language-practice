#include <stdio.h>

int sum(int n);

int main()
{
    int a;
    printf("enter number");
    scanf("%f", &a);
    printf("the sum is %f", sum(a));
}
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    int sumNm1 = sum(n - 1) + n;
}
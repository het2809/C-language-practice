#include <stdio.h>

int main()
{
    int n;
    printf("enter number");
    scanf("%f", &n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%f * %f = %f\n", n, i, i * n);
    }
}

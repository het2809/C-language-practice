#include <stdio.h>

float average(int a, int b, int c);

int main()
{
    int a, b, c;
    printf("enter a");
    scanf("%d", &a);
    printf("enter b");
    scanf("%d", &b);
    printf("enter c");
    scanf("%d", &c);
    printf("the average is %f", average(a, b, c));
}

float average(int a, int b, int c)
{
    float result;
    result = (float)(a + b + c) / 3;
    return result;
}
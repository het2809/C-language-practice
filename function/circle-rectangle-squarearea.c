#include <stdio.h>

float SquareArea(float side);
float CirceAre(float rad);
float RectangleArea(float a, float b);

int main()
{
    float a;
    float b;
    float side;
    float rad;

    printf("enter your a for ractangle area");
    scanf("%f", &a);
    printf("enter your b for ractangle area");
    scanf("%f", &b);
    printf("The Value of rectangle area is %f\n", RectangleArea(a, b));

    printf("enter your side for square area");
    scanf("%f", &side);
    printf("The Value of square area is %f\n", SquareArea(side));

    printf("enter your rad for Circle area");
    scanf("%f", &rad);
    printf("enter your rad for Circle area");
    scanf("%f", &rad);
    printf("The Value Of Circle Area is %f", CirceAre(rad));
}

float SquareArea(float side)
{
    return side * side;
}

float CirceAre(float rad)
{
    return 3.14 * rad * rad;
}
float RectangleArea(float a, float b)
{
    return a * b;
}
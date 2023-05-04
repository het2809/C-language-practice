#include <stdio.h>

void CalculatePrice(float value);

int main()
{
    float a;
    printf("Enter Your Product Price:");
    scanf("%f", &a);
    CalculatePrice(a);
}

void CalculatePrice(float value)
{
    value = value + (0.18 * value);
    printf("The Final Price Of Product Is %f:\n", value);
}
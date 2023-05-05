#include <stdio.h>

float ConvertTemp(float celcius);

int main()
{
    float far;
    printf("enter fahrenhit");
    scanf("%f", &far);
    printf("celcius is %f", ConvertTemp(far));
}

float ConvertTemp(float celcius)
{
    float far = (1.8 * celcius) + 32;

    return far;
}
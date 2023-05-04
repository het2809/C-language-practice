#include <stdio.h>

float temprature();

int main()
{
    float c;
    float fh;
    printf("enter fahrenheit ");
    scanf("%f", &fh);
    printf("%f", (fh - 32) / 1.8);
}

float temprature()
{
    float fh;
    float result;
    result = (fh - 32) / 1.8;
    return result;
}
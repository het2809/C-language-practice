#include <stdio.h>

int main()
{
    int m = 300;
    float fx = 300.600006;
    char cht = 'z';

    printf("address of m %p\n", &m);
    printf("address of m %p\n", &fx);
    printf("address of m %p\n\n", &cht);

    printf("value of m %d\n", m);
    printf("value of fx %f\n", fx);
    printf("value of cht %c\n\n", cht);

    printf("address of m %p\n", &m);
    printf("address of m %p\n", &fx);
    printf("address of m %p\n\n", &cht);

    printf("value of m %d\n", m);
    printf("value of fx %f\n", fx);
    printf("value of cht %c\n", cht);
}
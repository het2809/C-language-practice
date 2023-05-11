#include <stdio.h>

int main()
{
    int m = 10;
    int n;
    int o;
    int *z = &m;

    printf("the address of z is %p\n", z);
    printf("the value of z is %f\n", m);
    printf("the address of &m is %p\n", &m);
    printf("the address of &n is %p\n", &n);
    printf("the address of &o is %p\n", &o);
    printf("the address of &z is %p\n", &z);
}
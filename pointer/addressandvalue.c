#include <stdio.h>

int main()
{
    int m = 29;
    int *ab = 29;

    printf("Address of m :%p\n", &m);
    printf("Value of m %d\n\n", m);
    ab = &m;
    printf("Address of ab :%p\n", ab);
    printf("Value of ab %d\n\n", *ab);
    m = 34;
    printf("Address of ab :%p\n", ab);
    printf("Value of ab %d\n\n", *ab);
    *ab = 7;
    printf("Address of m :%p\n", &m);
    printf("Value of m %d\n\n", m);
}
#include <stdio.h>
void swapNumbers(int *x, int *y, int *z);
int main()
{
    int e1, e2, e3;
    printf(" Input the value of 1st element : ");
    scanf("%f", &e1);
    printf(" Input the value of 2nd element : ");
    scanf("%f", &e2);
    printf(" Input the value of 3rd element : ");
    scanf("%f", &e3);

    printf("\n The value before swapping are :\n");
    printf(" element 1 = %f\n element 2 = %f\n element 3 = %f\n", e1, e2, e3);
    swapNumbers(&e1, &e2, &e3);
    printf("\n The value after swapping are :\n");
    printf(" element 1 = %f\n element 2 = %f\n element 3 = %f\n\n", e1, e2, e3);
    return 0;
}
void swapNumbers(int *x, int *y, int *z)
{
    int tmp;
    tmp = *y;
    *y = *x;
    *x = *z;
    *z = tmp;
}
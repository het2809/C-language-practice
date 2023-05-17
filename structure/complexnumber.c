#include<stdio.h>

struct complex
{
    int real;
    int img;
};

int main()
{
    struct complex number1={5,10};

    printf("THE REAL NUMBER IS : %d\n",number1.real);
    printf("THE IMG NUMBER IS : %d\n",number1.img);
}
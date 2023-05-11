#include <stdio.h>

int main()
{
    float product[3];

    printf("enter your product price");
    scanf("%f", &product[0]);
    printf("your product price is %f and gst is %f\n", product[0], product[0] + (0.18 * product[0]));
    printf("enter your product price");
    scanf("%f", &product[1]);
    printf("your product price is %f and gst is %f\n", product[1], product[1] + (0.18 * product[1]));
    printf("enter your product price");
    scanf("%f", &product[2]);
    printf("your product price is %f and gst is %f\n", product[2], product[2] + (0.18 * product[2]));
    printf(" your total is %f", product[0] + (0.18 * product[0]) + product[1] + (0.18 * product[1]) + product[2] + (0.18 * product[2]));
    printf("\n\n THANK YOU");
}
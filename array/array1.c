#include <stdio.h>

int main()
{
    float marks[7];

    printf("enter Account marks :");
    scanf("%f", &marks[0]);
    printf("enter stat marks :");
    scanf("%f", &marks[1]);
    printf("enter Eco marks :");
    scanf("%f", &marks[2]);
    printf("enter Ba marks :");
    scanf("%f", &marks[3]);
    printf("enter Gujarati marks :");
    scanf("%f", &marks[4]);
    printf("enter Computer marks :");
    scanf("%f", &marks[5]);
    printf("enter English marks :");
    scanf("%f", &marks[6]);
    printf("Account =%f,stat =%f,Eco =%f,Ba =%f,Gujarati =%f,Computer =%f,,English =%f", marks[0], marks[1], marks[2], marks[3], marks[4], marks[5], marks[6]);
    printf("percentage is %f", (marks[0] + marks[1] + marks[2] + marks[3] + marks[4] + marks[5] + marks[6]) / 7);
}

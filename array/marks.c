#include <stdio.h>

int main()
{
    int marks[3][3];
    marks[0][0] = 90;
    marks[0][1] = 95;
    marks[0][2] = 80;

    marks[1][0] = 70;
    marks[1][1] = 80;
    marks[1][2] = 60;

    marks[2][0] = 95;
    marks[2][1] = 90;
    marks[2][2] = 71;

    printf("First Student\n");
    printf("%d\n", marks[0][0]);
    printf("%d\n", marks[0][1]);
    printf("%d\n", marks[0][2]);
    printf("percentage is %d\n", (marks[0][0] + marks[0][1] + marks[0][2]) / 3);
    printf("==================================================\n");

    printf("second student\n");
    printf("%d\n", marks[1][0]);
    printf("%d\n", marks[1][1]);
    printf("%d\n", marks[1][2]);
    printf("percentage is %d\n", (marks[1][0] + marks[1][1] + marks[1][2]) / 3);
    printf("==================================================\n");

    printf("third Student\n");
    printf("%d\n", marks[2][0]);
    printf("%d\n", marks[2][1]);
    printf("%d\n", marks[2][2]);
    printf("percentage is %d\n", (marks[2][0] + marks[2][1] + marks[2][2]) / 3);
    printf("==================================================\n");
}
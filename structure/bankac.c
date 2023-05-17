#include<stdio.h>

typedef struct bankaccount
{
    int acnumber;
    char name[50];
} ac;

int main()
{
    ac acc1 = {185010987 , "HET"};
    printf("ACCOUNT NUMBER IS : %d\n",acc1.acnumber);
    printf("ACCOUNT HOLDER'S NAME IS : %s\n",acc1.name);
}
#include<stdio.h>
#include<string.h>
void salting(char Password[]);
int main()
{
    char Password[100];
    scanf("%s",Password);
    salting(Password);

}
void salting(char Password[])
{
    char salting[]="123";
    char NewPassword[200];
    strcpy(NewPassword,Password);
    strcat(NewPassword,salting);
    puts(NewPassword);

}
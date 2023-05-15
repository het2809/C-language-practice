#include <stdio.h>

int main()
{
    char FirstName[50];
    char SurName[50];
    char FullName[100];
    // scanf("%s",FirstName);
    // printf("Your Name Is %s\n",FirstName);
    // scanf("%s",SurName);
    // printf("Your Surname is %s",SurName);
    fgets(FullName, 100, stdin);
    printf("Your Full Name Is :");
    puts(FullName);
}
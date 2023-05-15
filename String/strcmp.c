#include<stdio.h>
#include<string.h>
int main()
{
    // char str[]="CODEWINGLET";
    // char str1[]="LOOPNIX";

    // printf("%d",strcmp(str,str1));

    char str1[50];
    char str2[50];

    fgets(str1,50,stdin);
    puts(str1);

    fgets(str2,50,stdin);
    puts(str2);

    printf("%d",strcmp(str1,str2));
}
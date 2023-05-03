#include <stdio.h>
int main()
{
    char ch;
    printf("enter your character");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        printf("lowercase");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("UPPERCASE");
    }
    else
    {
        printf("special character");
    }
}
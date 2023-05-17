#include <stdio.h>
void character(char str[], char ch);
int main()
{
    char str[100];
    fgets(str, 100, stdin);
    char ch;
    printf("enter your character");
    scanf("%c", &ch);
    character(str, ch);
}
void character(char str[], char ch)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("Character is present");
            return;
        }
    }
    printf("Character is not present");
}
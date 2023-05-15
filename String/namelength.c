#include<stdio.h>
int countlength(char arr[]);

int main()
{
    char Name[100];
    fgets(Name , 100 , stdin);
    printf("Your Name Is :");
    puts(Name);
    printf("your length is : %d",countlength(Name));

}
int countlength(char arr[])
{
    int count=0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count-1;
    
}
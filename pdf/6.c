#include<stdio.h>
int countlength(char arr[]);

int main()
{
    char Number[100];
    fgets(Number , 100 , stdin);
    printf("Your Number Is :");
    puts(Number);
    printf("your length is : %d",countlength(Number));

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
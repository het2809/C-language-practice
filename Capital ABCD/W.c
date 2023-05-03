#include<stdio.h>

int main()
{   int x=5;
    int y=5;
    for(int i=0; i<5; i++)
{
    for(int j=0; j<=10; j++)
    {
       if(j==x||j==y||j==0||j==10)
       {
        printf("* ");
       } 
       else
       {
        printf("  ");
       }
    }
    x++;
    y--;
    printf("\n");
}
}
#include<stdio.h>

int main()
{   int x=5;
    for (int i = 0; i <=5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j==x||i==1||i==5)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
            
        }
        x--;
        printf("\n");
    }
}
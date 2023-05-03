#include<stdio.h>

int main()
{
    int x=1;
    int y=9;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j==x||j==y)
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
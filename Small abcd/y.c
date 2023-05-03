#include<stdio.h>

int main()
{
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i==0&&j<2||j==2&&i<3||i==2&&j>1||j==4||i==4)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
            
        }
       
        printf("\n");
    }
    
}
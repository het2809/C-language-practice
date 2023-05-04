#include <stdio.h>

int main()
{
    int x = 5;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j == x || j == 0)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        x--;
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j == x || j == 0)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        x++;
    }
}
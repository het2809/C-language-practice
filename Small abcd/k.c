#include <stdio.h>

int main()
{
    int x = 5;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
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
        x--;

        printf("\n");
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
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
        x++;

        printf("\n");
    }
}
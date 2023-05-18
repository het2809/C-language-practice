#include <stdio.h>

int main()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j == 0 || i == 3 && j < 4 || i == 0 && j < 4 || i == 6 && j < 4 || i == 2 && j > 3 || i == 1 && j > 3 || i == 4 && j > 3 || i == 5 && j > 3)
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
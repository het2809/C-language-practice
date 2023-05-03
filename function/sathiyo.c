#include <stdio.h>

int main()
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (j == 0 && i < 5 || i == 4 || j == 8 && i > 4 || j == 4 || i == 8 && j < 5 || i == 0 && j > 4)
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
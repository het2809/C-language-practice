#include <stdio.h>

int main()
{
    for (int i = 0; i <= 6; i++)
    {
        for (int j = 0; j <= 6; j++)
        {
            if (j == 0 && i < 2 || i == 0 && j < 3 || j == 2 || i == 0 && j == 3 || j == 4 || i == 0 || j == 6)
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
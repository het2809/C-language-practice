#include <stdio.h>

int main()
{
    int x = 4;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (j == x || i == 4 && j < 6 || j == 0 && i == 1 || i == 0 && j > 0 && j < 3)
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
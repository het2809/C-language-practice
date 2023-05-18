#include <stdio.h>

int main()
{
    int x = 1;
    int y = 9;
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j <= 5; j++)
        {
            if (i == 0 && j < 3 || j == 2 || i == 5 && j < 3 || i == 0 && j > 3 || j == 4 || i == 5 && j > 3)
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
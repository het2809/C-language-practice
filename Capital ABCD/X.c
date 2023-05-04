#include <stdio.h>

int main()
{
    int x = 3;
    int y = 9;
    for (int i = 3; i <= 10; i++)
    {
        for (int j = 3; j <= 9; j++)
        {
            if (j == x || j == y)
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
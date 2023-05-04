#include <stdio.h>

int main()
{
    int x = 4;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 5; j < 10; j++)
        {
            if (j == x || j == 5 || i == 0 && j > 4 || j == 9 && i == 1 || i == 2 && j > 4)
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
#include <stdio.h>

int main()
{
    int x = 1;
    int y = 9;
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            if (j == x || j == y)
            {
                printf(" *");
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
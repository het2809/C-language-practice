#include <stdio.h>

int main()
{
    int x = 3;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= 5; j++)
        {
            if (j == x || j == 3 || i == 3)
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
#include <stdio.h>

int main()
{
    int x = 5;
    int y = 5;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 4; j < 10; j++)
        {
            if (j == x || j == 4 && i < 3 || i == 0 || j == 9 || i == 3)
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
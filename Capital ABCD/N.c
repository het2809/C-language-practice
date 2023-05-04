#include <stdio.h>

int main()
{
    int x = 5;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 5; j < 10; j++)
        {
            if (j == x || j == 5 || j == 9)
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
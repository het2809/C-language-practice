#include <stdio.h>

int main()
{
    int num;
    int x = 4;
    int y = 3;

    printf("enter your number");
    scanf("%f", &num);
    switch (num)
    {
    case 1:
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (i == 1 && j < 3 || j == 2 || i == 4)
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
        break;

    case 2:
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (j == x || i == 4 && j < 5 || j == 0 && i < 2 || i == 0 && j < 4)
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
        break;
    case 3:
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (i % 2 == 0 || j == 4)
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
    break;

    case 4:
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j <= 5; j++)
            {
                if (j == y || j == 3 || i == 3)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            y--;
            printf("\n");
        }
    }
    break;
    case 5:
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (i == 0 || j == 0 && i < 3 || i == 2 || j == 4 && i > 2 || i == 4)
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
    break;
    case 6:
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (i == 0 || j == 0 || i == 4 || j == 4 && i > 1 || i == 2)
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
    break;
    case 7:
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (i == 0 & j < 3 || j == 2 || i == 2)
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
    break;
    case 8:
    {
        for (int i = 0; i < 7; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (i % 3 == 0 || j == 0 || j == 4)
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
    break;

    case 9:
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (j == 4 || i == 4 || i == 0 || j == 0 && i < 3 || i == 2)
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
    break;
    default:
    {
        printf("your number is invalid\n");
    }
    break;
    }
}
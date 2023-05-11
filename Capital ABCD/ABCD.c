#include <stdio.h>
int main()
{
    int x = 5;
    int y = 5;
    int h = 1;
    int e = 9;
    int t = 4;
    int n = 3;
    int position;
    int arr[26];
    int a;
    ;

    for (int i = 0; i < a; i--)
    {
        printf("enter number");
        scanf("%d", &position);

        switch (position)
        {
        case 1:
            x = 5;
            y = 5;
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    if (j == x || j == y || j == 5 & i == 2)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                x++;
                y--;
                printf("\n");
            };
            break;
        case 2:
            for (int i = 0; i < 7; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (j == 0 || i == 3 && j < 4 || i == 0 && j < 4 || i == 6 && j < 4 || i == 2 && j > 3 || i == 1 && j > 3 || i == 4 && j > 3 || i == 5 && j > 3)
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
        case 3:
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (i == 0 && j > 0 || j == 0 && i > 0 && i < 4 || i == 4 && j > 0)
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
        case 4:
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (j == 1 || j == 4 && i > 0 && i < 4 || i == 0 || i == 4)
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
        case 5:
            for (int i = 0; i < 7; i++)
            {
                for (int j = 0; j < 6; j++)
                {
                    if (j == 0 || i % 3 == 0)
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
        case 6:
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (j == 0 || i == 0 || i == 2)
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
        case 7:
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (j == 0 || i == 0 || i == 4 || j == 4 && i > 1 || j == 2 && i == 2 || j == 3 && i == 2)
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

        case 8:
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (j == 0 || i == 2 || j == 4)
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

        case 9:
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (i == 0 || j == 2 || i == 4)
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

        case 10:
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (i == 0 || j == 2 || i == 4 && j == 1 || i == 4 && j == 0 || i == 3 && j == 0)
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

        case 11:
            x = 5;
            for (int i = 1; i < 5; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    if (j == x || j == 0)
                    {
                        printf("* ");
                    }
                    else
                    {
                        printf("  ");
                    }
                }
                printf("\n");
                x--;
            }

            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    if (j == x || j == 0)
                    {
                        printf("* ");
                    }
                    else
                    {
                        printf("  ");
                    }
                }
                printf("\n");
                x++;
            }
            break;

        case 12:
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (j == 0 || i == 4)
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
        case 13:
            h = 1;
            e = 9;
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j <= 10; j++)
                {
                    if (j == h || j == e || j == 0 || j == 10)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                h++;
                e--;
                printf("\n");
            }
            break;

        case 14:
            x = 5;
            for (int i = 0; i < 5; i++)
            {
                for (int j = 5; j <= 10; j++)
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
            break;
        case 15:
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (i == 0 && j > 0 && j < 4 || j == 0 && i > 0 && i < 4 || i == 4 && j > 0 && j < 4 || j == 4 && i > 0 && i < 4)
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
        case 16:
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (j == 0 || i == 0 || j == 4 & i < 3 || i == 2)
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
        case 17:
            x = 5;
            y = 5;
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
            break;

        case 18:
            t = 4;
            for (int i = 0; i < 5; i++)
            {
                for (int j = 5; j < 10; j++)
                {
                    if (j == t || j == 5 || i == 0 && j > 4 || j == 9 && i == 1 || i == 2 && j > 4)
                    {
                        printf("* ");
                    }
                    else
                    {
                        printf("  ");
                    }
                }
                t++;
                printf("\n");
            }
            break;

        case 19:
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
            break;

        case 20:
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (j == 2 || i == 0)
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

        case 21:
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (j == 0 && i < 4 || i == 4 && j > 0 && j < 4 || j == 4 && i < 4)
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
        case 22:
            h = 1;
            e = 9;
            for (int i = 1; i < 6; i++)
            {
                for (int j = 1; j < 10; j++)
                {
                    if (j == h || j == e)
                    {
                        printf("* ");
                    }
                    else
                    {
                        printf("  ");
                    }
                }
                h++;
                e--;
                printf("\n");
            }
            break;

        case 23:
            x = 5;
            y = 5;
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j <= 10; j++)
                {
                    if (j == x || j == y || j == 0 || j == 10)
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
            break;

        case 24:
            n = 3;
            e = 9;
            for (int i = 3; i <= 10; i++)
            {
                for (int j = 3; j <= 9; j++)
                {
                    if (j == n || j == e)
                    {
                        printf("* ");
                    }
                    else
                    {
                        printf("  ");
                    }
                }
                n++;
                e--;
                printf("\n");
            }
            break;

        case 25:
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (i == 0 && j < 2 || j == 2 && i < 3 || i == 2 && j > 1 || j == 4 || i == 4)
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

        case 26:
            x = 5;
            for (int i = 0; i <= 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (j == x || i == 1 || i == 5)
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

        default:
            break;
        }
        if (position > 26)
        {
            printf("You entered wrong number.");
            printf("\nPlease Try Again");
            break;
        }
    }
}
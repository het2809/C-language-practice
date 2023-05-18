#include <stdio.h>
int main()
{
    int x = 5;
    int y = 5;
    int h = 1;
    int e = 9;
    int t = 4;
    int n = 3;
    char q;
    char position[50];
    printf("Enter Your Name :");
    fgets(position, 50, stdin);
    printf("your name is %s\n", position);
    for (int i = 0; i < position[i]; i++)
    {
        printf("\n%c\n", position[i]);
        switch (position[i])
        {
        case 'A':
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
        case 'B':
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
        case 'C':
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
        case 'D':
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
        case 'E':
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
        case 'F':
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
        case 'G':
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

        case 'H':
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

        case 'I':
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

        case 'J':
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

        case 'K':
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

        case 'L':
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

        case 'M':
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

        case 'N':
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
        case 'O':
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
        case 'P':
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
        case 'Q':
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

        case 'R':
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

        case 'S':
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

        case 'T':
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

        case 'U':
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
        case 'V':
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

        case 'W':
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

        case 'X':
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

        case 'Y':
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

        case 'Z':
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
        case 'a':
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (j == 0 && i < 3 || i == 3 || j == 4 || i == 0 && j < 3)
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
        case 'b':
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (j == 0 || i == 4 || j == 4 && i > 1 || i == 2)
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
        case 'c':
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
        case 'd':

            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (j == 4 || i == 4 || j == 0 && i > 1 || i == 2)
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
        case 'e':

            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (j == 0 || i == 4 || i == 0 || j == 4 && i < 3 || i == 2)
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
        case 'f':

            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (j == 2 || i == 2 || j == 3 && i == 0 || j == 4 && i == 0)
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
        case 'g':
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

            break;
        case 'h':
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (j == 0 || i == 2 || j == 4 && i > 2)
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
        case 'i':

            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (j == 2 && i > 0)
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
        case 'j':
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (j == 4 || i == 4 || j == 0 && i > 2)
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
        case 'k':
            x = 5;

            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 4; j++)
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
                x--;

                printf("\n");
            }
            for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 5; j++)
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
                x++;

                printf("\n");
            }

            break;
        case 'l':

            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (j == 0)
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
        case 'm':
            for (int i = 0; i <= 6; i++)
            {
                for (int j = 0; j <= 6; j++)
                {
                    if (j == 0 && i < 2 || i == 0 && j < 3 || j == 2 || i == 0 && j == 3 || j == 4 || i == 0 || j == 6)
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
        case 'n':
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (j == 0 && i == 0 || j == 1 || i == 0 && j < 4 || j == 4)
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
        case 'o':

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
        case 'p':

            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (j == 0 || i == 0 || j == 4 && i < 3 || i == 2)
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
        case 'q':

            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (j == 4 || i == 0 || j == 0 && i < 3 || i == 2)
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
        case 'r':

            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (j == 0 || i == 0 || j == 4 && i < 2)
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
        case 's':
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (i == 0 && j > 0 || j == 0 && i < 3 || i == 2 || j == 4 && i > 2 || i == 4)
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
        case 't':
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (j == 2 || i == 2)
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
        case 'u':
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (j == 0 || i == 4 || j == 4)
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

        case 'v':

            x = 1;
            y = 9;
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 10; j++)
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
            break;
        case 'w':

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
        case 'x':
            x = 3;
            y = 9;
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

            break;

        case 'y':
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
        case 'z':
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
    }
}
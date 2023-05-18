#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RockPaperScissor(char you, char comp);
// s-r w-p g-s
int main()
{
    char you, comp;
    srand(time(0));
    int number = rand() % 100 + 1;
    if (number < 33)
    {
        comp = 'r';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'p';
    }
    else
    {
        comp = 's';
    }
    printf("Enter 'r' for rock , Enter 'p' for paper , Enter 's' for scissor\n");
    scanf("%c", &you);
    int result = RockPaperScissor(you, comp);
    printf("You Choose %c and Computer Choose %c", you, comp);
    if (result == 0)
    {
        printf("\nGame Draw!\n");
    }
    else if (result == 1)
    {
        printf("\nYou Win!\n");
    }
    else
    {
        printf("\nYou Lose!\n");
    }
}
int RockPaperScissor(char you, char comp)
{
    if (you == comp)
    {
        return 0;
    }

    if (you == 'r' && comp == 's')
    {
        return 1;
    }
    else if (you == 's' && comp == 'r')
    {
        return -1;
    }

    if (you == 'r' && comp == 'p')
    {
        return -1;
    }
    else if (you == 'p' && comp == 'r')
    {
        return 1;
    }

    if (you == 's' && comp == 'p')
    {
        return 1;
    }
    else if (you == 'p' && comp == 's')
    {
        return -1;
    }
}
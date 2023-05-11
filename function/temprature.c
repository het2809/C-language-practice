#include <stdio.h>
int main()
{
        int temprature;
        printf("enter temprature");
        scanf("%f", &temprature);

        if (temprature < 0)
        {
                printf("freezing weather");
        }
        else if (temprature < 10)
        {
                printf("very cold weather");
        }
        else if (temprature < 20)
        {
                printf("cold weather");
        }
        else if (temprature < 30)
        {
                printf("Normal in Temp");
        }
        else if (temprature < 40)
        {
                printf("Its Hot");
        }
        else
        {
                printf("Its Very Hot");
        }
}

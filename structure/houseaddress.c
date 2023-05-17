#include <stdio.h>

struct address
{
    int HouseNo;
    char City[100];
    char State[100];
};

int main()
{
    struct address adds[5];
    printf("Enter Info For Person 1 : ");
    scanf("%d", &adds[0].HouseNo);
    scanf("%s", &adds[0].City);
    scanf("%s", &adds[0].State);

    printf("Enter Info For Person 2 : ");
    scanf("%d", &adds[1].HouseNo);
    scanf("%s", &adds[1].City);
    scanf("%s", &adds[1].State);
    printf("Enter Info For Person 3 : ");
    scanf("%d", &adds[2].HouseNo);
    scanf("%s", &adds[2].City);
    scanf("%s", &adds[2].State);
    printf("Enter Info For Person 4 : ");
    scanf("%d", &adds[3].HouseNo);
    scanf("%s", &adds[3].City);
    scanf("%s", &adds[3].State);
    printf("Enter Info For Person 5 : ");
    scanf("%d", &adds[4].HouseNo);
    scanf("%s", &adds[4].City);
    scanf("%s", &adds[4].State);

    printadd(adds[0]);
    printadd(adds[1]);
    printadd(adds[2]);
    printadd(adds[3]);
    printadd(adds[4]);
}
void printadd(struct address add)
{
    printf("address is : %d ,%s ,%s\n",add.HouseNo,add.City,add.State);
}
#include<stdio.h>

typedef struct date
{
    int date;
    int month;
    int year;
} date ;

void display(date d)
{
    printf("YOUR DATE IS %d/%d/%d\n",d.date,d.month,d.year);
}
int main()
{
    date d ={17 , 05 , 22};
    display(d);

}
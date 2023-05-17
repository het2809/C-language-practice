#include<stdio.h>

struct date
{
    int date;
    int month;
    int year;
};

void display(struct date d )

{
    printf("YOUR DATE IS :%d/%d/%d\n",d.date,d.month,d.year);
}
int datecmp(struct date d1 ,struct  date d2)
{
    if (d1.year>d2.year)
    {
        return 1;
    }
       if (d1.year<d2.year)
    {
        return -1;
    }
        if (d1.month>d2.month)
    {
        return 1;
    }
       if (d1.month<d2.month)
    {
        return -1;
    }
        if (d1.date>d2.date)
    {
        return 1;
    }
       if (d1.date<d2.date)
    {
        return -1;
    }
       return 0;
}
int main()
{
    struct date d={30,4,1998};
    struct date d2={28,9,2005};
    display(d);
    display(d2);
    int a=datecmp(d,d2);
    printf("date comparison is :%d",a);

}
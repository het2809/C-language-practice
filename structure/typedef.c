#include<stdio.h>

typedef struct ComputerEngineer
{   
    int roll;
    float marks;
    char name[50];
} coe; 
int main()
{   
  coe s1;
  s1.roll=29;

  printf("roll is %d",s1.roll); 
}

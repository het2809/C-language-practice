#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr=fopen("NEW.txt", "w");

    char name[100];
    int age;
    float cgpa;

    printf("enter your name : ");
    scanf("%s",&name);
    printf("enter your age : ");
    scanf("%d",&age);
    printf("enter your cgpa : ");
    scanf("%f",&cgpa);
    
    fprintf(fptr , "%s\t" , name);
    fprintf(fptr , "%d\t" , age);
    fprintf(fptr , "%f\t" , cgpa);
}
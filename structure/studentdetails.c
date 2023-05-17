#include <stdio.h>
#include <string.h>
struct student
{
    char name[100];
    int roll;
    float marks;
};

int main()
{
    struct student s1;
    {
        s1.roll = 43;
        s1.marks = 76.22;
        strcpy(s1.name, "CHOTU");
    };

    printf("Student Name Is :%s\n", s1.name);
    printf("Student Roll Number Is :%d \n", s1.roll);
    printf("Student Marks Is: %f\n", s1.marks);

    struct student s2;
    {
        s2.roll = 50;
        s2.marks = 76.22;
        strcpy(s2.name, "UTSAV");
    };

    printf("Student Name Is :%s\n", s2.name);
    printf("Student Roll Number Is :%d\n", s2.roll);
    printf("Student Marks Is: %f\n", s2.marks);

    struct student s3;
    {
        s3.roll = 29;
        s3.marks = 90.92;
        strcpy(s3.name, "HET");
    };

    printf("Student Name Is :%s\n", s3.name);
    printf("Student Roll Number Is :%d \n", s3.roll);
    printf("Student Marks Is: %f\n", s3.marks);
}
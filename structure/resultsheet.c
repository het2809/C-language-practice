#include <stdio.h>
#include <string.h>
struct resultsheet
{
    char name[50];
    char fathersname[50];
    char address[50];
    int rollno;
    int admissionno;
    int class;
};

int main()
{
    struct resultsheet s1;
    {
        s1.rollno = 29;
        s1.admissionno = 122;
        s1.class = 12;
        strcpy(s1.name, "HET");
        strcpy(s1.address, "Surat");
        strcpy(s1.fathersname, "BHARATBHAI");
    }
    printf("student roll number is :%d\n", s1.rollno);
    printf("student admission number is :%d\n", s1.admissionno);
    printf("student name is :%s\n", s1.name);
    printf("student father's name is :%s\n", s1.fathersname);
    printf("student address is :%s\n", s1.address);
    printf("student class is :%d\n", s1.class);
}
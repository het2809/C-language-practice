#include<stdio.h>
void slice(char str[],int n,int m);
int main()
{
    char name[100];
    fgets(name,100,stdin);
    puts(name);
    slice(name,1,9);
}
void slice(char str[],int n,int m)
{
    char newstr[100];
    int j=0;
    for (int i = n; i <=m; i++ ,j++)
    {
        newstr[j]=str[i];
    }
    newstr[j]='\0';
    puts(newstr);
}
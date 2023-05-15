#include<stdio.h>
#include<string.h>
int main()
{
    // char Firststr[]="CODE";
    // char Secondstr[]="WINGLET";
    // strcat(Firststr,Secondstr);
    // puts(Secondstr);


  char str1[50];
  char str2[50];

  fgets(str1,50,stdin);
  puts(str1);
  fgets(str2,50,stdin);
  puts(str2);
  strcat(str1,str2);
  puts(str1);
}

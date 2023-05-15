#include<stdio.h>
#include<string.h>
int main()
{
    // char oldstr[]="CODE";
    // char newstr[]="WINGLET";
    // strcpy(newstr,oldstr);
    // puts(newstr);



  char str1[50];
  char str2[50];

  fgets(str1,50,stdin);
  puts(str1);
  fgets(str2,50,stdin);
  puts(str2);
  strcpy(str1,str2);
  puts(str1);
}

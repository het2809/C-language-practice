#include<stdio.h>

struct address
{
    int houseno;
    char city[100];
    char stat[100];
};

int main()
{
    struct address s1={502 , "Surat" , "Gujarat"};
    struct address s2={102 , "Ahmedabad" , "Gujarat"};
    struct address s3={302 , "Rajkot" , "Gujarat"};
    struct address s4={1002 , "Surat" , "Gujarat"};
    struct address s5={1502 , "Bhavnagar" , "Gujarat"};
    
    printf("\n-----------------------------------------------\n");
    printf("House No. Of 1st People is %d\n",s1.houseno);
    printf("City Of 1st People is %s\n",s1.city);
    printf("Stat Of 1st People is %s\n",s1.stat);

    printf("\n-----------------------------------------------\n");
    printf("House No. Of 2nd People is %d\n",s2.houseno);
    printf("City Of 2nd People is %s\n",s2.city);
    printf("Stat Of 2nd People is %s\n",s2.stat);

       printf("\n-----------------------------------------------\n");
    printf("House No. Of 3rd People is %d\n",s3.houseno);
    printf("City Of 3rd People is %s\n",s3.city);
    printf("Stat Of 3rd People is %s\n",s3.stat);

    printf("\n-----------------------------------------------\n");
    printf("House No. Of 4th People is %d\n",s4.houseno);
    printf("City Of 4th People is %s\n",s4.city);
    printf("Stat Of 4th People is %s\n",s4.stat);

     printf("\n-----------------------------------------------\n");
    printf("House No. Of 5th People is %d\n",s5.houseno);
    printf("City Of 5th People is %s\n",s5.city);
    printf("Stat Of 5th People is %s\n",s5.stat);



   
}
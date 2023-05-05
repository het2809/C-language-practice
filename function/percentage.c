#include <stdio.h>

float Percentage(float Account, float Statisitics, float Economics, float Ba, float English, float Gujarati, float Sp);

int main()
{
    float Account;
    float Statisitics;
    float Economics;
    float Ba;
    float English;
    float Gujarati;
    float Sp;
    printf("enter your Account marks");
    scanf("%f", &Account);
    printf("enter your Statistics marks");
    scanf("%f", &Statisitics);
    printf("enter your Economics marks");
    scanf("%f", &Economics);
    printf("enter your Ba marks");
    scanf("%f", &Ba);
    printf("enter your English marks");
    scanf("%f", &English);
    printf("enter your Gujarati marks");
    scanf("%f", &Gujarati);
    printf("enter your Sp marks");
    scanf("%f", &Sp);
    printf("your percentage is %f", Percentage(Account, Statisitics, Economics, Ba, English, Gujarati, Sp));
}

float Percentage(float Account, float Statisitics, float Economics, float Ba, float English, float Gujarati, float Sp)
{
    return ((Account + Statisitics + Economics + Ba + English + Gujarati + Sp) / 7);
}
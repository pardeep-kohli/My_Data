#include <stdio.h>
int main()
{
    int days, day, year, month, week;
    printf("How many Days do you want to Convert : ");
    scanf("%d",&days);
    year=days/365;
    printf("year : %d\n",year);
    days=days-(year*365);
    month=days/30;
    printf("month: %d\n",month);
    days=days-(month*30);
    week=days/7;
    printf("week : %d\n",week);
    days=days-(week*7);
    day=days;
    printf("days : %d\n",days);
    return 0;
}